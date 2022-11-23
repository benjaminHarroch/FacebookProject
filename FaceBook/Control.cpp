#include "Control.h"


void Control::addFriend(Friend* Friend1)
{
	numOfAllfriends++;
	allTheFriendsList = new Friend* [numOfAllfriends];
	allTheFriendsList[numOfAllfriends - 1] = Friend1;
}