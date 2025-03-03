#include <iostream>

using namespace std;

int main(){
	setlocale(LC_ALL, "RU");
	string Name;
	cout << "Введите имя: ";
	cin >> Name;
	cout << "Здравствуйте, " << Name <<"!" << endl;
	system("pause");
}