/*
 * CoreFunctionality.hpp
 *
 *  Created on: Jul 15, 2017
 *      Author: iban
 */

#ifndef COREFUNCTIONALITY_HPP_
#define COREFUNCTIONALITY_HPP_

#include "GenericInterface.hpp"

using std::cout;

class CoreFunctionality: public GenericInterface {
  public:
    ~CoreFunctionality() {
        cout << "CoreFunctionality destructor" << '\n';
    }
    /*virtual*/
    void doSomething() {
        cout << "Core Functionality";
    }
};




#endif /* COREFUNCTIONALITY_HPP_ */
