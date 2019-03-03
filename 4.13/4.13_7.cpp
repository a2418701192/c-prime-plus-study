#include <iostream>
#include <cstring>
using namespace std;
struct company{
string name;
double diameter;
double weight;
};
int main(){
company cpy1;
cout<<"Enter your company name :";
getline(cin,cpy1.name);
cout <<"Enter your diameter :";
cin>>cpy1.diameter;
cout <<"Enter your weight :";
cin>>cpy1.weight;
cout <<cpy1.name<<"\n"<<cpy1.diameter<<"\n"<<cpy1.weight<<endl;
}
