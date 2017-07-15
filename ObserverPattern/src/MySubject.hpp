/*
 * MySubject.hpp
 *
 *  Created on: Jul 14, 2017
 *      Author: iban
 */

#ifndef MYSUBJECT_HPP_
#define MYSUBJECT_HPP_

#include "SubjectInterface.hpp"

class MySubject : public SubjectInterface
{
public:
	enum Message {ADD, REMOVE};
};

#endif /* MYSUBJECT_HPP_ */
