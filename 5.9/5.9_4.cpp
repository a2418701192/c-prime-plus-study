#include <iostream>

using namespace std;

int main()
{
    const double interest_rate1=0.1;
    const double interest_rate2=0.05;
    const int capital=100;
    int year=1;
    int value1=capital,value2=capital;
    do{
        value1+=(interest_rate1*capital)*year;
        value2=value2*(1+interest_rate2);
        year++;
    }while(value1>value2);
    cout<<"year: "<<year;
    return 0;
}
