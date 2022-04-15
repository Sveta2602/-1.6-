#include "Class_Data.h"
#include <iostream>
#include "main.h"
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	
	Data n;
	
	n.Read();
	n.Display();
	n.Read1();
	n.Display();
	n.Read2(5);
	n.Display();
	return 0;
}


