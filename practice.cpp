#include<iostream>
using namespace std;
int main ()
{
	int arr[2][4]={{1,2,3,4},{14,41,78,40}};
	int ttl=0;
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<4;j++)
		{
		    ttl+=arr[i][j];
		}	
		cout<<"total "<<ttl<<endl;
		ttl=0;
	}
	
	return 0;
}