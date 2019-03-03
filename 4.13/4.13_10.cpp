#include <iostream>
#include <cstring>
#include <array>
using namespace std;

int main(){
array<int ,3>score;
cout<<"Enter your first score :";
cin>>score[0];
cout <<"Enter your second score :";
cin>>score[1];
cout <<"Enter your three score :";
cin>>score[2];
int average=(score[0]+score[1]+score[2])/3;
cout <<"3 average:"<<average<<endl;

}
