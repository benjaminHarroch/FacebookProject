#pragma once
#include "Status.h"
#include "Friend.h"


class FansPage {


private:

	char* name = nullptr;

	Status** listofStatus = nullptr;
	int numOfStatus = 0;

	Friend** listOfFriends = nullptr;
	int numOfFriends = 0;

	int psizeListOfFriend=2;
	int psizeStatus=2;


public:

	FansPage(char* name1);

	//the fanction gets a ptr of a friend and adds it to the lists of friends
	void addFriend(Friend* friendPtr);

	//the fanction gets a ptr of a friend and removes it from the lists of friends
	void removeFriend(const Friend& friendPtr);

	void addStatus(Status* statusptr);

	//the function print fanspage is status
	void printStatus();

	//the function pritn all the friend of the fans page
	void printFriend();


};
