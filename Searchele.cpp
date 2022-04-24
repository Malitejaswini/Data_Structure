//Program to search elements using index.
#include<iostream.h>
#include<conio.h>
void main()
 {
 int a[50],i,n,t;
cout<<"Enter size of array:";
cin>>n;
cout<<"Enter array elements: "<<endl;
 for(i=0;i<n;i++)
 {
 cin>>a[i];
 }
 cout<<"You entered array elements are: "<<endl;
 for(i=0;i<n;i++)
{
cout<<a[i]<<endl;
}

cout<<"Enter index no: ";
cin>>t;
cout<<"Element at index "<<t<<" is: "<<a[t];
getch();
clrscr();
}
