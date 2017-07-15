/*
 * GenericInterface.hpp
 *
 *  Created on: Jul 15, 2017
 *      Author: iban
 */

#ifndef GENERICINTERFACE_HPP_
#define GENERICINTERFACE_HPP_

class GenericInterface {
  public:
    virtual ~GenericInterface(){}
    virtual void doSomething() = 0;
};


#endif /* GENERICINTERFACE_HPP_ */
