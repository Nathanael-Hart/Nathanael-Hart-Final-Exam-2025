/*
 * CS101 Final Exam - File 1: sort_array.cpp
 * The Logic Test: Sorting an Array
 *
 * Student Name: Nathanael Hart
 * Date: 12/18/2025
 *
 #include <iostream>      
using namespace std;     

int main()
{
    // This array holds 100 unordered numbers, indexed from 0-99
    int numbers[100] = {
        63, 12, 89, 45, 23, 78, 34, 91, 56, 7,
        82, 29, 67, 14, 95, 41, 18, 73, 50, 36,
        98, 5, 61, 27, 84, 48, 10, 75, 32, 69,
        21, 58, 93, 15, 80, 44, 3, 70, 37, 96,
        52, 19, 86, 31, 65, 9, 77, 42, 24, 88,
        54, 1, 71, 39, 94, 25, 81, 47, 13, 68,
        35, 99, 59, 22, 85, 46, 11, 74, 30, 97,
        51, 6, 72, 38, 92, 26, 83, 49, 16, 66,
        33, 100, 57, 20, 87, 43, 8, 76, 40, 62,
        28, 90, 55, 17, 79, 4, 64, 2, 53, 60
    };

    // Lets the user know this is the unsorted array
    cout << "Array before sorting:" << endl;

    // Print only the first 20 values to show the unsorted array
    for (int i = 0; i < 20; i++)
    {
        cout << numbers[i] << " ";
    }
    cout << endl;  

    // This variable is used as a temporary placeholder, to manipulate elements in the array. 
    int temp;

    /* Bubble Sort Begins
     This outer loop controls how many times iterate through the array */
    for (int i = 0; i < 99; i++)
    {
        /* This inner loop compares numbers next to each other
       This subtracts i because the biggest values move to the end each pass through */
        for (int j = 0; j < 99 - i; j++)
        {
            /* If the left number is bigger than the right one,
            then are in the wrong order */
            if (numbers[j] > numbers[j + 1])
            {
                // Save the first number in the temp variable
                temp = numbers[j];

                // Move the smaller number to the left
                numbers[j] = numbers[j + 1];

                // Put the bigger number on the right
                numbers[j + 1] = temp;
            }
        }
    }

    // Telling the user this is the new sorted array, and printing the new array
    cout << "\nArray after sorting:" << endl;
    for (int i = 0; i < 20; i++)
    {
        cout << numbers[i] << " ";
    }
    cout << endl;

    return 0;
}
