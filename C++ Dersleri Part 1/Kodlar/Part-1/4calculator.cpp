#include <iostream>
using namespace std;
int main(){
	int num1,num2,result=0;
	char ch;
	cout << "Please enter a number : ";
	cin >> num1;
	cout << "Please enter a process : ";
	cin >> ch;
	cout << "Please enter a number : ";
	cin >> num2;
	if(ch=='+'){
		result = num1 + num2;
		cout << num1 << " + " << num2 << " = " << result << endl;
	}else if(ch=='-'){
		result = num1 - num2;
		cout << num1 << " - " << num2 << " = " << result << endl;
	}else if(ch=='*'||ch=='x'){
		result = num1 * num2;
		cout << num1 << " x " << num2 << " = " << result << endl;
	}else if(ch=='/'){
		if(num2==0){
			cout << "Couldn't be divided by 0." << endl;
		}else{
		result = num1 / num2;
		cout << num1 << " / " << num2 << " = " << result << endl;
	    }
	}else if(ch=='%'){
		if(num2<1){
			cout << "Please enter a bigger number than 1" << endl;
		}else{
			result = num1 % num2;
			cout << num1 << " % " << num2 << " = " << result << endl;
		}
	}else{
		cout << "Invalid Process!" << endl;
	}
	return 0;
}