#include<iostream.h>
#include<conio.h>
int queue[5],n=5,front=-1,rear=-1;
void insert()
{
int e;
if(rear==n-1)
{
cout<<"Queue is Overflow."<<endl;
}
else
{
if(front==-1)
front=0;
cout<<"Insert the Elements in queue: "<<endl;
cin>>e;
rear++;
queue[rear]=e;
}
}
void Delete()
{
if(front==-1 || front>rear)
{
cout<<"Queue is Underlow"<<endl;
return;
}
else
{
cout<<"Element deleted from queue is "<<queue[front]<<endl;
front++;
}
}
void display()
{
if(front==-1)
{
cout<<"Queue is empty"<<endl;
}
else
{
cout<<"Queue elements are:- "<<endl;
for(int i=front;i<=rear;i++)
{
cout<<queue[i]<<" ";
cout<<endl;
}
}
}
void main()
{
int ch;
cout<<"1)Insert elements in queue, 2)Delete elements from queue, 3)Dispaly Elements of queue, 4)Exit"<<endl;
do
{
cout<<"Enter your choice:- "<<endl;
cin>>ch;
switch(ch)
{
case 1:insert();
break;
case 2:Delete();
break;
case 3:display();
break;
case 4:cout<<""<<endl;
break;
default:cout<<"Invalid choice"<<endl;
}
}
while(ch!=4);
getch();
clrscr();
}
