#include <iostream>
#include <string>
using namespace std;
struct car {
string producer;
int product_year;
};

int main()
{
    int cars=0;
    cout  <<"How many cars do you wish to catalog?";
    (cin>>cars).get();
    car *pr=new car[cars];
    for(int i=0;i<cars;i++){
        cout <<"Car #"<<i+1<<":\n";
        cout <<"Please enter the make:";
        getline(cin,pr[i].producer);

        cout <<"Please enter the year made:";
        (cin>>(pr+i)->product_year).get();
    }
    cout <<"Here is your collection:\n";
    for(int i=0;i<cars;i++){
        cout<<(pr+i)->product_year<<" "<<(pr+i)->producer<<endl;
    }
    delete []pr;
    return 0;
}
