/*
 * SubjectInterface.cpp
 *
 *  Created on: Jul 14, 2017
 *      Author: iban
 */
#include "SubjectInterface.hpp"

SubjectInterface::~SubjectInterface()
{}

void SubjectInterface::subscribe(ObserverInterface *observer)
{
	mObservers.push_back(observer);
}

void SubjectInterface::unsubscribe(ObserverInterface *observer)
{
	int count = mObservers.size();
	int i;
	auto iterator = mObservers.begin();
	while (iterator != mObservers.end()) {
		if(*iterator == 0){
			break;
		}
		iterator++;
	}
	if(iterator != mObservers.end())
	{
		mObservers.erase(iterator);
	}
}

void SubjectInterface::notify(int msg)
{
	for (auto iterator : mObservers)
	{
		iterator->update(msg);
	}
}


