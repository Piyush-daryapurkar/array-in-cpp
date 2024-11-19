#include <iostream>
using namespace std;
bool isPlndrm(int);
int main()
{
    int arr[] = {23,34,45,67,89,91,13,17,19,121,101,444,33};
    for(int i=0; i<sizeof(arr)/4; i++)
    {
        if(isPlndrm(arr[i]))
        {
            cout<<arr[i]<<"plindrom number"<<endl;
        }
        else
        {
            cout<<arr[i]<<" not a plndrom"<<endl;
        }
    }
    return 0;
}
bool isPlndrm(int n)
{
    int t = n;
    int rev=0,r;
    while(t>0)
    {
        r = t%10;
        rev = rev * 10 + r;
        t = t/10;
    }
    if(rev==n)
    {
    	return true;
    }
    
    else
    {
    	return false;
	}
    
}