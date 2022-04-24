//Program to searching index using element.
 
#include<iostream.h>
#include<conio.h>
void main()
{
int a[50],i,j,size,ele,index;
cout<<"Enter Size of array:- "<<endl;
cin>>size;
cout<<"Enter array elements:- "<<endl;
for(i=0;i<size;i++)
{
cin>>a[i];
}
cout<<"Array is:- "<<endl;
for(i=0;i<size;i++)
{
cout<<a[i]<<endl;
}
cout<<"Enter the element to find index:- "<<endl;
cin>>ele;
for(i=0;i<size;i++)
{
if(a[i]==ele)
{
cout<<"Element found at index "<<i<<endl;
break;
}
else if(ele!=a[i])
{
cout<<"Element not found"<<endl;
break;
}
}
getch();
clrscr();
}
