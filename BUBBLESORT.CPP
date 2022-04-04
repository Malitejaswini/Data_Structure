#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int n,i,j,temp;
int a[50];
cout<<"Enter the size of array:- ";
cin>>n;
cout<<"Enter the array elements:- "<<endl;
for(i=0;i<n;i++)
{
cin>>a[i];
cout<<endl;
}
cout<<"Elements before sort:- "<<endl;
for(i=0;i<n;i++)
{
cout<<a[i]<<endl;
}
cout<<endl;
for(i=0;i<n-1;i++)
{
for(j=0;j<n-1;j++)
{
if(a[j]>a[j+1])
{
temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
}
}
}
cout<<"Elements after sorting:- "<<endl;
for(i=0;i<n;i++)
{
cout<<a[i]<<endl;
}
getch();
}
