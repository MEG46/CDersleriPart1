#include <iostream>
using namespace std;
int main(){
	int i=1,result=0;
	while(i<=10){
		cout << i << "\t";
		result+=i;
		i++;
	}
	cout << endl << "Result : " << result;
}