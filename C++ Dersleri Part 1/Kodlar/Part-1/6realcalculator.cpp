#include <iostream>
using namespace std;
int main(){
	int count=0;
	float num1,num2;
	float result=0;
	char ch;
	while(1){
		if(count==0){
			cout << "Please enter a number : ";
			cin >> num1;
			cout << "Please enter a process : ";
			cin >> ch;
			cout << "Please enter a number : ";
			cin >> num2;
			switch(ch){
				case '+':
					result=num1+num2;
					cout << num1 << " " << ch << " " << num2 << " = " << result << endl;
					num1=result;
					break;
				case '-':
					result=num1-num2;
					cout << num1 << " " << ch << " " << num2 << " = " << result << endl;
					num1=result;
					break;
				case '*':
				case 'x':
					result=num1*num2;
					cout << num1 << " " << ch << " " << num2 << " = " << result << endl;
					num1=result;
					break;
				case '/':
					if(num2==0){
						cout << "Couldn't be divided by 0!" << endl;
					}else{
					
					result=num1-num2;
					cout << num1 << " " << ch << " " << num2 << " = " << result << endl;
					num1=result;
				}
					break;
				default:
					cout << "Invalid Process!" << endl;
			}
		}else{
			cout << "Num1 : " << num1 << endl;
				cout << "Please enter a process : ";
			cin >> ch;
			cout << "Please enter a number : ";
			cin >> num2;
			switch(ch){
				case '+':
					result=num1+num2;
					cout << num1 << " " << ch << " " << num2 << " = " << result << endl;
					num1=result;
					break;
				case '-':
					result=num1-num2;
					cout << num1 << " " << ch << " " << num2 << " = " << result << endl;
					num1=result;
					break;
				case '*':
				case 'x':
					result=num1*num2;
					cout << num1 << " " << ch << " " << num2 << " = " << result << endl;
					num1=result;
					break;
				case '/':
					if(num2==0){
						cout << "Couldn't be divided by 0!" << endl;
					}else{
					
					result=num1-num2;
					cout << num1 << " " << ch << " " << num2 << " = " << result << endl;
					num1=result;
				}
					break;
				case 'z':
				case 'Z':
					count=-1;
					cout << "Refreshed!" << endl;
                    break;
				default:
					cout << "Invalid Process!" << endl;
			}
		}
		count++;
	}
}