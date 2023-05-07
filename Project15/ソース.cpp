#include <iostream>
using namespace std;

int main()
{
	int channel;

	cout << "チャンネル番号 = "; 
	cin >> channel;

	switch (channel)
	{
		case 1:
			cout << "NHK総合\n";
			break;
		case 3:
			cout << "NHK教育\n";
			break;
		case 4:
			cout << "日本テレビ\n";
			break;
		case 6:
			cout << "TBSテレビ\n";
			break;
		case 8:
			cout << "フジテレビ\n";
			break;
		case 10:
			cout << "テレビ朝日\n";
			break;
		case 12:
			cout << "テレビ東京\n";
			break;
		default:
			cout << "割り当てられていません。\n";
			break;


	}

	return 0;
}