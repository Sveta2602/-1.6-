#include "Class_Data.h"
#include <iostream>
#include "Triad.h"

using namespace std;
void Data::Init( Triad triad)
{
	
	setTriad(triad);
}
void Data::Display() const
{
	
	cout << endl;
	cout << "���� = " << endl;
	triad.Display(); // ������������� �����������
}
 void Data::Read()
{
	
	cout << endl;
	cout << " ���� = " << endl;
	
	triad.Read();
	
	Init(triad);

}
 void Data::Read1()
 {

	 cout << endl;
	 cout << " ���� = " << endl;

	 triad.Read();
	 triad.operator+();
	 Init(triad);

 }
 void Data::Read2(int N)
 {

	 cout << endl;
	 cout << " ���� = " << endl;

	 triad.Read();
	 triad.operator++(N);
	 Init(triad);

 }