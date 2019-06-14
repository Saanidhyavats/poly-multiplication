#include<stdio.h>
#include<stdlib.h>

struct node{ int degree;
             int coeff;
             struct node *link;};

struct node* createnode(struct node *start)
{ struct node *temp,*yo=start;
  temp=(struct node *)malloc(sizeof(struct node));
  printf("Enter the degree and coeff");
  scanf("%d %d",&temp->degree,&temp->coeff);
  if(start==NULL)
  {start=temp;
  start->link=NULL;}
  else
  {while(yo->link!=NULL)
   yo=yo->link;
   yo->link=temp;
   temp->link=NULL;}
   return(start);
  }
 

void multi(struct node *start,struct node *started)
{int a,b,c;
 struct node *temp=start; 
 while(temp!=NULL)
  {struct node *tempo=started;
   while(tempo!=NULL)
  { a= temp->degree+tempo->degree;
   b= temp->coeff*tempo->coeff;
   printf("%dx%d\n",b,a);
   tempo=tempo->link;}
    temp=temp->link;}
   } 
   
int main()
{int a,b,i;
 struct node *start=NULL, *started=NULL;
 printf("How much data for poly1");
  scanf("%d",&a);
  for(i=0;i<a;i++)
   start=createnode(start);
  printf("how much data for poly 2");
  scanf("%d",&b);
  for(i=0;i<b;i++)
  started=createnode(started);
  multi(start, started);
 }
  
