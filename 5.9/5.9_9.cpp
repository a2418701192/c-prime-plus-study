#include <iostream>
#include <string>

int main(){
	using namespace std;
	cout <<"Enter words (to stop , type the word done):"<<endl;
	int n=20;
	string words[20];
	int i=0;
	string b="done";
	cin>>words[i];
	while(words[i]!=b){
		i++;
		cin>>words[i];
	}
	cout <<i<<endl;
	return 0;
	return 0;
}
