#include "Registrar.h"
#include"Rules.h"
#include <iostream>
#include <string>
using namespace std;
int get_total_cr(CourseInfo* C, int size)
{
	int total_cr = 0;
	for (int i = 0; i < size; i++)
	{
		total_cr = total_cr + C[i].Credits;
	}
	return total_cr;
}
float get_totalpo(int size) 
{
	float s;
	float total_po;
	for (int i = 0; i < size; i++) {
		cout << "enter the expected/actual grade";
		cin >> s;
		total_po= total_po + s;
	}
	return total_po;
}
float gpa(int total_cr, float total_po)
{
	 float gpa = total_po / total_cr;
	 return gpa;
}

