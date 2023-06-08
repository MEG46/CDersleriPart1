#include <iostream>
using namespace std;
int main(){
	int i=1,result=0;
	do{
		cout << i << "\t";
		result+=i;
		i++;
	}while(i<=10);
	cout << endl <<"Result : " << result << endl;
	return 0;
}