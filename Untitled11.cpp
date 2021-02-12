#include<iostream>
using namespace std;
int main()
{
	int arr[10],i,negative=0,final[10];
	cout<<"\nEnter 10 elements of array : ";
	for (i=0;i<10;i++)
	{
		cin>>arr[i];
	}
	for(i=0;i<10;i++)
	{
		if(arr[i]<0)
		{
			final[negative]=arr[i];
			negative++;
		}
	}
	for(i=0;i<10;i++)
	{
		if(arr[i]>=0)
		{
			final[negative]=arr[i];
			negative++;
		}
	}
	for(i=0;i<10;i++)
	{
		cout<<"\n"<<final[i];
	}
	return 0;
}
