/*
 * OptionalFunctionalityWrapper.hpp
 *
 *  Created on: Jul 15, 2017
 *      Author: iban
 */

#ifndef OPTIONALFUNCTIONALITYWRAPPER_HPP_
#define OPTIONALFUNCTIONALITYWRAPPER_HPP_

#include "GenericInterface.hpp"

class OptionalFunctionalityWrapper: public GenericInterface{
  public:
    OptionalFunctionalityWrapper(GenericInterface *inner) {
        Wrappee = inner;
    }
    ~OptionalFunctionalityWrapper() {
        delete Wrappee;
    }
    /*virtual*/
    void doSomething() {
        Wrappee->doSomething();
    }
  private:
    GenericInterface *Wrappee;
};



#endif /* OPTIONALFUNCTIONALITYWRAPPER_HPP_ */
