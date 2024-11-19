#include<iostream>
using namespace std;
int main ()
{
	int arr[]={13,11,19,23};
	int sz=sizeof(arr)/4;
	cout<<"size of array is "<<sz<<endl;
	int c=0;
	
	for(int i=0;i<sz;i++)
	{
		for(int j=1;j<=arr[i];j++)
		{
			if(j%arr[i]==0)
		
				c++;
			}
		}
	    if(c==2)
		{
			cout<<arr[i]<<"prime"<<endl;
		}
		else
		{
			cout<<arr[i]<<"not prime"<<endl;
		}
		return 0;
