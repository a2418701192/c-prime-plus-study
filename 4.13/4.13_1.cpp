#include <iostream>
#include <cmath>
using namespace std;

int main(){
cout <<"What is your first name ?";
char first_name[20];
char last_name[20];
char grade;
cin.getline(first_name,20);
cout <<"What is last name ?" ;\
cin.getline(last_name,20);
cout<<"What letter grade do you deserve ?";
cin>>grade;
grade+=1;
int age;
cout <<"What is you age ?";
cin >> age;
cout <<"Name :"<<first_name<<" , "<<last_name<<endl;
cout <<"Grade :"<<grade<<endl;
cout <<"Age :"<<age<<endl;
}
