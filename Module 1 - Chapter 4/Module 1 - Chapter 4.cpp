#include <iostream>

int main()
{
    int anArray[5] = { 234, 5003, 1, -29, 33 };

    int biggestNum = anArray[0];
    for (int i = 1; i < 5; i++) {
        if (anArray[i] > biggestNum) {
            biggestNum = anArray[i];
        }
    }

    std::cout << "The biggest number in the array is: " << biggestNum;
}

