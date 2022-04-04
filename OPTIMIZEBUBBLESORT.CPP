#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int n,i,j,temp;
int flag=0;
int a[50];
cout<<"Enter the size of array:- ";
cin>>n;
cout<<"Enter the array elements:- "<<endl;
for(i=0;i<n;i++)
{
cin>>a[i];
}
cout<<"Elements before sort:- "<<endl;
for(i=0;i<n;i++)
{
cout<<a[i]<<endl;
}
cout<<endl;
for(i=0;i<n-1;i++)
{
for(j=0;j<n-1-i;j++)
{
if(a[j]>a[j+1])
{
temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
flag=1;
}
}
if(flag==0)
{
break;
}
}
cout<<"Elements after sorting:- "<<endl;
for(i=0;i<n;i++)
{
cout<<a[i]<<" "<<endl;
}
getch();
}