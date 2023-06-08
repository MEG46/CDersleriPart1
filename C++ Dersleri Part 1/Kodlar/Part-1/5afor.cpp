#include <iostream>
using namespace std;
int main(){
	int i,result=0;
	for(i=1;i<=10;i++){
		cout << i << "\t";
		result+=i;
	}
	cout << endl << "Result : " << result;
	return 0;
}