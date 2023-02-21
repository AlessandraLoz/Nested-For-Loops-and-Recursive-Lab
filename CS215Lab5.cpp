//Course: CS215, Section 05
//Project: Lab Assignment 5
//Date: 09/21/2022
//Purpose: 
//Author: Alessandra Lozano, ID#12523364

//for cin and cout 
#include <iostream>

//for string variables
#include <string>

//makes writing code more efficient 
using namespace std;

/*
* print a triangle of asterisk, center alignment
* starting with one asterisk at the first row, three at the second
row...
*@param n int: representing how many rows of the triangle
* (The triangle should contain 2*n-1 asterisks at the bottom
row of the triangle)
*@return: void function
*/
void drawTri(int n)
{
	//for loop which runs iterations in reference to n 
	for (int i = 1; i <= n; i++)
	{
		//for loop diplays amount of spaces needed
		for (int j = 1; j <= n - i; j++)
		
			cout << " ";

		//for loop displays amount of asterisks needed
		for (int j = 1; j <= (2 * i) - 1; j++)

			cout << "*";

		cout << endl;
		
	}
}

/*
* print a triangle of asterisk
* It rotates the pattern from drawTri function, 90-degree clockwise
*@param n int: representing how many rows of the original triangle
before rotation
*@return: void function
*/
void drawTriR90(int n)
{
	//for loop which runs iterations in reference to n 
	for (int i = 1; i < n; i++)
	{
		//for loop displays amount of asterisks needed
		for (int j = 1; j <= i; j++)
			
			cout << "*";
			
		cout << endl;
	}

	//for loop which runs iterations in reference to n 
	for (int i = n; i >= 1; i--)
	{
		//for loop displays amount of asterisks needed
		for (int j = 1; j <= i; j++)

			cout << "*";

		cout << endl; 
		
	}
}

/*
* print a triangle of asterisk
* It rotates the pattern from drawTri function, 180 - degree clockwise
or it rotates the pattern from drawTriR90 function, 90 - degree
clockwise
* @param n int: representing how many rows of the original triangle
before rotation
* @return: void function
*/
void drawTriR180(int n)
{	
	//for loop which runs iterations in reference to n 
	for (int i = n; i >= 1; i--)
	{
		//for loop diplays amount of spaces needed
		for (int j = 1; j <= n - i; j++)

			cout << " ";

		//for loop displays amount of asterisks needed
		for (int j = 1; j <= 2 * i - 1; j++)
		
			cout << "*";
				
		cout << endl;
	}
}

//holds main function of program
int main()
{	
	//delcaring variables 
	int RowNum = 0;
	string flag;

	//do-while statement that always runs at least once and continuously runs so long
	//as user doesn't input q or Q
	do
	{

		//output statement for user directions
		cout << "Enter the size of your triangle (integer in [1, 30]) \nType Q to quit program: " ;

		//stores users input into the variable RowNum
		cin >> RowNum;

		//If statement checking wether or not input failed
		if (cin.fail())
		{
			//clearing input in order to continue work with it in loop
			cin.ignore(1000, '\n');
			cin.clear();

			//Puts input from UserNum as the input for string flag
			cin >> flag;

			//If else statement checking wether or not we want to show total or error message
			if (flag == "Q" || flag == "q")
			{
				//clears input and ignores any other input value
				cin.ignore(1000, '\n');
				cin.clear();

				////Output statement for when user quits program 
				cout << "Thank you, have a great day!" << endl;

				//leaves loop
				break;
			}
			//when input fails but it's not q or Q
			else 
			{
				//ignores input and clears previous input
				cin.ignore(1000, '\n');
				cin.clear();

				//output error message for user 
				cout << "Invalid size!" << endl;
			}


		}

		//else if stateent to check if the number was within range
		else
		{
			if (RowNum < 1 || RowNum > 30)
			{
				//ignores input and clears previous input
				cin.ignore(1000, '\n');
				cin.clear();

				//output statement for when input is not in range
				cout << "The size is not in the correct range" << endl;
			}

			//else statement for when input is in the correct range
			else
			{
				//ignores input and clears previous input
				cin.ignore(1000, '\n');
				cin.clear();

				//output statements for user with regular triangle displayed 
				cout << "The triangle with size " << RowNum << endl;
				//calls void drawTri with reference to variable of user input
				drawTri(RowNum);
				//output statements for user with triangle rotated 90 degreees displayed 
				cout << "The rotation for 90 degrees clockwise: " << endl;
				//calls void drawTriR90 with reference to variable of user input
				drawTriR90(RowNum);
				//output statements for user with triangle rotated 180 degreees displayed 
				cout << "The rotation for 180 degrees clockwise: " << endl;
				//calls void drawTriR180 with reference to variable of user input
				drawTriR180(RowNum);

			}
		}

      //do-while conditions 
	} while (flag != "Q" || flag != "q");

	//ends program
	return 0;

}