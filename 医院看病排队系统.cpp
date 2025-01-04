#define _CRT_SECURE_NO_WARNINGS
//[˵����Ҫ��]
//���˵�ҽԺ��������Ҫ�ŶӵȺ��ȵ��ȿ������д����ģ�ⲡ�˿����Ĺ��̡��ٺ󵽵Ĳ��˱�����������棻���Ŷӹ����еĲ��˿�����ʱ�鿴�Լ�ǰ�滹�ж��ٲ��˵Ⱥ򿴲�����ϵͳ����ʾ���ڿ����ĺ���һ����������׼����
//[��ʾ]
//(1)	����ṹ���ʾ������Ϣ(�������Ա�����)��
//(2)	ʹ�õ�����ʵ�֡�
//(3)	�ֱ��庯��ʵ���ڵ�����ĺ������һ��Ԫ�أ�ɾ��������ĵ�һ��Ԫ�أ����ҵ�������κ�һ��Ԫ��(����������)�ȹ��ܡ�
//(4)	��main�����н���ģ�⡣
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// ���岡����Ϣ�Ľṹ��
struct Patient {
    char name[20]; // ����
    char gender[10]; // �Ա�
    int age; // ����
    int number; // ���˺���
    Patient* next; // ָ����һ�����˵�ָ��
};

// �Һţ����벡�˵������ĩβ
void insertPatient( Patient** head, char* name, char* gender, int age, int number) {
    Patient* newPatient = ( Patient*)malloc(sizeof(Patient));
    strcpy(newPatient->name, name);
    strcpy(newPatient->gender, gender);
    newPatient->age = age;
    newPatient->number = number; // ���ò��˺���
    newPatient->next = NULL;

    if (*head == NULL) {
        *head = newPatient; // �������Ϊ�գ����²��˳�Ϊͷ�ڵ�
    }
    else {
        Patient* temp = *head;
        while (temp->next != NULL) {
            temp = temp->next; // �ҵ���������һ���ڵ�
        }
        temp->next = newPatient; // ���²�����ӵ�����ĩβ
    }
}
// �����ɾ������ĵ�һ������
void seeDoctor(struct Patient** head) {
    if (*head == NULL) {
        printf("û�в��˿��Ծ��\n");
        return;
    }
    struct Patient* temp = *head;
    printf("%d��-%s ���ھ���...\n", temp->number, temp->name); // ������ھ���Ĳ��������ͺ���

    // ������һ������
    if (temp->next != NULL) {
        printf("�� %d��-%s ���þ����׼����\n", temp->next->number, temp->next->name);
    }
    else {
        printf("��ǰû�����������Ŷӡ�\n");
    }

    *head = (*head)->next; // ��ͷ�ڵ����
    free(temp); // �ͷű����ﲡ�˵��ڴ�
}
// ���������Ҳ���
Patient* findPatientByName(struct Patient* head, char* name, int* position) {
    struct Patient* temp = head;
    *position = 0; // ��ʼ��ǰ�没�˵�����
    while (temp != NULL) {
        if (strcmp(temp->name, name) == 0) {
            return temp; // �ҵ����ˣ����ظýڵ�
        }
        temp = temp->next; // ����������һ���ڵ�
        (*position)++; // ����
    }
    return NULL; // û���ҵ�����
}

int main() {
    struct Patient* head = NULL; // ��ʼ������ͷ
    int patientNumber = 1; // ���˺����1��ʼ

    while (1) {
        printf("-------------------��ӭʹ�ÿ����Ŷ�ϵͳ---------------------\n");
        printf("����: 1 �Һ�\n");
        printf("����: 2 ����\n");
        printf("����: 3 �����Լ��Ŷ����\n");
        printf("����: 4 �˳�ϵͳ\n");
        printf("============================================================\n");
        //����ѡ�񣬲�����ѡ��
        int choose;
        scanf("%d", &choose);
        //���壬������ѡ����Ŀ
        switch (choose) {
            //�Һ�
        case 1: {
            char name[20], gender[10];
            int age;
            printf("���������������");
            scanf("%s", name);
            printf("����������Ա�");
            scanf("%s", gender);
            printf("������������䣺");
            scanf("%d", &age);
            insertPatient(&head, name, gender, age, patientNumber);
            printf("�Һųɹ�����ĺ�����: %d\n ", patientNumber);
            patientNumber++; // ���Ӳ��˺���
            break;
        }
              //����
        case 2:
            seeDoctor(&head);
            break;

            //�����Լ����Ŷ����
        case 3: {
            char name[20];
            int position;
            printf("������Ҫ�����˵�������");
            scanf("%s", name);
            struct Patient* foundPatient = findPatientByName(head, name, &position);
            if (foundPatient) {
                printf("������Ϣ�� - %s,  %s,  %d,  %d��\n",
                    foundPatient->name, foundPatient->gender, foundPatient->age, foundPatient->number);
                printf("ǰ�滹�� %d �������Ŷӡ�\n", position);
            }
            else {
                printf("δ�ҵ����ˣ�\n");
            }
            break;
        }
              //�˳�ϵͳ
        case 4:
            printf("лл����ʹ��\n");
            // �ͷ������ڴ�
            while (head != NULL) {
                struct Patient* temp = head;
                head = head->next;
                free(temp);
            }
            exit(0);
            //������ѡ����������ж�
        default:
            printf("�����������������룡\n");
            break;
        }
    }
    return 0;
}

