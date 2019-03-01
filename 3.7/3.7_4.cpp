#include <iostream>
#include <cmath>
using namespace std;

int main(){
long total_seconds;
cout<<"Enter the world's population :";
cin>>total_seconds;
long int_total_seconds=total_seconds;
int day,hours,minutes,seconds;
day=total_seconds/(24*60*60);
total_seconds=total_seconds%(24*60*60);
hours=total_seconds/(60*60);
total_seconds=total_seconds%(60*60);
minutes=total_seconds/60;
seconds=total_seconds%60;
cout<<int_total_seconds<<" seconds = "<<day<<" days, "<<hours<<" hours, "<<minutes<<" minutes, "<<seconds<<" seconds"<<endl;

}
