/*
*LAB: 01 - TASK #1
*NAME: Husnain Hassan
*ROLL NO: 2026-SE- 21
*DATE: 11 -Nov-2026
*PURPOSE: To Hunt 5 bugs
*/

#include<iostream>
using namespace std;// (bug1)In given code the semicolon was not added at the end.
int main()
{
	cout<<"Welcome to the lab!"<<endl;//(bug 2)here (;) was missing.
	cout<<"Today we learn\"c++\"."<<endl;//(bug 3) In c++ cout is written as Cout.
	cout<<"Files are in C:\\lab 1"<<endl;//(bug 4) Use \\ to print \.
	cout<<"Bye!"<<endl;//(bug 5) missing " after bye .
	return 0; 
}

