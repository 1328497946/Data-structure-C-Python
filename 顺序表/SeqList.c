#include<stdio.h>
#include<stdlib.h>
#define MAXSIZE 100

typedef struct
{
    int data[MAXSIZE];
    int last;
} SeqList;

//姚伟灿
SeqList * init_SeqList()
{
    SeqList *L;
    L=malloc(sizeof(SeqList));
    L->last=-1;
    return L;
}

int Insert_SeqList(SeqList *L, int i, int x)
{
    int j;
    if(L->last==MAXSIZE-1)
    {
        printf("表满");
        return -1;
    }
    if(i<1||i>L->last+2)
    {
        printf("位置错");
        return 0;
    }
    for(j=L->last; j>=i-1; j--)
    {
        L->data[j+1]=L->data[j];
    }
    L->data[i-1]=x;
    L->last++;
    return 1;
}

int Delete_SqeList(SeqList *L, int i)
{
    int j;
    if(i<1||i>L->last+1)
    {
        printf("不存在第i个元素");
        return 0;
    }
    for(j=i; j<=L->last; i++)
    {
        L->data[j-1]=L->data[j];
    }
    L->last--;
    return 1;
}

int Location_SeqList(SeqList *L, int x)
{
    int i=0;
    while(i<=L->last&&L->data[i]!=x)
        i++;
    if(i>L->last)
        return -1;
    else
        return i;
}

//以a1为界，a1前面的值均比a1小，a1后面的值均比a1大
void partition_SeqList(SeqList *L)
{
    int i,j;
    int x,y;
    x=L->data[0];
    for(i=1; i<=L->last; i++)
    {
        if(L->data[i]<x)
        {
            y=L->data[i];
            for(j=i-1; j>=0; j--)
            {
                L->data[j+1]=L->data[j];
                L->data[0]=y;
            }
        }
    }
}
//有序表的合并算法
void merge_SeqList(SeqList A, SeqList B, SeqList *C)
{
    int i=0, j=0, k=0;
    while(i<=A.last&&j<=B.last)
    {
        if(A.data[i]<B.data[j])
        {
            C->data[k++]=A.data[i++];
        }
        else
            C->data[k++]=B.data[j++];
    }
    while(i<=A.last)
        C->data[k++]=A.data[i++];
    while(j<=B.last)
        C->data[k++]=B.data[j++];
    C->last=k-1;
}

//打印顺序表
void printall_SeqList(SeqList *L)
{
    int i=0;
    for(; i<=L->last; i++)
        if(i!=L->last)
            printf("%d, ", L->data[i]);
        else
            printf("%d", L->data[i]);
}

int main()
{
    SeqList *L;
    int i=1;
    L=init_SeqList();
    for(; i<=20; i++)
        Insert_SeqList(L, i, i);
    printall_SeqList(L);
    return 0;
}

