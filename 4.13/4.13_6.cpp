#include <iostream>
#include <cstring>
using namespace std;
struct CandyBar{
string brand;
double weight;
int content;

};
int main(){
CandyBar snack[3]={
{"Mocha Munch",
2.3,
350
},
{"Mocha Munch",
2.3,
350
},
{"Mocha Munch",
2.3,
350
}
};
cout<<snack[0].brand<<" "<<snack[1].content<<" "<<snack[2].weight<<endl;

}
