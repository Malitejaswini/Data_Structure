#include<iostream.h>
#include<conio.h>
void main()
{
int n,i,j;
int a[50];
cout<<"Enter the size of array:- ";
cin>>n;
cout<<"Enter "<<n<<" array elements:- "<<endl;
for(i=0;i<n;i++)
{
cin>>a[i];
}
cout<<"Elements before sorting:- "<<endl;
for(i=0;i<n;i++)
{
cout<<a[i]<<endl;
}
for(i=0;i<n-1;i++)
{
int min=i;
for(j=i+1;j<n;j++)
{
if(a[j]<a[min])
{
min=j;
}
}
if(min!=i)
{
int temp=a[i];
a[i]=a[min];
a[min]=temp;
}
}
cout<<"After sorting:- "<<endl;
for(i=0;i<n;i++)
{
cout<<a[i]<<endl;
}
getch();
clrscr();
}