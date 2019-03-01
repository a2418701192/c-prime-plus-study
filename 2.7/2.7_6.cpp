#include <iostream>
using namespace std;
double astronomy(double light_year){
    double astronomy_unit;
    astronomy_unit=light_year*63240;
    return astronomy_unit;
}
int main(){
    double light_year;
    cout<<"Enter the number of light year : ";
    cin>>light_year;
    double astronomy_years;
    astronomy_years=astronomy(light_year);
    cout<<light_year<<"light year = "<<astronomy_years<<" astronomical units."<<endl;
}
