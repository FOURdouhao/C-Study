#include <iostream>
#include <ctime>
using namespace std;
int main()
{
	srand((unsigned int)time(NULL));
	int num = 0; //���������

	int ap = 0;
	cout << "�������ܹ����ǩ������" << endl;
	cin >> ap;
	int p = 0;
	cout << "��������鼸����" << endl;
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
		cout << "��鵽����������С���ܹ����ǩ������" << endl;
	}

	system("pause");
	return 0;
}