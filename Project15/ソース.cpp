#include <iostream>
using namespace std;

int main()
{
	int channel;

	cout << "�`�����l���ԍ� = "; 
	cin >> channel;

	switch (channel)
	{
		case 1:
			cout << "NHK����\n";
			break;
		case 3:
			cout << "NHK����\n";
			break;
		case 4:
			cout << "���{�e���r\n";
			break;
		case 6:
			cout << "TBS�e���r\n";
			break;
		case 8:
			cout << "�t�W�e���r\n";
			break;
		case 10:
			cout << "�e���r����\n";
			break;
		case 12:
			cout << "�e���r����\n";
			break;
		default:
			cout << "���蓖�Ă��Ă��܂���B\n";
			break;


	}

	return 0;
}