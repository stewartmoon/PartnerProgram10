/* Author: Stewart Moon
Class: CSC 223-100
Professor: Jeffrey Howard
Due Date: 11/9/2017
Page & Problem #: Page 475, #6
Description: This program will 

*/

#include <string>
#include <iomanip>
#include <iostream>

using namespace std;

class DynamicStringArray
{
private:
	int size;
	int nullprt = 0;
	string *Dynamic;

public:

	//Default Contstructor
	void DynamicString();

	//Member functions
	int getArraySize();
	string DynamicStringArray::getEntry(int index);
	void DynamicStringArray::addEntry(string input);
	bool DynamicStringArray::deleteEntry(string input);
};

int main()
{
	string input="HelloWorld";
	DynamicStringArray test1;
	
	//Friendly Hello:
	cout << "Hello and welcome to the partner program from Module 10" << endl;
	cout << "Size of Array: "<<test1.getArraySize()<<endl;
	test1.addEntry(input);
	cout << "Condition if Match was found: " << endl;
	
return 0;
}

//Description: Default constructor for class DynamicStringArray
void DynamicStringArray:: DynamicString()
{
	//Declare variables
	size = 0;
	Dynamic= new string[size];
}

//pre-condition: No parameters passed
//post-condition: Returns size of Arrray
//Description: call this method to return size of array
int DynamicStringArray:: getArraySize()
{
	return size;
}

//pre-condition: Passes varible string named input as parameter
//post-conditin: Returns nothing
//Description: Adds an entry to the Array
void DynamicStringArray::addEntry(string input)
{
	//Declare variables
	string *temp;
	temp = new string[size+1];


	//Replace old array with new Array
	for (int i = 0; i <= size; i++)
	{
		temp[i] = Dynamic[i];
	}

	//Add String to last index of array
	temp[size] = input;

	//Delete Old Array
	delete [] Dynamic;

	//Assign Dynamic equal to temp
	Dynamic = temp ;
	for (int i = 0; i < size + 1; i++)
	{
		cout << Dynamic[i];
	}
}


//Description: Deletes an entry to the Array
//pre-condition: String variable named input will be passed as parameter
//post-conditin: Bool variable named condition will return
bool DynamicStringArray::deleteEntry(string input)
{
	string *newDynamic;
	newDynamic = new string[size + 1];

	//Declare variables
	bool condition=false;
	
	//Search through Array to find a match for the string
	for (int i=0;i<=size;i++)
	{
		//if match found, delete index and change condition value
		if (newDynamic[i]==input)
		{
			condition = true;
			//replace 
			for (int i = 0; i <= size; i++)
			{
				newDynamic[i] = Dynamic[i];
			}
		}
	}
//return bool condition
return condition;
}

//Description: Deletes an entry to the Array
//pre-condition: Int variable named index will be passed as parameter
//post-conditin: String variable named indexofArray will return
string DynamicStringArray::getEntry(int index)
{
	//Declare variables
	string indexofArray;
	
	//
	if (index > size)
	{
		indexofArray = Dynamic[index];
	}
	
return indexofArray;
}
