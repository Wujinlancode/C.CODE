#include <iostream>
using namespace std;
int main()
{
	int num1 = 0;
	int num2 = 0;
	int num3 = 0;

	cout << "请输入小猪A的体重：" << endl;
	cin >>num1;
	cout << "请输入小猪B的体重：" << endl;
	cin >> num2;
	cout << "请输入小猪B的体重：" << endl;
	cin >> num3;

	if (num1 > num2)
	{
		if (num1 > num3)
			cout << "小猪A是最重的" << endl;
		else
			cout << "小猪C是最重的" << endl;
	}
	else if (num2 > num3)
	{
		cout << "小猪B是最重的" << endl;
	}
	else
		cout << "小猪C是最重的" << endl;
	system("pause");
	return 0;
}