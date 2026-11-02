#include <iostream>
#include <windows.h>
#include <string>
#include <ctime>
#include <cstdlib>
using namespace std;
int money, bet, num, random1, random2, random3, retry, win, loss;
char chose;
string name;
void gamestart(){
	system("cls");
	cout << "loading game...";
	do{	
	Sleep(2000);
	system("cls");
cout << "hello " << name << " you have : " << money << ": in your bank account " << endl;
cout << " **=====================================** " << endl;
cout << " retry : " << retry << endl;
cout << " win : " << win << endl;
cout << " loss : " << loss << endl;
cout << " you need three matching values" << endl;;
cout << "!!!lets go gambling!!!" << endl;
Sleep(2000);
system("cls");
cout << "!!!!LETS GOO GAMBELING!!!!" << endl;
cout << " you need three matching values" << endl;
random1 = rand() % 3 + 1;
random2 = rand() % 3 + 1;
random3 = rand() % 3 + 1;
cout << random1 << endl;
Sleep(200);
cout << random2 << endl;
Sleep(200);
cout << random3 << endl;
retry++;
Sleep(200);
if(random1 == random2 && random2 == random3)
{
	cout << name << " I CANT STOP WINNING" << endl;
	win++;
	money = money*2 + bet*2;
}
else{
	cout << "dang it" << endl;
	loss++;
	money = money - bet;
}

}while(money >= 0);
}
void gameover(){
	if (money >= 0)
	{
		return;
	}
	cout << "do you want to continue ? y/n : ";
	cin  >> chose;
	
	if (chose = 'y')
	{
		gamestart();
	}
	else if(chose = 'n')
	{
		return;
	}
}







int main(){
	srand(time(0));
	money = 1000;
	cout << "hello what is your name : ";
	cin >> name;
	cout << " enter your bet :  ";
	cin >> bet;

gamestart();
cout << "you lost : " << money;
cout << " retry : " << retry << endl;
cout << " win : " << win << endl;
cout << " loss : " << loss << endl;
gameover();
return 0;
}


