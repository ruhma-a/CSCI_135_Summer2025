// This program takes a given Full Name and returns it in uppercase
#include <iostream>
using namespace std;
#include <string>

int main() 
{
    string fullName; // Declares variables to hold the full name 
    cout << "Enter your full name (first and last): ";
    getline(cin, fullName); // Reads the entire name including spaces
    int i=0;
    string firstName; // Declares variable to hold the first name
    while (i < fullName.length() && fullName[i] != ' ')
    {
        firstName += fullName[i]; 
        i++;// Extracts the first name
    }
    i++; // Skips the space
    string lastName; // Declares variable to hold the last name
    while (i < fullName.length()) 
    {
        lastName += fullName[i]; // Extracts the last name
        i++;
    }
    for (char &c : firstName) 
    { 
        if (c >= 'a' && c <= 'z') 
        {
            c = c - 32;
        }
    }
    for (char &c : lastName) 
    { 
        if (c >= 'a' && c <= 'z') 
        {
            c = c - 32;
        }
    }
    cout << "Your name in uppercase is: " << firstName << " " << lastName << endl; // Outputs the modified string
    return 0;
}