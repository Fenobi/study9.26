#pragma once

#include <stdio.h>
#include <assert.h>
#include <stdlib.h>


typedef int SLDataType;

typedef struct SeqList
{
	SLDataType* a;
	int size;//�����С
	int capacity;//�����ܴ���Ŀռ�
}SL;

//��ʼ��
void SeqListInit(SL* ps);

//����
void SeqListDestroy(SL* ps);

//��ӡ
void SeqListPrint(SL* ps);

//����
void SeqListCheckCapacity(SL* ps);

//β��
void SeqListPushBack(SL* ps, SLDataType x);

//ͷ��
void SeqListPushFront(SL* ps, SLDataType x);

//βɾ
void SeqListPopBack(SL* ps);

//ͷɾ
void SeqListPopFront(SL* ps);