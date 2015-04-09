#pragma once
#include <iostream>
#include "safearray.h"

template<typename DataType>
class FancySafeArray : public SafeArray<DataType> {
public:
	FancySafeArray();
	FancySafeArray(int numElements);
	FancySafeArray operator+(const FancySafeArray &rhs) const;
};

template<typename DataType>
FancySafeArray<DataType>::FancySafeArray() : SafeArray<DataType>() {
}

template<typename DataType>
FancySafeArray<DataType>::FancySafeArray(int numElements) : SafeArray<DataType>(numElements) {
}

template<typename DataType>
FancySafeArray<DataType> FancySafeArray<DataType>::operator+(const FancySafeArray<DataType> &rhs) const {
	FancySafeArray result = *this;
	result.resize(this->size() + rhs.size());
	for (int i = 0; i < rhs.size(); i++) {
		result[this->size() + i] = rhs[i];
	}
	return result;
}

// Begrenser oss til aa bare kunne ha elementer som har <<-operatoren definert.
// NB: Vi vil ikke vaere friend.
template<typename DataType>
std::ostream &operator<<(std::ostream &stream, const FancySafeArray<DataType> &array) {
	stream << "[";
	for (int i = 0; i < array.size(); i++) {
		stream << array[i];
		if (i != array.size() - 1) {
			stream << ",";
		}
	}
	stream << "]";
	return stream;
}
