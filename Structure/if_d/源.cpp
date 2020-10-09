#include<iostream>
using namespace std;

int main()
{
	//if
	int s = 0;
	cout << "input score: " << endl;
	cin >> s;

	if (s >= 60)
	{
		cout << "Pass!" << endl;
	}
	else
	{
		cout << "Fall!" << endl;
	}

	//switch
	int sc = 0;
	cout << "input score(0-10): " << endl;
	cin >> sc;

	switch (sc)
	{
	case 10: cout << "Perfect!" << endl; break;
	case 9: cout << "Perfect!" << endl; break;
	case 8: cout << "´Good" << endl; break;
	case 7: cout << "´Good" << endl; break;
	case 6: cout << "So so" << endl; break;
	case 5: cout << "So so" << endl; break;
	default: cout << "Schlecht" << endl; break;
	}

	
	
	
	// goto
	cout << "1" << endl;

	goto FLAG;

	cout << "2" << endl;

	cout << "3" << endl;

	FLAG:

	cout << "5" << endl;

	system("pause");

	return 0;
}