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

int main()
{
	Point obj1;
	obj1.Init();
	obj1.Print();
}