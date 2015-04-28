#include<iostream>
using namespace std;

void selection_sort(int ar[],int n)
{
	int i,j,pos=-1,smallest=99999;
	for(i=0;i<n;i++)
	{
		smallest=ar[i];
		for(j=i+1;j<n;j++)
		{
			if(ar[j]<smallest)
			{
				smallest = ar[j];
				pos=j;
			}
		}
		if(smallest!=ar[i])
		{
			ar[pos]=ar[i];
			ar[i]=smallest;
		}
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
	selection_sort(ar,n);
	cout<<"array after sorting\n";
	display(ar,n);
	return 0;
}
