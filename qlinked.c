// Online C compiler to run C program online
#include <stdio.h>
#include<stdlib.h>
 struct node 
 {
     int data;
     struct node *link;
 }*front,*rear;
 void enqueue(int item);
 void dequeue();
 void display();
 void main()
 {
   int choice;
   while(1)
   {
   printf("enter your required choice\n1.Enqueue\n2.Dequeue\n3.Display\n4.exit");
   scanf("%d",&choice);
   switch(choice)
   {
       case 1:int item;
       printf("\nenter the  item to the linkedlist;\n");
              scanf("%d",&item);
              enqueue(item);
       break;
       case 2:dequeue();
       break;
       case 3:display();
       break;
       case 4:exit(0);
       break;
       default:printf("invalid input");
       
   }
   }
  
 }
 void enqueue()
 {
    struct node *new;
    new=(struct node*)malloc(1*sizeof(struct node));
    new->data=item;
    new->link=NULL;
    if(front=rear=NULL)
    {
        front=rear=new;
    }
    else
    {
     rear->link=new;
     rear=new;
  
    }
      display();
 }
 void dequeue()
 {
    struct node *temp;
     if(front==NULL)
     {
         print("under flow...");
     }
     else if(front==rear)
     {
         temp=front;
         front=rear=NULL;
         free(temp);
     }
     else
     {
         temp=front;
         front=front->link;
         free(temp);
         
     }
 }
 void display()
 
 { 
     struct node *link;
     ptr=front;
     if(front==NULL)
     {
         print("under flow...");
     }
     else
     {
         while(ptr!=NULL)
         {
         print("%d",ptr->data);
         ptr=ptr->link;
     }
 }