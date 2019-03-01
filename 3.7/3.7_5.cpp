#include <iostream>
#include <cmath>
using namespace std;

int main(){
long long population;
long long US_population;
cout<<"Enter the world's population :";
cin>>population;
cout<<"Enter the population of the US:";
cin>>US_population;
double percent;
percent=(double)US_population/population*100;
cout<<"The population of the US is "<<percent<<"% of the world population."<<endl;
}
