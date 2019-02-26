#include "pch.h"
#include "Athing.h"
using namespace std;

template<class T>
T aThing<T>::getWeight(void) { return weight; }

template<class T>
void aThing<T>::setWeight(T inWeight) {
	weight = inWeight; 
}