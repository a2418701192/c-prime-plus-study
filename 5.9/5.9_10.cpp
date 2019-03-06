#include <iostream>
using namespace std;
int main(){
	cout <<"Enter number of rows:";
	int lines;
	cin>>lines;
	for (int i=1;i<=lines;i++){
		for (int n=0;n<lines-i;n++){
			cout<<".";
		}
		for(int m=0;m<i;m++){
			cout<<"*";
		}
		cout<<endl;
	}
	
	
	return 0;
}
