#include<iostream>
using namespace std;

void bubble_sort(int ar[],int n)
{
	int i,j,temp;
	bool swap;
	for(i=0;i<n;i++)
	{
		swap = false;
		for(j=0;j<n-1-i;j++)
		{
			if(ar[j+1]<ar[j])
			{
				temp=ar[j+1];
				ar[j+1]=ar[j];
				ar[j]=temp;
				swap = true;
			}
		}
		if(!swap)
			break;
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
	bubble_sort(ar,n);
	cout<<"array after sorting\n";
	display(ar,n);
	return 0;
}
