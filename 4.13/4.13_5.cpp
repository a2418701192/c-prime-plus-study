#include <iostream>
#include <cstring>
using namespace std;
struct CandyBar{
string brand;
double weight;
int content;

};
int main(){
CandyBar snack={
"Mocha Munch",
2.3,
350
};
cout<<snack.brand<<endl;
cout<<snack.weight<<endl;
cout<<snack.content<<endl;
}
