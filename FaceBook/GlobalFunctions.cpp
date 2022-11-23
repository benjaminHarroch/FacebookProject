#include "GlobalFunctions.h"

void printListOfStatus(Status** ListOfStatus, int size)
{
	
		int i;
		for (i = 0; i < size; i++)
		{
			ListOfStatus[i]->printStatus();
			cout << "\n";
		}
	

}