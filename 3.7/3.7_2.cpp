#include <iostream>
#include <cmath>
using namespace std;

int main(){
int height_in,height_ft,pound;
double BMI;
double height_metere,kg;
const int N=12;
const double M=2.2;
const double K=0.0254;
cout<<"Enter your height:___(in) "<<"___(ft)"<<endl;
cin >>height_in;
cin>>height_ft;
cout<<"Enter your pound:___(pound)"<<endl;
cin>>pound;
height_metere=(height_in*N+height_ft)*K;
kg=pound*M;
BMI=kg/pow(height_metere,2);
cout<<"your BMI = "<<BMI<<endl;
}
