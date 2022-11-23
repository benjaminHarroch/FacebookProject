
#include "FansPage.h"





FansPage::FansPage(char* name) {

	this->name = new char[strlen(name + 1)];
	strcpy(this->name, name);


}

void FansPage::addFriend(Friend* friendPtr) {

	numOfFriends++;
	if (numOfFriends == psizeListOfFriend)
	{
		psizeListOfFriend = psizeListOfFriend * 2;
		listOfFriends = new Friend * [numOfFriends];
	}

	listOfFriends[numOfFriends - 1] = friendPtr;

}



void FansPage::addStatus(Status* statusptr) {

	numOfStatus++;

	if (numOfFriends == psizeListOfFriend)
	{
		psizeStatus = psizeStatus * 2;
		listofStatus = new Status * [numOfStatus];
	}
	listofStatus[numOfStatus - 1] = statusptr;
}


void FansPage::removeFriend(const Friend& ptrFriend)
{

	int i;
	int j = 0;

	//first loop for find the ptr and change to null ptr and free the pointer
	for (i = 0; i < numOfFriends; i++)
	{

		if (&ptrFriend == listOfFriends[i])
		{
			delete[]listOfFriends[i];
			listOfFriends[i] = nullptr;
		}
	}

	listOfFriends = new Friend * [numOfFriends-1];

	//copy the array to the same array but without the null ptr;
	for (i = 0; i < numOfFriends; i++) {
		
		if (listOfFriends[i] != nullptr)
		{
			listOfFriends[j] = listOfFriends[i];
			j++;
		}
		
	}

	numOfFriends--;
}


//read the array of Friend and for every friend print himself
void FansPage::printStatus() {

	int i;

	for (i = 0; i < numOfStatus; i++) {

		listofStatus[i]->printStatus();

	}

}

//read the array of status and for every status print himself
void FansPage::printFriend() {

	int i;

	for (i = 0; i < numOfFriends; i++) {

		listOfFriends[i]->print();

	}

}