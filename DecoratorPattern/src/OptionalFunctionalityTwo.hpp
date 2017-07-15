/*
 * OptionalFunctionalityOne.hpp
 *
 *  Created on: Jul 15, 2017
 *      Author: iban
 */

#ifndef OPTIONALFUNCTIONALITYTWO_HPP_
#define OPTIONALFUNCTIONALITYTWO_HPP_

#include "OptionalFunctionalityWrapper.hpp"
#include "GenericInterface.hpp"

using std::cout;

class OptionalFunctionalityTwo: public OptionalFunctionalityWrapper {
  public:
    OptionalFunctionalityTwo(GenericInterface *core): OptionalFunctionalityWrapper(core){}
    ~OptionalFunctionalityTwo() {
        cout << "OptionalFunctionalityTwo destructor" << "   ";
    }
    /*virtual*/
    void doSomething() {
    	OptionalFunctionalityWrapper::doSomething();
        cout << "Optional Functionality Two";
    }
};

#endif /* OPTIONALFUNCTIONALITYONE_HPP_ */
