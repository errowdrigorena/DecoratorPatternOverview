//============================================================================
// Name        : ObserverPattern.cpp
// Author      : Errow
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

#include "MyObserver.hpp"
#include "MySubject.hpp"

using namespace std;

int main() {
	MyObserver observerA("observerA");
	MyObserver observerB("observerB");
	MyObserver observerC("observerC");

	MySubject subject;
	subject.subscribe(&observerA);
	subject.subscribe(&observerB);
	subject.unsubscribe(&observerB);
	subject.subscribe(&observerC);

	subject.notify(MySubject::ADD);
	subject.notify(MySubject::REMOVE);

	return 0;
}
