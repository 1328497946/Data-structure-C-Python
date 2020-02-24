#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
} LNode, *LinkList;

//单链表的建立算法（头部插入）
LinkList Create_LinkList1()
{
    LinkList L=NULL;
    LNode *s;
    int x;
    scanf("%d", &x);
    while(x!=0)
    {
        s=malloc(sizeof(LNode));
        s->data=x;
        s->next=L;
        L=s;
        scanf("%d", &x);
    }
    return L;
}

//单链表的建立算法（尾部插入）
LinkList Create_LinkList2()
{
    LinkList L=NULL;
    LNode *s, *R=NULL;
    int x;
    scanf("%d", &x);
    while(x!=0)
    {
        s=malloc(sizeof(LNode));
        s->data=x;
        if(L==NULL)
            L=s;
        else
            R->next=s;
        R=s;
        scanf("%d", &x);
    }
    if(R!=NULL)
        R->next=NULL;
    return L;
}

//带头结点的单链表的建立算法（头部插入）
LinkList Create_LinkList4()
{
    LinkList L;
    LNode *R;
    int x;
    L=(LinkList)malloc(sizeof(LNode));
    L->next=NULL;
    scanf("%d", &x);
    while(x!=0)
    {
        R=malloc(sizeof(LNode));
        R->data=x;
        R->next=L->next;
        L->next=R;
        scanf("%d", &x);
    }
    return L;
}

//带头结点的单链表的建立算法(尾部插入）
LinkList Create_LinkList3()
{
    LinkList L;
    LNode *R;
    int x;
    L=(LinkList)malloc(sizeof(LNode));
    L->next=NULL;
    R=L;
    scanf("%d", &x);
    while(x!=0)
    {
        R->next=malloc(sizeof(LNode));
        R->next->data=x;
        R=R->next;
        scanf("%d", &x);
    }
    R->next=NULL;
    return L;
}

//打印不带头节点的单链表
void Print_LinkList1(LinkList L)
{
    LNode *p;
    p=L;
    while(p!=NULL)
    {
        if(p->next!=NULL)
            printf("%d, ", p->data);
        else
            printf("%d", p->data);
        p=p->next;
    }
}

//打印带头结点的单链表
void Print_LinkList2(LinkList L)
{
    LNode *p;
    p=L->next;
    while(p!=NULL)
    {
        if(p->next!=NULL)
            printf("%d, ", p->data);
        else
            printf("%d", p->data);
        p=p->next;
    }
}

//求不带头结点的单链表的长度算法
int Length_LinkList1(LinkList L)
{
    LNode *p=L;
    int j=0;
    while(p)
    {
        j++;
        p=p->next;
    }
    return j;
}

//求带头结点的单链表的长度算法
int Length_LinkList2(LinkList L)
{
    LNode *p=L;
    int j=0;
    while(p->next)
    {
        j++;
        p=p->next;
    }
    return j;
}

//不带头节点单链表按序号查找元素算法
LNode *Get_LinkList1(LinkList L, int i)
{
    LNode *p=L;
    int j=1;
    while(p!=NULL&&j<i)
    {
        p=p->next;
        j++;
    }
    if(j==i)
        return p;
    return NULL;
}

//带头结点单链表按序号查找元素算法
LNode *Get_LinkList2(LinkList L, int i)
{
    LNode *p=L->next;
    int j=1;
    while(p!=NULL&&j<i)
    {
        p=p->next;
        j++;
    }
    if(j==i)
        return p;
    return NULL;
}


//不带头节点单链表的元素定位算法
LNode *Locate_LinkList1(LinkList L, int x)
{
    LNode *p=L;
    while(p!=NULL&&p->data!=x)
        p=p->next;
    return p;
}

//带头结点单链表的元素定位算法
LNode *Locate_LinkList2(LinkList L, int x)
{
    LNode *p=L->next;
    while(p!=NULL&&p->data!=x)
        p=p->next;
    return p;
}

//不带单链表的元素插入算法
int Insert_LinkList1(LinkList *L, int i, int x)
{
    LNode *p, *s;
    int length;
    length = Length_LinkList1(*L);
    //printf("%d\n", length);
    if(i<1||i>length+1)
        return 0;
    if(i==1)
    {
        /*
        对第一个结点进行的操作需要使
        用二级指针，否则头指针不改变
        */
        s=malloc(sizeof(LNode));
        s->data=x;
        s->next=*L;
        *L=s;
        return 1;
    }
    else
    {
        p=Get_LinkList1(*L, i-1);
        s=malloc(sizeof(LNode));
        s->data=x;
        s->next=p->next;
        p->next=s;
        return 1;
    }
}

//带头结点的单链表的插入算法
int Insert_LinkList2(LinkList L, int i, int x)
{
    LNode *p, *s;
    int length;
    length = Length_LinkList2(L);
    if(i<1||i>length+1)
        return 0;
    if(i==1)
    {
        s=malloc(sizeof(LNode));
        s->data=x;
        s->next=L->next;
        L->next=s;
        return 1;
    }
    else
    {
        p=Get_LinkList2(L, i-1);
        s=malloc(sizeof(LNode));
        s->data=x;
        s->next=p->next;
        p->next=s;
        return 1;
    }
}

//不带头结点的单链表的元素删除算法
int Delete_LinkList1(LinkList *L, int i)
{
    LinkList p, s;
    p=Get_LinkList1(*L, i-1);
    if(i==1&&*L)
    {
        LinkList q;
        q=*L;
        *L=(*L)->next;
        free(q);
        return 1;
    }
    if(p==NULL)
    {
        printf("第i-1个结点不存在\n");
        return -1;
    }
    else if(p->next==NULL)
    {
        printf("第i个结点不存在\n");
        return 0;
    }
    else
    {
        s=p->next;
        p->next=s->next;
        free(s);
        return 1;
    }
}

//带头结点的单链表的元素删除算法
int Delete_LinkList2(LinkList L, int i)
{
    LinkList p, s;
    if(i==1&&L->next)
    {
        p=L->next;
        L->next=L->next->next;
        free(p);
    }
    else
    {
        p=Get_LinkList2(L, i-1);
        if(!p)
        {
            printf("第i-1个结点不存在\n");
            return -1;
        }
        else if(!p->next)
        {
            printf("第i个结点不存在\n");
            return 0;
        }
        else
        {
            s=p->next;
            p->next=s->next;
            free(s);
            return 1;
        }
    }
    return 1;
}

int main()
{
    LinkList L;
    L = Create_LinkList4();
    Print_LinkList2(L);
    Delete_LinkList2(L, 4);
    printf("\n");
    Print_LinkList2(L);
    return 0;
}
