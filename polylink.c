#include<stdio.h>
#include<stdlib.h>
struct node{
    float coeff;
    int exp;
    struct node *next;
};
struct node *create(struct node *);
struct node *p_insert(struct node *,float,int);
struct node *insert(struct node *,float,int);
void disp(struct node *);
void poly_add(struct node *,struct node *);
void poly_mult(struct node *,struct node*);
void add_term(struct node *);
void main()
{
    struct node *p1=NULL,*p2=NULL;
    printf("Enter 1st polynomial:\n");
    p1=create(p1);
    printf("Enter 2nd polynomial:\n");
    p2=create(p2);
    printf("1st polynomial:");
    disp(p1);
    printf("2nd polynomial:");
    disp(p2);
    poly_add(p1,p2);
    poly_mult(p1,p2);
}
struct node *create(struct node *p)
{
    int i,n,e;
    float c;
    printf("Enter the number of terms:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("Enter coefficient of term %d:",i);
        scanf("%f",&c);
        printf("Enter exponent of term %d:",i);
        scanf("%d",&e);
        p=p_insert(p,c,e);
    }
    return p;
}
struct node *p_insert(struct node *p,float c,int e)
{
    struct node *start,*temp;
    temp=(struct node *)malloc(sizeof(struct node));
    temp->coeff=c;
    temp->exp=e;
    if(p==NULL||e>p->exp)
    {
        temp->next=p;
        p=temp;
    }
    else
    {
        start=p;
        while(start->next!=NULL && start->next->exp>=e)
        {
            start=start->next;
        }
        temp->next=start->next;
        start->next=temp;
    }
    return p;
}
struct node *insert(struct node *p,float c,int e)
{
    struct node *start,*temp;
    temp=(struct node *)malloc(sizeof(struct node));
    temp->coeff=c;
    temp->exp=e;
    if(p==NULL)
    {
        temp->next=p;
        p=temp;
    }
    else
    {
        start=p;
        while(start->next!=NULL)
        {
            start=start->next;
        }
        temp->next=start->next;
        start->next=temp;
    }
    return p;
}
void disp(struct node *p)
{
    if(p==NULL)
    {
        printf("Zero polynomial\n");
        return;
    }
    while(p!=NULL)
    {
        printf("(%.1fx^%d)",p->coeff,p->exp);
        p=p->next;
        if(p!=NULL)
        {
            printf("+");
        }
        else
        {
            printf("\n");
        }
    }
}
void poly_add(struct node *p1,struct node *p2)
{
    struct node *p3=NULL;
    while(p1!=NULL && p2!=NULL)
    {
        if(p1->exp > p2->exp)
        {
            p3=insert(p3,p1->coeff,p1->exp);
            p1=p1->next;
        }
        else if(p2->exp > p1->exp)
        {
            p3=insert(p3,p2->coeff,p2->exp);
            p2=p2->next;
        }
        else if(p1->exp == p2->exp)
        {
            p3=insert(p3,p1->coeff+p2->coeff,p1->exp);
            p1=p1->next;
            p2=p2->next;
        }
    }
    while(p1!=NULL)
    {
        p3=insert(p3,p1->coeff,p1->exp);
        p1=p1->next;
    }
    while(p2!=NULL)
    {
        p3=insert(p3,p2->coeff,p2->exp);
        p2=p2->next;
    }   
    printf("Sum of the two polynomials:");
    disp(p3);
}
void poly_mult(struct node *p1,struct node *p2)
{
    struct node *p3;
    struct node *p2_beg=p2;
    p3=NULL;
    if(p1==NULL||p2==NULL)
    {
        printf("Product is zero polynomial\n");
        return;
    }
    while(p1!=NULL)
    {
        p2=p2_beg;
        while(p2!=NULL)
        {
            p3=p_insert(p3,p1->coeff*p2->coeff,p1->exp+p2->exp);
            p2=p2->next;
        }
        p1=p1->next;
    }
    printf("Product of the two polynomials:");
    add_term(p3);
    disp(p3);
}
void add_term(struct node *p)
{
    struct node *temp;
    temp=p->next;
    while(temp->next!=NULL)
    {
        if(p->exp==temp->exp)
        {
            p->coeff=p->coeff+temp->coeff;
            free(temp);
        }
        temp=temp->next;
        p=p->next;
    }
}

