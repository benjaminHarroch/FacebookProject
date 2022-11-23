#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "FansPage.h"
#include "Status.h"
#include "GlobalFunctions.h"
using namespace std;

class Friend {
	char name[25] = "no name";
	
	Status** listOfStatus = nullptr;
	int numOfStatus = 0;
	
	Friend** listOfFriends = nullptr;
	int numOfFriends = 0;
	
	FansPage** listOfFanPage = nullptr;
	int numOfFanPage = 0;
	
public:
	//need to do consractor and set function
	//the fanction gets a ptr of a friend and adds it to the lists of friends
	void addFriend( Friend* friendPtr) ;

	//the fanction gets a ptr of a friend and removes it from the lists of friends
	
	void removeFriend( Friend* friendPtr);

	//the function print friend
	void print();
	
};