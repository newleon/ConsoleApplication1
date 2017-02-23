#include <iostream>
#include <vector>

class TheObject
{
public:
	int x, y;
	int getArea();
	TheObject();
	TheObject(int, int);
};

TheObject::TheObject()
{
	x = 5;
	y = 10;
}

TheObject::TheObject(int a, int b)
{
	x = a;
	y = b;
}

int TheObject::getArea()
{
	return x + y;
}

int main()
{
	//TheObject o;
	//o.x = 15;
	//o.y = 20;
	//printf("The Area:%d \n", o.getArea());
	TheObject* o = new TheObject(7,21);
	//o->x = 15;
	//o->y = 20;
	printf("The Area:%d \n", o->getArea());

	std::vector<int> myV;
	myV.push_back(5);
	myV.push_back(10);
	myV.push_back(15);

	while (!myV.empty())
	{
		printf("myV.size:%d \n", myV.size());
		printf("myV.back:%d \n", myV.back());
		myV.pop_back();
	}

	myV.push_back(5);
	myV.push_back(10);
	myV.push_back(15);
	while (!myV.empty())
	{
		printf("myV.size:%d \n", myV.size());
		printf("myV.front:%d \n", myV.front());
		myV.erase(myV.begin());
	}

	return 0;
}