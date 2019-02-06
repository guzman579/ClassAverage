//ClassAverage.cpp
//solving the class average problem using counter controlled repetition.

#include <iostream>
using namespace std;

int main()
{

		double total = 0; // initialize sum of grades entered by the user
		double gradeCounter = 1; // initialize # of grade to be entered next
		double grade;
		// processing phase uses counter-controlled repetition
		while (gradeCounter <= 10) // loop 10 times
		{
			cout<<"Enter grade: "<<endl; // prompt 
			cin>>grade; // input next grade
			total = total + grade; // add grade to total
			gradeCounter = gradeCounter + 1; // increment counter by 1
		}

		double average = total / 10;

		// display total and average of grades
		cout<<"Total of all 10 grades is "<<total<<endl;
		cout<<"Class average is "<< average<<endl;
		system("pause");
} // end class
