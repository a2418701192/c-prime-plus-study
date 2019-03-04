#include <iostream>
#include <string>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;
struct candybar{
	string brand;
	double weight;
	double content;
};
int main(int argc, char** argv) {
	candybar *ptr=new candybar[3];
	cout <<"Enter your brand :";
	getline (cin,ptr[0].brand);
	cout <<"Enter your weight :";
	cin>>ptr[0].weight;
	cout<<"Enter your content :";
	cin>>ptr[0].content;
	delete ptr;
}
