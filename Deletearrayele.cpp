#include<iostream.h>
#include<conio.h>
void main()
{
int a[50],i, del,count=0,size;
cout<<"Enter the size of array:"<<endl;
cin>>size;
cout<<"Enter the elements:"<<endl;
for(i=0;i<size;i++)
{
cin>>a[i];
}
cout<<"You entered element is:"<<endl;
for(i=0;i<size;i++)
{
cout<<a[i]<<endl;
}
cout<<"Enter element to delete from array:"<<endl;
cin>>del;
for(i=0;i<size;i++)
{
if(a[i]==del)
{
for(int j=i;j<(size-1);j++)
{
a[j]=a[j+1];
}
count++;
break;
}
}
if(count==0)
{
cout<<"Element not found"<<endl;
}
else
{
cout<<"Element deleted successfully."<<endl;

for(i=0;i<(size-1);i++)
{
cout<<a[i]<<endl;
}
}
getch();
clrscr();
}
