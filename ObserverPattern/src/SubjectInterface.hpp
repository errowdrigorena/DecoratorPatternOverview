/*
 * SubjectInterface.hpp
 *
 *  Created on: Jul 14, 2017
 *      Author: iban
 */

#ifndef SUBJECTINTERFACE_HPP_
#define SUBJECTINTERFACE_HPP_

#include <vector>

#include "ObserverInterface.hpp"

class SubjectInterface
{
public:
	virtual ~SubjectInterface();
	virtual void subscribe(ObserverInterface *);
	virtual void unsubscribe (ObserverInterface *);
	virtual void notify(int message);
private:
	std::vector<ObserverInterface *> mObservers;
};

#endif /* SUBJECTINTERFACE_HPP_ */
