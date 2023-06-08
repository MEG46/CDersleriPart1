#include <iostream>
using namespace std;
int main(){
	int i,j;
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
		cout << (i*5)+j+1 << "\t";
	}
	cout << endl;
	}
	return 0;
}