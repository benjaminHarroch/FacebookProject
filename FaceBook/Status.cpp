
#include "Status.h"

Status::Status(const char* newStatus )
{
	setStatus(newStatus);
	setDate();
}

//get status by ref in the copy constractur
Status::Status(const Status& cpStatus) {

	status = new char[strlen(cpStatus.status)];
	strcpy(status, cpStatus.status);
	date = new char[strlen(cpStatus.date)];
	strcpy(date, cpStatus.date);



}
void Status::setStatus(const char* newStatus)
{

	status = new char[strlen(newStatus)+1];
	strcpy(status, newStatus);

}


void Status::setDate()
{

	time_t rawtime;
	time(&rawtime);
	date=ctime(&rawtime);

}

void Status::printStatus()
{

	cout << " the time is : " << date
		<< " the status is : " << status;
}

