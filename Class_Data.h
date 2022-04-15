#pragma once
#include "Class_Triad.h"

class Data
{
	Triad triad;
public:
	Triad getTriad() const { return  this->triad; }
	
	void setTriad(Triad triad) { this->triad = triad; }
	void Init( Triad triad);
	void Display() const;
	void Read();
	void Read1();
	void Read2(int N);
};

 