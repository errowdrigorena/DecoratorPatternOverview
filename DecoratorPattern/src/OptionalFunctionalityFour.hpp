/*
 * OptionalFunctionalityOne.hpp
 *
 *  Created on: Jul 15, 2017
 *      Author: iban
 */

#ifndef OPTIONALFUNCTIONALITYFOUR_HPP_
#define OPTIONALFUNCTIONALITYFOUR_HPP_

#include "OptionalFunctionalityWrapper.hpp"
#include "GenericInterface.hpp"

using std::cout;

class OptionalFunctionalityFour: public OptionalFunctionalityWrapper {
  public:
    OptionalFunctionalityFour(GenericInterface *core): OptionalFunctionalityWrapper(core){}
    ~OptionalFunctionalityFour() {
        cout << "OptionalFunctionalityFour destructor" << "   ";
    }
    /*virtual*/
    void doSomething() {
    	OptionalFunctionalityWrapper::doSomething();
        cout << "OptionalFunctionalityFour";
    }
};

#endif /* OPTIONALFUNCTIONALITYONE_HPP_ */
