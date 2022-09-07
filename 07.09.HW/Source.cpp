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
};

int main()
{

}