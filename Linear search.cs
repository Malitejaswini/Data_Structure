#include<iostream>
using namespace std;
int main()
{
int a[6]={10,20,30,40,50,60};
int ele;
int index,i;
cout<<"Enter element from array: "<<endl;
cin>>ele;
for(i=0;i<6;i++)
{
if(a[i]==ele)
{
index=i;
break;
}
}
if(a[i]==ele)
{
cout<<ele<<" is found at "<<i<<" index";
}
else
{
	cout<<"Element is not found.";
}
}







