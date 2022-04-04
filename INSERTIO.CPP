#include<iostream.h>
#include<conio.h>
void main()
{
int n,i,j,temp;
int a[50];
cout<<"Enter size of array:- "<<endl;
cin>>n;
cout<<"Enter array elements:- "<<endl;
for(i=0;i<n;i++)
{
cin>>a[i];
}
cout<<"Elements before sorting:- "<<endl;
for(i=0;i<n;i++)
{
cout<<a[i]<<endl;
}
for(i=1;i<n;i++)
{
temp=a[i];
j=i-1;
while(j>=0 && a[j]>temp)
{
a[j+1]=a[j];
j--;
}
a[j+1]=temp;
}
cout<<"Elements after sorting:- "<<endl;
for(i=0;i<n;i++)
{
cout<<a[i]<<endl;
}
getch();
clrscr();
}
