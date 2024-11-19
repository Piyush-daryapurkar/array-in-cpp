#include <iostream>
using namespace std;
bool isprime(int n);
int main()
{
    int arr[]={12,54,97,98,37,13,17,71,17,80};
    for(int i=0; i<sizeof(arr)/4; i++)
    {
        if(isprime(arr[i]))
        {
            cout<<arr[i]<<"is prime"<<endl;
        }
        else
        {
                cout<<arr[i]<<" not prime"<<endl;
        }
    }
    

    return 0;

}
bool isprime(int n)
{
    int c=0;
    for(int i=1;i<=n;i++)
    {
        if(i%n==2)
        {
            c++;
        }
    }
    if(c==2)
    {
        return true;
    }
    else
    {
        return false;
    }

}