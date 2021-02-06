#include <iostream>
#include <ctime>
using namespace std;
int main()
{
	srand((unsigned int)time(NULL));
	int num = 0; //生成随机数

	int ap = 0;
	cout << "请输入总共需抽签的人数" << endl;
	cin >> ap;
	int p = 0;
	cout << "请输入需抽几个人" << endl;
	cin >> p;

	if (ap >= p)
	{
		for (int i = 1; i <= p; i++)
		{
			num = rand() % ap + 1;
			cout << num << " ";
		}
		cout << endl;
	}
	else
	{
		cout << "需抽到的人数必须小于总共需抽签的人数" << endl;
	}

	system("pause");
	return 0;
}