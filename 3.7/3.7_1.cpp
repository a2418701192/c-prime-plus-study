#include <iostream>
using namespace std;

int main(){
int height;
cout<<"Enter you height(in) :";
cin >> height;
int in;
int ft;
const int N=12;
in=height/N;
ft=height%N;
cout <<height<<"(in)="<<in<<"(in)"<<ft<<"(ft)"<<endl;
}
