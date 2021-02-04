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
	for (int i = 1; i <= p; i++)
	{
		num = rand() % ap + 1;
		cout << num << endl;
	}
	system("pause");
	return 0;
}