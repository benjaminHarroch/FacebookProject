#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include <time.h>
#include <iostream>
using namespace std;



class Status 
{

private:

	char* status;
	char* date;
	
public:
	//constrator status -save data into the status string and into the date
	//with setdate function and setstatus.
	Status(const char* newStatus);

	void setDate();
	void setStatus(const char* newStatus);

	//print status
	void printStatus();

};