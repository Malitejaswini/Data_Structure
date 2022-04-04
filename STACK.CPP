#include<iostream.h>
#include<conio.h>
int stack[5];
int top=-1;
void push()
{
int x;
cout<<"Enter value:- "<<endl;
cin>>x;
if(top==5-1)
{
cout<<"overflow"<<endl;
}
else
{
top++;
stack[top]=x;
}
}
void pop()
{
int data;
if(top==-1)
{
cout<<"Under flow"<<endl;
}
else
{
data=stack[top];
cout<<data<<endl;
top--;
}
}
void peek()
{
if(top==-1)
{
cout<<"Stack is empty"<<endl;
}
else
{
cout<<stack[top]<<endl;
}
}
void display()
{
int i;
for(i=top;i>=0;i--)
{
cout<<"Value in stack is:-"<<stack[i]<<endl;
}
}
void main()
{
int ch;
do
{
cout<<"Enter choice:- 1:push,2:pop,3:peek,4:display"<<endl ;
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
   cout<<"Invalid choice"<<endl;
   }
   }
   while(ch!=0);
   }

