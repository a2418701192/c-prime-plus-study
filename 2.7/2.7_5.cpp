#include <iostream>
using namespace std;
double temperature(double x){
    double y;
    y=x*9/5+32;
    return y;
}
int main(){
    double temperature_1;
    double temperature_2;
    cout<<"please enter a Celsius value :";
    cin>>temperature_1;
    temperature_2=temperature(temperature_1);
    cout<<temperature_1<<" degress Celsius is "<<temperature_2<<" degregress Fahrenheit"<<endl;

}
