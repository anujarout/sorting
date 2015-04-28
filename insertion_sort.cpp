#include<iostream>
using namespace std;

void insertion_sort(int ar[],int n)
{
	int i,j,key;
	for(i=1;i<n;i++)
	{
		key = ar[i];
		for(j=i-1;j>=0 && (ar[j]>key);j--)
		{
			ar[j+1]=ar[j];
		}
		ar[j+1]=key;
	}
}

void display(int ar[],int n)
{
	for(int i=0;i<n;i++)
		cout<<ar[i]<<"\t";
	cout<<endl;
}

int main()
{
	int n,i;
	cout<<"enter array size\n";
	cin>>n;
	int ar[n];
	cout<<"Enter array elements\n";
	for(i=0;i<n;i++)
	cin>>ar[i];
	cout<<"array before sorting\n";
	display(ar,n);
	insertion_sort(ar,n);
	cout<<"array after sorting\n";
	display(ar,n);
	return 0;
}
