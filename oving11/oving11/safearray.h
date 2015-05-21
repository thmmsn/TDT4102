#pragma once

#include <stdexcept>
#include <sstream>

template<typename DataType>
class SafeArray {
	DataType *data;
	int dataSize;
public:
	SafeArray();
	SafeArray(int numElements);
	SafeArray(const SafeArray &other);
	~SafeArray();
	SafeArray &operator=(const SafeArray &rhs);
	int size() const;
	DataType &operator[](int elementNum);
	DataType operator[](int elementNum) const;
	void resize(int newSize);
};

template<typename DataType>
SafeArray<DataType>::SafeArray() {
	dataSize = 0;
	data = NULL;
}

template<typename DataType>
SafeArray<DataType>::SafeArray(int numElements) : dataSize(numElements) {
	data = new DataType[numElements]();
}

template<typename DataType>
SafeArray<DataType>::SafeArray(const SafeArray &other) {
	data = NULL; // setter op til NULL
	dataSize = 0;
	*this = other;
}

template<typename DataType>
SafeArray<DataType>::~SafeArray() {
	delete[] data;
}

template<typename DataType>
SafeArray<DataType> &SafeArray<DataType>::operator=(const SafeArray<DataType> &rhs) {
	delete[] data;
	dataSize = rhs.size();
	data = new DataType[dataSize];
	for (int i = 0; i < dataSize; i++) {
		data[i] = rhs.data[i];
	}
	return *this;
}

template<typename DataType>
int SafeArray<DataType>::size() const {
	return dataSize;
}

template<typename DataType>
DataType &SafeArray<DataType>::operator[](int elementNum) {
	if (elementNum < 0 || elementNum >= dataSize) {
		std::stringstream ss;
		ss << elementNum << " is out of range for a SafeArray of size " << dataSize;
		throw std::out_of_range(ss.str());
	}
	return data[elementNum];
}

template<typename DataType>
DataType SafeArray<DataType>::operator[](int elementNum) const {
	if (elementNum < 0 || elementNum >= dataSize) {
		std::stringstream ss;
		ss << elementNum << " is out of range for a SafeArray of size " << dataSize;
		throw std::out_of_range(ss.str());
	}
	return data[elementNum];
}

template<typename DataType>
void SafeArray<DataType>::resize(int newSize) {
	if (newSize < 0) {
		std::stringstream ss;
		ss << "Negative new size " << newSize << " given to resize()";
		throw std::out_of_range(ss.str());
	}

	DataType *newData = new DataType[newSize];

	// Sett nye elementer til 0
	for (int i = dataSize; i < newSize; i++) {
		newData[i] = 0;
	}

	// Kopier gamle elementer.
	for (int i = 0; i < dataSize; i++) {
		newData[i] = data[i];
	}

	// Slett den gamle tabellen.
	delete[] data;
	data = newData;
	dataSize = newSize;
}

