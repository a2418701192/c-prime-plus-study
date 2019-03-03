#include <iostream>
#include <cstring>
using namespace std;
struct company{
string name;
double diameter;
double weight;
};
int main(){

company* ptr =new company;
cout<<"Enter your company name :";
getline(cin,ptr->name);
cout <<"Enter your diameter :";
cin>>ptr->diameter;
cout <<"Enter your weight :";
cin>>ptr->weight;
cout <<ptr->name<<"\n"<<ptr->diameter<<"\n"<<ptr->weight<<endl;
delete ptr;
}
