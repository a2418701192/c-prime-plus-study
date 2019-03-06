#include <iostream>

using namespace std;

int main()
{
    int number=1,sum=0;
    do {cout<<"Enter number :";
    cin>>number;
    sum+=number;
    cout<<"sum="<<sum<<endl;
    }while(number!=0);
    return 0;
}
