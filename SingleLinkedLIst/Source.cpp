#include <iostream>
#include "List.h"

using namespace std;

int main()
{
	List list;
	list.CreateNode(10);
	list.CreateNode(20);
	list.CreateNode(30);
	list.CreateNode(40);
	list.InsertPosition(2, 4);
	list.Display();

	cout << "\n";
	return 0;
}