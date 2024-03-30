#include "Sorts.h"
template <class T>


// For int

Sorts<T>::Sorts(std::string type, T* data, int length) {
	this->type = type;
	this->length = length;
    for (int i = 0; i < length; i++) {
        this->data[i] = data[i];
    }
}


void Sorts<int>::bubleSortInt() {
	int tmp;
	for (int i = 0; i < this->length - 1; i++) {
		for (int j = 0; j < length - i - 1; j++) {
			if (data[j] > data[j + 1]) {
				tmp = data[j];
				data[j] = data[j + 1];
				data[j + 1] = tmp;
			}
		}
	}
}

void Sorts<int>::selectionSortInt() {
    int min,temp;
    for (int i = 0; i < length - 1; i++)
    {
        min = i;
        for (int j = i + 1; j < length; j++)
        {
            if (data[min] > data[j])
            {
                min = j;
            }
        }
        temp = data[i];
        data[i] = data[min];
        data[min] = temp;
    }
}

void Sorts<int>::insertionSortInt() {
    int key, j;
    for (int i = 1; i < length; i++)
    {
        key = data[i];
        j = i - 1;
        while (j >= 0 && data[j] > key)
        {
            data[j + 1] = data[j];
            j = j - 1;
        }
        data[j + 1] = key;
    }
}

void Sorts<int>::countingSortInt() {
    int k=0, k1=0;
    for (int i = 0; i < length; i++)
    {

        for (int i1 = 0; i1 < length; i1++)
        {
            if (data[i] == data[i1])
            {
                k1++;
            }
        }
        if (k1 == 1)
            k++;
    }


    int *output=new int[length];
    for (int i = 0; i < length; i++) {
        output[i] = 0;
    }

    int *count=new int[k];
    for (int i = 0; i < k; i++) {
        count[i] = 0;
    }

    for (int i = 0; i < length; i++) {
        count[data[i]]++;
    }

    for (int i = 1; i < k; i++) {
        count[i] += count[i - 1];
    }

    for (int i = length - 1; i >= 0; i--)
    {
        output[count[data[i]] - 1] = data[i];
        count[data[i]]--;
    }

    for (int i = 0; i < length; i++) {
        data[i] = output[i];
    }
}

void Sorts<int>::digitalSortInt() {
    int max=data[0];
    for (int i = 1; i < length; i++) {
        if (data[i] > max) {
            max = data[i];
        }
    }

    for (int exp = 1; max / exp > 0; exp *= 10) {
        int *output = new int[length]; 
        int i, count[10] = { 0 };

        for (i = 0; i < length; i++)
            count[(data[i] / exp) % 10]++;

        for (i = 1; i < 10; i++)
            count[i] += count[i - 1];

        for (i = length - 1; i >= 0; i--)
        {   
            output[count[(data[i] / exp) % 10] - 1] = data[i];
            count[(data[i] / exp) % 10]--;
        }

        for (i = 0; i < length; i++)
            data[i] = output[i];
    }
}

// For double

void Sorts<double>::bubleSortDouble() {
    double tmp;
    for (int i = 0; i < this->length - 1; i++) {
        for (int j = 0; j < length - i - 1; j++) {
            if (data[j] > data[j + 1]) {
                tmp = data[j];
                data[j] = data[j + 1];
                data[j + 1] = tmp;
            }
        }
    }
}

void Sorts<double>::selectionSortDouble() {
    int min;
    double temp;
    for (int i = 0; i < length - 1; i++)
    {
        min = i;
        for (int j = i + 1; j < length; j++)
        {
            if (data[min] > data[j])
            {
                min = j;
            }
        }
        temp = data[i];
        data[i] = data[min];
        data[min] = temp;
    }
}

void Sorts<double>::insertionSortDouble() {
    int j;
    double key;
    for (int i = 1; i < length; i++)
    {
        key = data[i];
        j = i - 1;
        while (j >= 0 && data[j] > key)
        {
            data[j + 1] = data[j];
            j = j - 1;
        }
        data[j + 1] = key;
    }
}

void Sorts<double>::countingSortDouble() {
    int k = 0, k1 = 0;
    for (int i = 0; i < length; i++)
    {

        for (int i1 = 0; i1 < length; i1++)
        {
            if (data[i] == data[i1])
            {
                k1++;
            }
        }
        if (k1 == 1)
            k++;
    }


    int* output = new int[length];
    for (int i = 0; i < length; i++) {
        output[i] = 0;
    }

    int* count = new int[k];
    for (int i = 0; i < k; i++) {
        count[i] = 0;
    }

    for (int i = 0; i < length; i++) {
        count[int(data[i])]++;
    }

    for (int i = 1; i < k; i++) {
        count[i] += count[i - 1];
    }

    for (int i = length - 1; i >= 0; i--)
    {
        output[count[int(data[i])] - 1] = data[i];
        count[int(data[i])]--;
    }

    for (int i = 0; i < length; i++) {
        data[i] = output[i];
    }
}

void Sorts<double>::digitalSortDouble() {
    double max = data[0];
    for (int i = 1; i < length; i++) {
        if (data[i] > max) {
            max = data[i];
        }
    }

    for (int exp = 1; max / exp > 0; exp *= 10) {
        int* output = new int[length];
        int i, count[10] = { 0 };

        for (i = 0; i < length; i++)
            count[int(data[i] / exp) % 10]++;

        for (i = 1; i < 10; i++)
            count[i] += count[i - 1];

        for (i = length - 1; i >= 0; i--)
        {
            output[count[int(data[i] / exp) % 10] - 1] = data[i];
            count[int(data[i] / exp) % 10]--;
        }

        for (i = 0; i < length; i++)
            data[i] = output[i];
    }
}

// For char

void Sorts<char>::bubleSortChar() {
    char tmp;
    for (int i = 0; i < this->length - 1; i++) {
        for (int j = 0; j < length - i - 1; j++) {
            if (data[j] > data[j + 1]) {
                tmp = data[j];
                data[j] = data[j + 1];
                data[j + 1] = tmp;
            }
        }
    }
}

void Sorts<char>::selectionSortChar() {
    int min;
    char temp;
    for (int i = 0; i < length - 1; i++)
    {
        min = i;
        for (int j = i + 1; j < length; j++)
        {
            if (data[min] > data[j])
            {
                min = j;
            }
        }
        temp = data[i];
        data[i] = data[min];
        data[min] = temp;
    }
}

void Sorts<char>::insertionSortChar() {
    int j;
    char key;
    for (int i = 1; i < length; i++)
    {
        key = data[i];
        j = i - 1;
        while (j >= 0 && data[j] > key)
        {
            data[j + 1] = data[j];
            j = j - 1;
        }
        data[j + 1] = key;
    }
}

void Sorts<char>::countingSortChar() {
    int k = 0, k1 = 0;
    for (int i = 0; i < length; i++)
    {

        for (int i1 = 0; i1 < length; i1++)
        {
            if (data[i] == data[i1])
            {
                k1++;
            }
        }
        if (k1 == 1)
            k++;
    }


    int* output = new int[length];
    for (int i = 0; i < length; i++) {
        output[i] = 0;
    }

    int* count = new int[k];
    for (int i = 0; i < k; i++) {
        count[i] = 0;
    }

    for (int i = 0; i < length; i++) {
        count[data[i]]++;
    }

    for (int i = 1; i < k; i++) {
        count[i] += count[i - 1];
    }

    for (int i = length - 1; i >= 0; i--)
    {
        output[count[data[i]] - 1] = data[i];
        count[data[i]]--;
    }

    for (int i = 0; i < length; i++) {
        data[i] = output[i];
    }
}

void Sorts<char>::digitalSortChar() {
    char max = data[0];
    for (int i = 1; i < length; i++) {
        if (data[i] > max) {
            max = data[i];
        }
    }

    for (int exp = 1; max / exp > 0; exp *= 10) {
        int* output = new int[length];
        int i, count[10] = { 0 };

        for (i = 0; i < length; i++)
            count[(data[i] / exp) % 10]++;

        for (i = 1; i < 10; i++)
            count[i] += count[i - 1];

        for (i = length - 1; i >= 0; i--)
        {
            output[count[(data[i] / exp) % 10] - 1] = data[i];
            count[(data[i] / exp) % 10]--;
        }

        for (i = 0; i < length; i++)
            data[i] = output[i];
    }
}

// For string

void Sorts<std::string>::bubleSortString() {
    std::string tmp;
    for (int i = 0; i < this->length - 1; i++) {
        for (int j = 0; j < length - i - 1; j++) {
            if (data[j] > data[j + 1]) {
                tmp = data[j];
                data[j] = data[j + 1];
                data[j + 1] = tmp;
            }
        }
    }
}

void Sorts<std::string>::selectionSortString() {
    int min;
    std::string temp;
    for (int i = 0; i < length - 1; i++)
    {
        min = i;
        for (int j = i + 1; j < length; j++)
        {
            if (data[min] > data[j])
            {
                min = j;
            }
        }
        temp = data[i];
        data[i] = data[min];
        data[min] = temp;
    }
}

void Sorts<std::string>::insertionSortString() {
    int j;
    std::string key;
    for (int i = 1; i < length; i++)
    {
        key = data[i];
        j = i - 1;
        while (j >= 0 && data[j] > key)
        {
            data[j + 1] = data[j];
            j = j - 1;
        }
        data[j + 1] = key;
    }
}

void Sorts<std::string>::countingSortString() {
    int k = 0, k1 = 0;
    for (int i = 0; i < length; i++)
    {

        for (int i1 = 0; i1 < length; i1++)
        {
            if (data[i] == data[i1])
            {
                k1++;
            }
        }
        if (k1 == 1)
            k++;
    }


    int* output = new int[length];
    for (int i = 0; i < length; i++) {
        output[i] = 0;
    }

    int* count = new int[k];
    for (int i = 0; i < k; i++) {
        count[i] = 0;
    }

    for (int i = 0; i < length; i++) {
        count[data[i][0]]++;
    }

    for (int i = 1; i < k; i++) {
        count[i] += count[i - 1];
    }

    for (int i = length - 1; i >= 0; i--)
    {
        output[count[data[i][0]] - 1] = data[i][0];
        count[data[i][0]]--;
    }

    for (int i = 0; i < length; i++) {
        data[i] = output[i];
    }
}

void Sorts<std::string>::digitalSortString() {
    std::string max;
    for (int i = 0; i < length; i++) {
        if (data[i] > max) {
            max = data[i];
        }
    }

    for (int exp = 1; max[0] / exp > 0; exp *= 10) {
        int* output = new int[length];
        int i, count[10] = { 0 };

        for (i = 0; i < length; i++)
            count[(data[i][0] / exp) % 10]++;

        for (i = 1; i < 10; i++)
            count[i] += count[i - 1];

        for (i = length - 1; i >= 0; i--)
        {
            output[count[(data[i][0] / exp) % 10] - 1] = data[i][0];
            count[(data[i][0] / exp) % 10]--;
        }

        for (i = 0; i < length; i++)
            data[i] = output[i];
    }
}

void Sorts<int>::info() {
    for (int i = 0; i < length; i++) {
        std::cout << data[i] << " ";
    }
    std::cout << std::endl;
}