#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "FansPage.h"
#include "Status.h"
#include "Friend.h"
using namespace std;

class Control
{
	Friend** allTheFriendsList = nullptr;
	int numOfAllfriends = 0;

	FansPage** allTheFanPagesList = nullptr;
	int numOfAllFanPages = 0;

public:

	void addFriend(Friend* friend1);
	
	void addFanPage(FansPage* fanPage);

	void printAllObjects();

};