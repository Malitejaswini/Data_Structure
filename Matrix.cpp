	 //Demonstration of sum of two matrix.
#include<iostream.h>
#include<conio.h>
void main()
{
int a[50][50], b[50][50], sum[50][50],i,j,row,col;
cout<<"Enter the size of row of matrix: "<<endl;
cin>>row;
cout<<"Enter the size of column of matrix: "<<endl;
cin>>col;
cout<<"Enter the first array elements:"<<endl;
for(i=0;i<row;i++)
{
for(j=0;j<col;j++)
{
cin>>a[i][j];
}
}
cout<<"First array is:"<<endl;
for(i=0;i<row;i++)
{
for(j=0;j<col;j++)
{
cout<<a[i][j]<<" ";
}
cout<<endl;
}
cout<<"Enter the Second array elements:"<<endl;
for(i=0;i<row;i++)
{
for(j=0;j<col;j++)
{
cin>>b[i][j];
}
}
cout<<"Second array is:"<<endl;
for(i=0;i<row;i++)
{
for(j=0;j<col;j++)
{
cout<<b[i][j]<<" ";
}
cout<<endl;
}
cout<<"Addition of Both array is: "<<endl;
for(i=0;i<row;i++)
{
for(j=0;j<col;j++)
{
sum[i][j]=a[i][j]+b[i][j];
cout<<sum[i][j]<<" ";
}
cout<<endl;
}

getch();
clrscr();
}
