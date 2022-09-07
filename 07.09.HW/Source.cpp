#include <iostream>
using namespace std;

class Point
{
private:
	int x;
	int y;
public:
	Point()
	{
		x = 0;
		y = 0;
	}
	Point(int X, int Y)
	{
		x = X;
		y = Y;
	}
	void Print()
	{
		cout << "X = " << x << "\nY = " << y << endl;
	}
	void Init()
	{
		cout << "X = ";
		cin >> x;
		cout << "Y = ";
		cin >> y;
	}
	void SetX()
	{
		cout << "X = ";
		cin >> x;
	}
	void GetX()
	{
		cout << "X = " << x << endl;
	}
	void SetY()
	{
		cout << "Y = ";
		cin >> y;
	}
	void GetY()
	{
		cout << "\nY = " << y << endl;
	}
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
	Point obj1;
	obj1.Init();
	obj1.Print();
	cout << endl;
	Car obj2;
	obj2.Init();
	obj2.Print();
}