#pragma once
#include <iostream>
#include <string>
template <class T>

class Sorts {
	std::string type;
	T* data;
	int length;
public:
	Sorts();

	Sorts(std::string type, T* data, int length);

	// For int

	void bubleSortInt();

	void selectionSortInt();

	void insertionSortInt();

	void countingSortInt();

	void digitalSortInt();

	// For double

	void bubleSortDouble();

	void selectionSortDouble();

	void insertionSortDouble();

	void countingSortDouble();

	void digitalSortDouble();

	// For char

	void bubleSortChar();

	void selectionSortChar();

	void insertionSortChar();

	void countingSortChar();

	void digitalSortChar();

	// For string

	void bubleSortString();

	void selectionSortString();

	void insertionSortString();

	void countingSortString();

	void digitalSortString();

	void info();
};