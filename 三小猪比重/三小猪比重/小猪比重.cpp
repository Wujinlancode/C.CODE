#include <iostream>
using namespace std;
int main()
{
	int num1 = 0;
	int num2 = 0;
	int num3 = 0;

	cout << "������С��A�����أ�" << endl;
	cin >>num1;
	cout << "������С��B�����أ�" << endl;
	cin >> num2;
	cout << "������С��B�����أ�" << endl;
	cin >> num3;

	if (num1 > num2)
	{
		if (num1 > num3)
			cout << "С��A�����ص�" << endl;
		else
			cout << "С��C�����ص�" << endl;
	}
	else if (num2 > num3)
	{
		cout << "С��B�����ص�" << endl;
	}
	else
		cout << "С��C�����ص�" << endl;
	system("pause");
	return 0;
}