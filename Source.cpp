#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "RUS");
	//1
	/*int hp;
	cin >> hp;
	bool a;
	a = hp > 0;
	cout << boolalpha<<a << endl;*/
	//2
	/*int a;
	cin >> a;
	if (a > 20) {
		cout << "on" << endl;
	}
	else {
		cout << "off" << endl;
	}*/
	//3
	/*int a,b,c;
	cin >> a >> b >> c;
	if (c > 80&&a<b) {
		cout << "off" << endl;
	}
	else {
		cout << "on" << endl;
	}*/
	//4
	/*double x, y;
	cin >> x;
	if (x > 0) {
		y = sqrt(x - 2);
	}
	else if (x == 0) {
		y = 0;
	}
	else if (x < 0) {
		y = abs(x);
	}
	cout << y << endl;*/
	//5
	/*int a;
	cin >> a;
	switch (a) {
	case 1:cout << "большой палец"; break;
	case 2:cout << "указательный палец"; break;
	case 3:cout << "средний палец"; break;
	case 4:cout << "безымянный палец"; break;
	case 5:cout << "мизинец"; break;
	default:cout << "ошибка"; break;
	}
	return 0;*/
	//6
	int a, b;
	cin >> a;
	cin >> b;
	if (a > b) {
		cout << "open window" << endl;
	}
	else if (a > 20 && a <= b) {
		cout << "ac on" << endl;
	}
	else if (a<=20 && a<=b) {
		cout << "ac off" << endl;
	}
}