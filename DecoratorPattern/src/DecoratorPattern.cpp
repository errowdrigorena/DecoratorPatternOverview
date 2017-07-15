//============================================================================
// Name        : DecoratorPattern.cpp
// Author      : Errow
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

#include "CoreFunctionality.hpp"
#include "GenericInterface.hpp"
#include "OptionalFunctionalityOne.hpp"
#include "OptionalFunctionalityTwo.hpp"
#include "OptionalFunctionalityFour.hpp"

int main() {
	  GenericInterface *CoreAndFunctionalityOne = new OptionalFunctionalityOne(new CoreFunctionality);
	  GenericInterface *OptionalOneTwoAndCore = new OptionalFunctionalityTwo(new OptionalFunctionalityOne(new CoreFunctionality));
	  GenericInterface *OptionalOnetWOFourAndCore= new OptionalFunctionalityFour(new OptionalFunctionalityTwo(new OptionalFunctionalityOne(new CoreFunctionality)));
	  CoreAndFunctionalityOne->doSomething();
	  cout << '\n';
	  OptionalOneTwoAndCore->doSomething();
	  cout << '\n';
	  OptionalOnetWOFourAndCore->doSomething();
	  cout << '\n';
	  delete CoreAndFunctionalityOne;
	  delete OptionalOneTwoAndCore;
	  delete OptionalOnetWOFourAndCore;
}
