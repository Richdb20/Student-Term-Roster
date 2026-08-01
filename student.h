#include <iostream>
#include <string>
#include "degree.h"
using namespace std;


	//Student class
class student {

	//Access specifier
private:

	//Variables
	string studentID,
	string firstName;
	string lastName;
	string emailAddress;
	int age;
	int daysComplete; //days to complete will be an array size of 3
	Degree degreeType;

public:

	//Constructors
	const static int numOfDays = 3;
	student(); //Empty constructor
	student(string studentID, string firstName, string lastName, string emailAddress, age, daysComplete, string degreeType); //Constructor with parameters


	//Accessors i.e setters
	string getstudentID();
	string getfirstName();
	string getlastName();
	string getemailAddress();
	int getage();
	int* getdaysComplete();
	Degree getDegree();

	//Mutators i.e getters
	void	setstudentID(string studentID);
	void	setfirstName(string firstName);
	void	setlastName(string lastName);
	void	setemailAddress(string emailAddress);
	void	setage(age);
	void	setdaysComplete(string daysComplete);
	void	setdegreeType(string degreeType);
	void	print();
};

#endif