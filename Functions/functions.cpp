// This program uses five custom functions to perform various tasks.
#include <iostream>
using namespace std;
#include <string>

// Function prototypes
string reverseString(string input);
int countWords(string sentence);
bool isAPalindrome(int number);
double calculateAverage(int arr[], int size);
double celsiusToFahrenheit(double celsius);

int main()
{
    // Collect input and call functions
    string userInput;
    cout << "Please enter a string to reverse: ";
    getline(cin, userInput);
    string reversed = reverseString(userInput);
    cout << "Reversed string: " << reversed << endl;

    cout << "Please enter a sentence to count words: ";
    getline(cin, userInput);
    int wordCount = countWords(userInput);
    cout << "Word count: " << wordCount << endl;

    int number;
    cout << "Please enter a number to check if it's a palindrome: ";
    cin >> number;
    bool palindromeCheck = isAPalindrome(number);
    if (palindromeCheck) 
    {
        cout << number << " is a palindrome." << endl;
    } 
    else 
    {
        cout << number << " is not a palindrome." << endl;
    }

    int arrSize;
    cout << "Please enter the size of the array: ";
    cin >> arrSize;
    int* arr = new int[arrSize];
    cout << "Please enter " << arrSize << " integers: ";
    for (int i = 0; i < arrSize; i++) 
    {
        cin >> arr[i];
    }
    double average = calculateAverage(arr, arrSize);
    cout << "Average: " << average << endl;

    double celsius;
    cout << "Please enter temperature in Celsius: ";
    cin >> celsius;
    double fahrenheit = celsiusToFahrenheit(celsius);
    cout << "The temperature in Fahrenheit is: " << fahrenheit << endl;
    
    return 0;
}

// Function definitions
string reverseString(string input) 
{
    string reversed = "";
    for (int i = input.length() - 1; i >= 0; i--) 
    {
        reversed += input[i];
    }
    return reversed;
}

int countWords(string sentence) 
{
    int count = 0;
    bool inWord = false;
    for (size_t i = 0; i < sentence.length(); i++) 
    {
        char c = sentence[i];
        // Check if the character is a space
        if (isspace(c)) 
        {
            if (inWord) 
            {
                count++;
                inWord = false;
            }
        } 
        else 
        {
            inWord = true;
        }
    }
    if (inWord) count++; // Count the last word if there is one
    return count;
}

bool isAPalindrome(int number) 
{
    int original = number;
    int reversed = 0;
    while (number > 0) 
    {
        reversed = reversed * 10 + number % 10;
        number /= 10;
    }
    return original == reversed;
}

double calculateAverage(int arr[], int size) 
{
    if (size == 0) return 0.0; // Avoid dividing by zero
    double sum = 0.0;
    for (int i = 0; i < size; i++) 
    {
        sum += arr[i];
    }
    return sum / size;
}

double celsiusToFahrenheit(double celsius) 
{
    return (celsius * 9.0 / 5.0) + 32.0;
}