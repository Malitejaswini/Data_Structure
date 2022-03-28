#include<iostream.h>
#include<conio.h>
void main()
{
	int arr[5];
	cout<<"Enter array elements:-"<<endl;
	for(int i=0;i<5;i++)
	{
		cin>>arr[i];
	}
	cout<<"Elements are:-"<<endl;
	for(int j=0;j<5;j++)
	{
		cout<<arr[j]<<" ";
	}
	getch();
}
