// Program to insert element at specific position in array.
#include<iostream.h>
#include<conio.h>
void main()
{
int n,i,e,position;
int a[50];
cout<<"Enter the size of array:- "<<endl;
cin>>n;
cout<<"Enter the array elements:- "<<endl;
for(i=0;i<n;i++)
{
cin>>a[i];
}
cout<<"Enter the element to insert in array:- "<<endl;
cin>>e;
cout<<"Enter the position to insert element:- "<<endl;
cin>>position;
n++;
if(position<=n && position>=0)
{
for(i=n-1;i>=position;i--)
{
a[i]=a[i-1];
}
a[position-1]=e;
cout<<"After inserting element:- "<<endl;
for(i=0;i<n;i++)
{
cout<<a[i]<<endl;
}
}
else
{
cout<<"Invalid position";
}
getch();
clrscr();
}