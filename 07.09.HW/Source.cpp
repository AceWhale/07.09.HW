#include <iostream>
using namespace std;

class Point
{
private:
	int x;
	int y;
public:

};

class Car
{
private:
	char* name;
	char* model;
public:
	Car()
	{
		name = nullptr;
		model = nullptr;
	}
	Car(char* n, char* m)
	{
		name = n;
		model = m;
	}
	void Print()
	{
		cout << "Name: " << name << "\nModel: " << model << endl;
	}
	void Init()
	{
		char buff[20];
		cout << "Enter name - > ";
		cin >> buff;
		if (name != nullptr)
		{
			delete[]name;
		}
		name = new char[strlen(buff) + 1];
		strcpy_s(name, strlen(buff) + 1, buff);
		cout << "Enter model -> ";
		cin >> buff;
		if (model != nullptr)
		{
			delete[]model;
		}
		model = new char[strlen(buff) + 1];
		strcpy_s(model, strlen(buff) + 1, buff);
	}
	~Car()
	{
		delete[]name;
		delete[]model;
	}
};

int main()
{

}