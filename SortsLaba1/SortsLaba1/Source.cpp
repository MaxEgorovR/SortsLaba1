#include "Sorts.h"

int main() {
	int choise1, choise;
	bool flag = true;
	while (flag) {
		std::cout << "1 - массив целых чисел\n2 - массив действительных чисел\n3 - массив строк\n4 - массив символов\n5 - выход\n";
		std::cin >> choise1;
	switch (choise1) {
	case 1: {
		int length;
		std::cin >> length;
		int* arr = new int[length];
		for (int i = 0; i < length; i++) {
			std::cin >> arr[i];
		}
		Sorts<int> integers("integer",arr,length);
		while (flag) {
			std::cout << "1 - Сортировка пузырьком\n2 - Сортировка выбором\n3 - Сортировка вставкой\n4 - Сортировка подсчётом\n5 - Цифровая сортировка\n6 - Выйти\n";
			std::cin >> choise;
			switch (choise) {
			case 1: {
				integers.bubleSortInt();
				integers.info();
			}
			case 2: {
				integers.selectionSortInt();
				integers.info();
			}
			case 3: {
				integers.insertionSortInt();
				integers.info();
			}
			case 4: {
				integers.countingSortInt();
				integers.info();
			}
			case 5: {
				integers.digitalSortInt();
				integers.info();
			}
			case 6: {
				flag = false;
			}
			}
		}
	}
	case 2: {
		int length;
		std::cin >> length;
		double* arr = new double[length];
		for (int i = 0; i < length; i++) {
			std::cin >> arr[i];
		}
		Sorts<double> doubles("double", arr, length);
		while (flag) {
			std::cout << "1 - Сортировка пузырьком\n2 - Сортировка выбором\n3 - Сортировка вставкой\n4 - Сортировка подсчётом\n5 - Цифровая сортировка\n6 - Выйти\n";
			std::cin >> choise;
			switch (choise) {
			case 1: {
				doubles.bubleSortDouble();
				doubles.info();
			}
			case 2: {
				doubles.selectionSortDouble();
				doubles.info();
			}
			case 3: {
				doubles.insertionSortDouble();
				doubles.info();
			}
			case 4: {
				doubles.countingSortDouble();
				doubles.info();
			}
			case 5: {
				doubles.digitalSortDouble();
				doubles.info();
			}
			case 6: {
				flag = false;
			}
			}
		}
	}
	case 3: {
		int length;
		std::cin >> length;
		std::string* arr = new std::string[length];
		for (int i = 0; i < length; i++) {
			std::cin >> arr[i];
		}
		Sorts<std::string> strings("string", arr, length);
		while (flag) {
			std::cout << "1 - Сортировка пузырьком\n2 - Сортировка выбором\n3 - Сортировка вставкой\n4 - Сортировка подсчётом\n5 - Цифровая сортировка\n6 - Выйти\n";
			std::cin >> choise;
			switch (choise) {
			case 1: {
				strings.bubleSortString();
				strings.info();
			}
			case 2: {
				strings.selectionSortString();
				strings.info();
			}
			case 3: {
				strings.insertionSortString();
				strings.info();
			}
			case 4: {
				strings.countingSortString();
				strings.info();
			}
			case 5: {
				strings.digitalSortString();
				strings.info();
			}
			case 6: {
				flag = false;
			}
			}
		}
	}
	case 4: {
		int length;
		std::cin >> length;
		char* arr = new char[length];
		for (int i = 0; i < length; i++) {
			std::cin >> arr[i];
		}
		Sorts<char> chars("char", arr, length);
		while (flag) {
			std::cout << "1 - Сортировка пузырьком\n2 - Сортировка выбором\n3 - Сортировка вставкой\n4 - Сортировка подсчётом\n5 - Цифровая сортировка\n6 - Выйти\n";
			std::cin >> choise;
			switch (choise) {
			case 1: {
				chars.bubleSortChar();
				chars.info();
			}
			case 2: {
				chars.selectionSortChar();
				chars.info();
			}
			case 3: {
				chars.insertionSortChar();
				chars.info();
			}
			case 4: {
				chars.countingSortChar();
				chars.info();
			}
			case 5: {
				chars.digitalSortChar();
				chars.info();
			}
			case 6: {
				flag = false;
			}
			}
		}
	}
	case 5: {
		flag = false;
	}
	}
	}
	
}