#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(){
	cout << "Welcome To Stone Paper Scissors Game!" << endl;
	srand(time(NULL));
	int me,opp,mp=0,ep=0;
	while(1){
		opp=rand()%3+1;
		cout << "1-Stone\n2-Paper\n3-Scissors\n";
		cout << "Please enter a choice : ";
		cin >> me;
		if(me==opp){
			cout << "Draw!" << endl;
		}else if(me==1&&opp==2){
			cout << "Enemy Win!" << endl;
			ep++;
		}else if(me==1&&opp==3){
			cout << "You Win!" << endl;
			mp++;
		}else if(me==2&&opp==1){
			cout << "You Win!" << endl;
			mp++;
		}else if(me==2&&opp==3){
			cout << "Enemy Win!" << endl;
			ep++;
		}else if(me==3&&opp==1){
			cout << "Enemy Win!" << endl;
			ep++;
		}else if(me==3&&opp==2){
			cout << "You Win!" << endl;
			mp++;
		}else{
			cout << "Invalid Process!" << endl;
		}
		cout << "Scoreboard :" << endl;
		cout << "Me : " << mp << endl;
		cout << "Opponent : " << ep  << endl;
		if(mp==5||ep==5){
			break;
		}
	}
	if(mp==5){
		cout << "You Won!" << endl;
	}else{
		cout << "Opponent Won!" << endl;
	}
}