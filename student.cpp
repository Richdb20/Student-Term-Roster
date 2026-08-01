#include <iostream>
#include <string>
#include "student.h"
#include "degree.h"
using namespace std;

//Empty Constructor
	student::student()
	{
		this->studentID = "";
		this->firstName = "";
		this->lastName = "";
		this->emailAddress = "";
		this->age = 0;
		this->daysComplete = new int[days_complete];
		this->degreeType = "";
		for (int i = 0; i < days_complete; ++i) this->daysComplete[i] = 0;
	}

//Constructor with parameters
	student::student(string StudentID, string firstName, string lastName, string emailAddress, int age, int daysComplete[], Degree degreeType);
	{
		this->studentID = StudentID;
		this->firstName = firstName;
		this->lastName = lastName;
		this->emailAddress = emailAddress;
		this->age = age;
		this->daysComplete = daysComplete;
		for (int i = 0; i < 3; ++i) this->daysComplete[i] = daysComplete[i];
		this->Degree = degreeType;
	}

	//Getters
	string student::getstudentID()
	{
		return studentID;
	}

	string student::getfirstName()
	{
		return firstName;
	}

	string student::getlastName()
	{
		return lastName;
	}

	string student::getemailAddress()
	{
		return emailAddress;
	}

	int student::getage()
	{
		return age;
	}

	int getdaysToComplete()
	{
		return daysComplete;
	}
	Degree student::getDegree()
	{
		return degreeType;
	}

	void student::setstudentID(string studentID)
	{
		this->studentID = studentID;
	}

	void student::setfirstName(string firstName)
	{
		this->firstName = firstName;
	}

	void student::setlastName(string lastName)
	{
		this->lastName = lastName;
	}

	void student::setemailAddress(string emailAddress)
	{
		this->emailAddress = emailAddress;
	}

	void student::setage(int age)
	{
		this->age = age;
	}

	void student::setdaysComplete(int daysComplete)
	{
		for (int i = 0; i < 3; ++i) this->daysComplete[i] = daysComplete[i];
	}

	void student::setdegreeType(string degreeType)
	{
		this->degreetype = degreeType;
	}

	
	//print method showing fields excluding student type
	void student::print() 

#endif