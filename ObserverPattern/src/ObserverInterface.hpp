/*
 * ObserverInterface.hpp
 *
 *  Created on: Jul 14, 2017
 *      Author: iban
 */

#ifndef OBSERVERINTERFACE_HPP_
#define OBSERVERINTERFACE_HPP_

class ObserverInterface
{
public:
	virtual ~ObserverInterface() {}
	virtual void update(int message) = 0;
};

#endif /* OBSERVERINTERFACE_HPP_ */
