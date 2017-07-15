/*
 * OptionalFunctionalityOne.hpp
 *
 *  Created on: Jul 15, 2017
 *      Author: iban
 */

#ifndef OPTIONALFUNCTIONALITYONE_HPP_
#define OPTIONALFUNCTIONALITYONE_HPP_

#include "OptionalFunctionalityWrapper.hpp"
#include "GenericInterface.hpp"

using std::cout;

class OptionalFunctionalityOne: public OptionalFunctionalityWrapper {
  public:
    OptionalFunctionalityOne(GenericInterface *core): OptionalFunctionalityWrapper(core){}
    ~OptionalFunctionalityOne() {
        cout << "OptionalFunctionalityOne destructor" << "   ";
    }
    /*virtual*/
    void doSomething() {
    	OptionalFunctionalityWrapper::doSomething();
        cout << "Optional Functionality One";
    }
};

#endif /* OPTIONALFUNCTIONALITYONE_HPP_ */
