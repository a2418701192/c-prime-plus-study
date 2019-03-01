#include <iostream>
#include <cmath>
using namespace std;

int main(){
cout<<"Enter a latitude in degrees, minutes,and seconds:"<<endl;
cout <<"First,enter the degree: ";
int degree;
cin>> degree;
cout<<"Next,enter the minutes of arc: ";
int minutes;
cin >>minutes;
cout << "Finally,enter the second of arc: ";
int second;
cin >>second;
const double N=60.0;
double total_degrees;
total_degrees=degree+minutes/N+second/(N*N);
cout <<degree<<" degrees, "<<minutes<<" minutes, "<<second<<" second = "<<total_degrees<<" degrees"<<endl;
}
