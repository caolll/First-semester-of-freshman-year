#define _CRT_SECURE_NO_WARNINGS
//[说明及要求]
//病人到医院看病，需要排队等候，先到先看。请编写程序模拟病人看病的过程。①后到的病人必须排在最后面；②排队过程中的病人可以随时查看自己前面还有多少病人等候看病；③系统能提示正在看病的后面一个病人做好准备。
//[提示]
//(1)	定义结构体表示病人信息(姓名、性别、年龄)。
//(2)	使用单链表实现。
//(3)	分别定义函数实现在单链表的后面插入一个元素，删除单链表的第一个元素，查找单链表的任何一个元素(按姓名查找)等功能。
//(4)	在main函数中进行模拟。
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 定义病人信息的结构体
struct Patient {
    char name[20]; // 姓名
    char gender[10]; // 性别
    int age; // 年龄
    int number; // 病人号码
    Patient* next; // 指向下一个病人的指针
};

// 挂号，插入病人到链表的末尾
void insertPatient( Patient** head, char* name, char* gender, int age, int number) {
    Patient* newPatient = ( Patient*)malloc(sizeof(Patient));
    strcpy(newPatient->name, name);
    strcpy(newPatient->gender, gender);
    newPatient->age = age;
    newPatient->number = number; // 设置病人号码
    newPatient->next = NULL;

    if (*head == NULL) {
        *head = newPatient; // 如果链表为空，则新病人成为头节点
    }
    else {
        Patient* temp = *head;
        while (temp->next != NULL) {
            temp = temp->next; // 找到链表的最后一个节点
        }
        temp->next = newPatient; // 将新病人添加到链表末尾
    }
}
// 就诊，即删除链表的第一个病人
void seeDoctor(struct Patient** head) {
    if (*head == NULL) {
        printf("没有病人可以就诊！\n");
        return;
    }
    struct Patient* temp = *head;
    printf("%d号-%s 正在就诊...\n", temp->number, temp->name); // 输出正在就诊的病人姓名和号码

    // 提醒下一个病人
    if (temp->next != NULL) {
        printf("请 %d号-%s 做好就诊的准备！\n", temp->next->number, temp->next->name);
    }
    else {
        printf("当前没有其他病人排队。\n");
    }

    *head = (*head)->next; // 将头节点后移
    free(temp); // 释放被就诊病人的内存
}
// 按姓名查找病人
Patient* findPatientByName(struct Patient* head, char* name, int* position) {
    struct Patient* temp = head;
    *position = 0; // 初始化前面病人的数量
    while (temp != NULL) {
        if (strcmp(temp->name, name) == 0) {
            return temp; // 找到病人，返回该节点
        }
        temp = temp->next; // 继续查找下一个节点
        (*position)++; // 计数
    }
    return NULL; // 没有找到病人
}

int main() {
    struct Patient* head = NULL; // 初始化链表头
    int patientNumber = 1; // 病人号码从1开始

    while (1) {
        printf("-------------------欢迎使用看病排队系统---------------------\n");
        printf("输入: 1 挂号\n");
        printf("输入: 2 就诊\n");
        printf("输入: 3 查找自己排队情况\n");
        printf("输入: 4 退出系统\n");
        printf("============================================================\n");
        //定义选择，并输入选择
        int choose;
        scanf("%d", &choose);
        //主体，调用所选的项目
        switch (choose) {
            //挂号
        case 1: {
            char name[20], gender[10];
            int age;
            printf("请输入你的姓名：");
            scanf("%s", name);
            printf("请输入你的性别：");
            scanf("%s", gender);
            printf("请输入你的年龄：");
            scanf("%d", &age);
            insertPatient(&head, name, gender, age, patientNumber);
            printf("挂号成功！你的号码是: %d\n ", patientNumber);
            patientNumber++; // 增加病人号码
            break;
        }
              //就诊
        case 2:
            seeDoctor(&head);
            break;

            //查找自己的排队情况
        case 3: {
            char name[20];
            int position;
            printf("请输入要查找人的姓名：");
            scanf("%s", name);
            struct Patient* foundPatient = findPatientByName(head, name, &position);
            if (foundPatient) {
                printf("您的信息是 - %s,  %s,  %d,  %d号\n",
                    foundPatient->name, foundPatient->gender, foundPatient->age, foundPatient->number);
                printf("前面还有 %d 个人在排队。\n", position);
            }
            else {
                printf("未找到病人！\n");
            }
            break;
        }
              //退出系统
        case 4:
            printf("谢谢您的使用\n");
            // 释放链表内存
            while (head != NULL) {
                struct Patient* temp = head;
                head = head->next;
                free(temp);
            }
            exit(0);
            //对输入选择的数进行判断
        default:
            printf("输入有误，请重新输入！\n");
            break;
        }
    }
    return 0;
}

