#include <iostream>
using namespace std;
int main(){
	int num1,num2;
	int result=0;
	cout << "Please enter a number : ";
	cin >> num1;
	cout << "Please enter a number : ";
	cin >> num2;
	result = num1 + num2;
	cout << num1 << " + " << num2 << " = " << result << endl;
	result = num1 - num2;
	cout << num1 << " - " << num2 << " = " << result << endl;
	result = num1 * num2;
	cout << num1 << " x " << num2 << " = " << result << endl;
	result = num1 / num2;
	cout << num1 << " / " << num2 << " = " << result << endl;
	result = num1 % num2;
	cout << num1 << " % " << num2 << " = " << result << endl;
	return 0;
}