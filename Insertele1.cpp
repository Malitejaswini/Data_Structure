//program to Insert elements in array.
#include<iostream.h>
#include<conio.h>
void main()
{
int a[50],i,pos,size,ele;
cout<<"Enter size:"<<endl;
cin>>size;
cout<<"Enter elements:"<<endl;
for(i=0;i<size;i++)
{
cin>>a[i];
}
for(i=0;i<size;i++)
{
cout<<a[i]<<endl;
}
cout<<"Enter element to insert:"<<endl;
cin>>ele;
cout<<"Enter position"<<endl;
cin>>pos;
for(i=size;i>pos;i--)
{
a[i]=a[i-1];
}
a[i]=ele;
size++;

cout<<"New array is:"<<endl;
for(i=0;i<size;i++)
{
cout<<a[i]<<endl;
}
getch();
clrscr();
}
