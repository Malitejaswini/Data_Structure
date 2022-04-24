//Demonstration of stack.
#include<iostream.h>
#include<conio.h>
int stack[5];
int top=-1;
void push()
{
int data;
cout<<"Enter the data element:- "<<endl;
cin>>data;
if(top==5-1)
{
cout<<"Stack is overflow.."<<endl;
}
else
{
top++;
stack[top]=data;
}
}
void pop()
{
int item;
if(top==-1)
{
cout<<"Stack is underflow.."<<endl;
}
else
{
item=stack[top];
cout<<item<<endl;
top--;
}
}
void peek()
{
if(top==-1)
{
cout<<"Stack is empty.."<<endl;
}
else
{
cout<<stack[top]<<endl;
}
}
void display()
{
int i;
if(top==-1)
{
cout<<"Stack is empty.."<<endl;
}
else
{
cout<<"Stack elements:- "<<endl;
for(i=0;i<5;i++)
{
cout<<stack[i]<<endl;
}
}
}
void main()
{
int ch;
do
{
cout<<"Enter your choice:- 1-push, 2-pop, 3-peek, 4-display"<<endl;
cin>>ch;
switch(ch)
{
case 1:push();
break;
case 2:pop();
break;
case 3:peek();
break;
case 4:display();
break;
default:
cout<<"Invalid"<<endl;
}
}
while(ch!=0);
getch();
clrscr();
}
