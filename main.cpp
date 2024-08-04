#include <iostream>

int main(){

    int number, i;
    int array[100];
    int minValue = 0;
    int maxValue = 0;

    std::cout << " ";
    std::cout << "\nEnter the value of numbers(min 3 numbers):  ";
    std::cin >> number;

    std::cout << "\nEnter " << number << " values:  ";

    for (i = 0; i < number; i++){
        std::cin >> array[i];
    }
    minValue = array[0];
    maxValue = array[0];

    for(i = 1; i < number; i++){

        if(array[i] < minValue){
            minValue = array[i];
        }
        if(array[i] > maxValue){
            maxValue = array[i];
        }
    }
    std::cout << "\nMaximum Value is: " << maxValue;
    std::cout << "\nMinimum Value is: " << minValue;

    return 0;
}