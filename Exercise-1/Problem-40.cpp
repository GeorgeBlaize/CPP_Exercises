
//C++ Program to Convert Binary Number to Octal and vice-versa

#include <iostream>
#include <cmath>
using namespace std;

// Function to convert binary to decimal
int binaryToDecimal(int binaryNum) {
    int decimalNum = 0, base = 1;
    while(binaryNum > 0) {
        int lastDigit = binaryNum % 10;
        binaryNum /= 10;
        decimalNum += lastDigit * base;
        base *= 2;
    }
    return decimalNum;
}

// Function to convert decimal to octal
int decimalToOctal(int decimalNum) {
    int octalNum = 0, base = 1;
    while(decimalNum > 0) {
        int lastDigit = decimalNum % 8;
        decimalNum /= 8;
        octalNum += lastDigit * base;
        base *= 10;
    }
    return octalNum;
}

// Function to convert binary to octal
int binaryToOctal(int binaryNum) {
    int decimalNum = binaryToDecimal(binaryNum);
    int octalNum = decimalToOctal(decimalNum);
    return octalNum;
}

// Function to convert octal to binary
int octalToBinary(int octalNum) {
    int decimalNum = 0, base = 1;
    while(octalNum > 0) {
        int lastDigit = octalNum % 10;
        octalNum /= 10;
        decimalNum += lastDigit * base;
        base *= 8;
    }
    int binaryNum = 0, remainder, place = 1;
    while(decimalNum > 0) {
        remainder = decimalNum % 2;
        decimalNum /= 2;
        binaryNum += remainder * place;
        place *= 10;
    }
    return binaryNum;
}

int main()
{
    int choice, num;
    cout << "Enter 1 to convert binary to octal" << endl;
    cout << "Enter 2 to convert octal to binary" << endl;
    cin >> choice;
    if(choice != 1 && choice != 2) {
        cout << "Invalid choice. Please enter 1 or 2." << endl;
        return 0;
    }
    cout << "Enter the number: ";
    cin >> num;
    if(choice == 1) {
        int octalNum = binaryToOctal(num);
        cout << "The octal equivalent of " << num << " is: " << octalNum << endl;
    }
    else {
        int binaryNum = octalToBinary(num);
        cout << "The binary equivalent of " << num << " is: " << binaryNum << endl;
    }
    return 0;
}
