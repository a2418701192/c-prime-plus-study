#include <iostream>
#include <cmath>
using namespace std;

int main(){
double consumption;
cout<<"Vehicle fuel consumption (gasoline consumption per 100 km): ";
cin >>consumption;
double EU_consumption;
EU_consumption=1/(consumption/62.14/3.875);
cout<<"EU_consumption "<<EU_consumption<<endl;
}
