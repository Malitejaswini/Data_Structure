//Program to insert element at the end of array.
#include<iostream.h>
#include<conio.h>
void main()
{
int i,n,e;
int a[50];
cout<<"Enter the size of array:- "<<endl;
cin>>n;
cout<<"Elements of array:- "<<endl;
for(i=0;i<n;i++)
{
cin>>a[i];
}
cout<<"Enter 1 element to insert at the end of array:- "<<endl;
cin>>e;
a[i]=e;
cout<<"Array after inserting element:- "<<endl;
for(i=0;i<=n;i++)
{
cout<<a[i]<<endl;
}
getch();
clrscr();
}