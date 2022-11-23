#include "Friend.h"

void Friend::addFriend(Friend* friendPtr) 
{
	numOfFriends += 1;
	listOfFriends = new Friend* [numOfFriends];
	listOfFriends[numOfFriends - 1] = friendPtr;
}

void Friend :: print()
{
	
}