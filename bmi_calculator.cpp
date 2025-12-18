#include <iostream>
using namespace std;

int main()
{
    // This is declaring variables for weight, height, and BMI, using double so that decimal math is possible
    double weight, height, bmi;

    // This is a greating and explaination of the program
    cout << "Welcome to Nate's BMI Calculator!" << endl;
    cout << "This program will calculate your BMI and classify you appropriately." << endl;
    cout << endl;

    // This is asking for the user's weight in kilograms
    cout << "Please enter your weight in kilograms: ";
    cin >> weight;

    // This is asking for the user's height in meters
    cout << "Please enter your height in meters (Take Tinder height and subtract 6CM for accuracy): " <<endl;
    cin >> height;

    // This is calculating the users BMI
    bmi = weight / (height * height);

    // This is displaying the result
    cout << "\nYour BMI is: " << bmi << endl;

    // This is the BONUS section, giving the user a classification for their BMI (and some color commentary) 
    if (bmi < 18.5)
    {
        cout << "You are classified as UNDERWEIGHT. You must be new to the USA, welcome!" << endl;
    }
    else if (bmi >= 18.5 && bmi < 25)
    {
        cout << "You are classified as NORMAL WEIGHT." << endl;
    }
    else if (bmi >= 25 && bmi < 30)
    {
        cout << "You're not OVERWEIGHT, your just big boned..." << endl;
    }
    else
    {
        cout << "You are classified as OBESE. You have a bright future as a Sumo wrestler!" << endl;
    }

    // This thanks the user!
    cout << "\nThank you for using Nate's BMI Calculator!" << endl;

    return 0;
}


