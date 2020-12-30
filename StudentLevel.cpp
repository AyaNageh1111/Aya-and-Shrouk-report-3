#include<iostream>
#include"Actions/ActionAddCourse.h"
#include"Courses/Course.h"
#include"StudentLevel.h"
#include"Registrar.h"
using namespace std;

StudentLevel :: StudentLevel (Registrar* p) : Action(p)
{
}
bool StudentLevel::Execute()
{
	Course* credit; //Pointer to class Course to get the number of credits
	credit->getCredits();
	int credits = 0;
	GUI* Level;
	if (credits == 17 && credits == 15 && credits == 32) //Taking Eng 152 & 151 into consideration //Total credits 35
	{
		Level->PrintMsg("Foundation Student");
	}
	else if (credits == 18  && credits == 17 && credits == 35 )//Taking SCH 260 into consideration //Total Credits 35
	{
		Level->PrintMsg("Sophomore Student");
	}
	else if (credits == 17 && credits == 34)
	{
		Level->PrintMsg("Junior Student");
	}
	else if (credits == 18 && credits == 14 && credits == 35)
	{
		Level->PrintMsg("Pre_Senior Student");
	}
	else if (credits == 14 && credits == 13 && credits == 35)
	{
		Level->PrintMsg("Sophomore Student");
	}
}

StudentLevel :: ~StudentLevel()
	{

	}
/*	32
    35
    34 
	32
	27
*/
