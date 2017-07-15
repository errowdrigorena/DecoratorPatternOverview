/*
 * MyObserver.hpp
 *
 *  Created on: Jul 14, 2017
 *      Author: iban
 */

#ifndef MYOBSERVER_HPP_
#define MYOBSERVER_HPP_

#include <string>
#include "ObserverInterface.hpp"

class MyObserver : public ObserverInterface
{
public:
	explicit MyObserver(const std::string &str) : name(str) {}
	void update(int message)
	{
		std::cout << name << " Got message " << message << std::endl;
	}
private:
	std::string name;
};


#endif /* MYOBSERVER_HPP_ */
