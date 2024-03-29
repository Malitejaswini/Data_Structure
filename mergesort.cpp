#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int n;

class merge
{
	int a[10],b[10],i,j ;
public:
	void read();
	void merge_sort(int l,int h);
	void merge1(int l,int m, int h);
	void disp();
};
void merge::read()
{
	for(i=0;i<n;i++)
	cin>>a[i];
}

void merge::merge_sort(int l,int h)
{
	int mid;
	if(l<h)
	{
		mid=int((l+h)/2);
		merge_sort(l,mid);
		merge_sort(mid+1,h);
		merge1(l,mid,h);
	}
}
void merge::merge1(int low,int m,int high)
{
	int h=low;
	int i=low;
	j=m+1;

	while((h<=m)&&(j<=high))
	{
		if(a[h]<=a[j])
		{
			b[i]=a[h];
			i++;
			h++;
		}
		else
		{
			b[i]=a[j];
			i++;
			j++;
		}
	}
	if(h<=m)
	{
		while(h<=m)
		{
		b[i]=a[h];
		i++;
		h++;
		}
	}
	else
	{
		while(j<=h)
		{
			b[i]=a[j];
			i++;
			j++;
		}
	}
	for(int k=low;k<=high;k++)
		a[k]=b[k];
	}
	void merge ::disp()
	{
	for(i=0;i<n;i++)
	cout<<a[i]<<"\t";
	}
	void main()
	{
		clrscr();
		clock_t e,s;
		int l,h;
		merge m;
		cout<<"\nEnter the size of elments:- ";
		cin>>n;
		h=n-1;
		l=0;
		cout<<"\Enter the Elments:- ";
			m.read();
			cout<<"\n\nElements in Array:- \n";
			m.disp();
			s=clock();
			m.merge_sort(l,h);
			e=clock();
			cout<<"\nArray after sorting:-\n";
			m.disp();
			cout<<"\nThe time comlexity is=>"<<(e-s)/CLK_TCK;
			getch();
		}
