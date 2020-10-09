#include<iostream>
using namespace std;
#include <string>
#define MAX 1000

struct Person
{
	string m_Name;
	int m_Sex;
	int m_Age;
	string m_Phone;
	string m_Addr;
};

struct Addressbooks
{
	struct Person personArray[MAX];

	int m_Size;

};

void addPerson(Addressbooks* abs)
{
	if (abs->m_Size == MAX)
	{
		cout << " It is full!" << endl;
		return;
	}
	else
	{
		string name;
		cout << "plase input name: " << endl;
		cin >> name;
		abs->personArray[abs->m_Size].m_Name = name;
		
		cout << "plase input sex: " << endl;
		cout << "1 -- man; 2 -- weman" << endl;
		int sex = 0;
		while (true)
		{
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				abs->personArray[abs->m_Size].m_Sex = sex;
				break;
			}
			cout << "input error! input again" << endl;
		}

		cout << "plase input age: " << endl;
		int age = 0;
		cin >> age;
		abs->personArray[abs->m_Size].m_Age = age;

		cout << "plase input phonenumber: " << endl;
		string phone;
		cin >> phone;
		abs->personArray[abs->m_Size].m_Phone = phone;

		cout << "plase input Address: " << endl;
		string address;
		cin >> address;
		abs->personArray[abs->m_Size].m_Addr = address;

		abs->m_Size++;
		cout << "erfolgreich add!" << endl;

		system("pause");
		system("cls");

	}
}


void showPerson(Addressbooks* abs)
{
	if (abs->m_Size == 0)
	{
		cout << "empty!" << endl;
	}
	else
	{
		for (int i = 0; i < abs->m_Size; i++)
		{
			cout << "name: " << abs->personArray[i].m_Name << "\t";
			cout << "sex: " << (abs->personArray[i].m_Sex == 1 ? "man":"woman") << "\t";
			cout << "age: " << abs->personArray[i].m_Age << "\t";
			cout << "phone: " << abs->personArray[i].m_Phone << "\t";
			cout << "address: " << abs->personArray[i].m_Addr << endl;
		}
	}

	system("pause");
	system("cls");
}


int isExist(Addressbooks* abs, string name)
{
	for (int i = 0; i < abs->m_Size; i++)
	{
		if (abs->personArray[i].m_Name == name)
		{
			return i;
		}
	}
	return -1;
}

void deletePerson(Addressbooks* abs)
{
	cout << "input name for delete: " << endl;
	string name;
	cin >> name;

	int ret = isExist(abs, name);
	if (ret != -1)
	{
		for (int i = ret; i < abs->m_Size; i++)
		{
			abs->personArray[i] = abs->personArray[i + 1];
		}
		abs->m_Size--;
		cout << "erfolgreich delete!" << endl;
	}
	else
	{
		cout << "not exist this person!" << endl;
	}
	system("pause");
	system("cls");
}


void findPerson(Addressbooks* abs)
{
	cout << "input name for find: " << endl;
	string name;
	cin >> name;

	int ret = isExist(abs, name);
	if (ret != -1)
	{
		cout << "name: " << abs->personArray[ret].m_Name << "\t";
		cout << "sex: " << (abs->personArray[ret].m_Sex == 1 ? "man" : "woman") << "\t";
		cout << "age: " << abs->personArray[ret].m_Age << "\t";
		cout << "phone: " << abs->personArray[ret].m_Phone << "\t";
		cout << "address: " << abs->personArray[ret].m_Addr << endl;
	}
	else
	{
		cout << "cannot find this person!" << endl;
	}

	system("pause");
	system("cls");
}


void modifyPerson(Addressbooks* abs)
{
	cout << "plase input name for modify: " << endl;
	string name;
	cin >> name;

	int ret = isExist(abs, name);
	if (ret != -1)
	{
		string name;
		cout << "input name: " << endl;
		cin >> name;
		abs->personArray[ret].m_Name = name;

		cout << "input sex: " << endl;
		cout << "1 -- man" << endl;
		cout << "2 --woman" << endl;

		int sex = 0;
		while (true)
		{
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				abs->personArray[ret].m_Sex = sex;
				break;
			}
			cout << "input error!";
		}

		cout << "input age: " << endl;
		int age = 0;
		cin >> age;
		abs->personArray[ret].m_Age = age;

		cout << "input phone: " << endl;
		string phone = "";
		cin >> phone;
		abs->personArray[ret].m_Phone = phone;

		cout << "input address: " << endl;
		string address;
		cin >> address;
		abs->personArray[ret].m_Addr = address;

		cout << "erfolgreich!" << endl;

	}
	else
	{
		cout << "cannot find this person!" << endl;
	}
	system("pause");
	system("cls");
}

void clearPerson(Addressbooks* abs)
{
	abs->m_Size = 0;
	cout << "clear all" << endl;
	system("pause");
	system("cls");
}

void showMenu()
{
	cout << "************************" << endl;
	cout << "***** 1, Add ***********" << endl;
	cout << "***** 2. Show **********" << endl;
	cout << "***** 3. delete ********" << endl;
	cout << "***** 4. find **********" << endl;
	cout << "***** 5. modification **" << endl;
	cout << "***** 6. clear all *****" << endl;
	cout << "***** 0. EXIT **********" << endl;
	cout << "************************" << endl;
}


int main()
{
	Addressbooks abs;

	abs.m_Size = 0;
	
	int select = 0;

	while (true)
	{
		showMenu();

		cin >> select;

		switch (select)
		{
		case 1:
			addPerson(&abs);
			break;
		case 2:
			showPerson(&abs);
			break;
		case 3:
			deletePerson(&abs);
			break;
		case 4:
			findPerson(&abs);
			break;
		case 5:
			modifyPerson(&abs);
			break;
		case 6:
			clearPerson(&abs);
			break;
		case 0:
			cout << "Thank you!" << endl;
			system("pause");
			return 0;
			break;
		default:
			break;
		}
	}


	system("pause");
	return 0;
}