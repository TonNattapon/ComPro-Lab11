#include<iostream>
#include <string>
using namespace std;

int main(){
	int count[5] = {}; //Declare array count for counting A,B,C,D,F and initialize all element = 0
	int student = 1;
	string grade;
	cout << "Please input grade of each student (A-F) or input 0 to exit." << endl;
	do{
		cout << "Student [" << student << "]: ";
		cin >> grade; //The loop must be terminated when grade = '0'
		if( grade == "A"){ // if grade is A
			student++;
			count[0]++;
		}else if( grade == "B"){
			student++;
			count[1]++;
		}else if (grade == "C")
		{
			student++;
			count[2]++;
		}else if (grade == "D")
		{
			student++;
			count[3]++;
		}else if (grade == "F")
		{
			student++;
			count[4]++;
		}else if (grade == "0")
		{
			break;
		}else{
			cout << "Wrong input. Please input again." << endl; 
		} 
	}while(true);
	cout << "In total "<< student-1 << " students." << endl;
	cout << "A = " << count[0] <<", ";
	cout << "B = " << count[1]<<", ";	
	cout << "C = " << count[2] << ", ";
	cout << "D = " << count[3] << ", ";
	cout << "F = " << count[4];
	//	and so on ... for grade = C, D, F	
	
	return 0;
}
