#include <iostream>

using namespace std;

int main()
{
    int n1,n2;
    cout<<"Enter min number:";
    cin>>n1;
    cout<<"Enter max number:";
    cin>>n2;
    int sum=0;
    for(int i=n1+1;i<n2;i++){
        sum=sum+i;
    }
    cout<<"sum="<<sum<<endl;
    return 0;
}
