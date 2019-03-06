#include <iostream>
#include <array>

using namespace std;

int main()
{
    const int Arsize=16;
    array<long double,16> factorials;
    factorials[1]=factorials[0]=1;
    for(int i=2;i<Arsize;i++)
        factorials[i]=i*factorials[i-1];
    for(int i=0;i<Arsize;i++)
        cout<<i<<"! = "<<factorials[i]<<endl;
    return 0;
}
