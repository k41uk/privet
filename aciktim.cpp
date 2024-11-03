
#include <iostream>

using namespace std;

int main() {
	cout << "10 uzerinden ne kadar acsin?" << endl;
	int str1;
	cin >> str1;

	if (str1 > 10) {
		cout << "olmek uzeresin yemek ye artik" << endl;
	}
	else if (str1 >= 0 && str1 <= 5)
	{
		cout << "o kadar da ac degilmissin ya" << endl;
	}
	else if (str1 > 5 && str1 <= 10)
	{
		cout << "oha acikmissin yemek ye" << endl;
	}
	else if (str1 < 0) {
		cout << "bunun ne demek oldugunu bilmiyorum kendi basinin caresine bak" << endl;
	}
	return 0;
}
