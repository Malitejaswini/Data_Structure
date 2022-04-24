//program to sort a array in ascending order.

#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int a[50];
int n,i,temp,j;
cout<<"Enter the size of array:- "<<endl;
cin>>n;
cout<<"Enter array elements:- "<<endl;
for(i=0;i<n;i++)
{
	cin>>a[i];
}
cout<<"Array:- "<<endl;
for(i=0;i<n;i++)
{
	cout<<a[i]<<endl;
}
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
cout<<"Array in ascending order:-"<<endl;
for(i=0;i<n;i++)
{
cout<<a[i]<<endl;
}
getch();
}
