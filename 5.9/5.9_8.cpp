#include <iostream>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	cout <<"Enter words (to stop , type the word done):"<<endl;
	int n=20;
	char words[n][20];
	int i=0;
	char b[]="done";
	cin>>words[i];
	while(strcmp(words[i],b)!=0){
		i++;
		cin>>words[i];
	}
	cout <<i<<endl;
	return 0;
}
