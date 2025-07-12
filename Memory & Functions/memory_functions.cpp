#include <iostream>
#include <cctype>
using namespace std;

void squareByPointer(int* n) 
{
    if (n != nullptr) 
    {
        *n = (*n) * (*n);
    }
}

void capitalizeFirst(char* word) 
{
   if (word && islower(word[0])) 
   {
       word[0] = toupper(word[0]);
   }
}

void fillWithSquares(int* arr, int size) 
{

    if (arr && size > 0) 
    {
        for (int i = 0; i < size; i++) 
        {
            arr[i] = i * i;
        }
    }
    
}

int sumArray(const int* arr, int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++) 
    {
        sum += arr[i];
    }
    return sum;
}

void swap(int& a, int& b) 
{
    int temp = a;
    a = b;
    b = temp;
}

int* makeFilledArray(int size, int val) 
{
    int* arr = new int[size];
    for (int i = 0; i < size; i++) 
    {
        arr[i] = val;
    }
    return arr;
}

int* maxPointer(int* a, int* b) 
{
    if (*a > *b) 
    {
        return a;
    } 
    else 
    {
        return b;
    }
}

void reverseArray(int* arr, int size) 
{
    int* start = arr;
    int* end = arr + size - 1;

    while (start < end) 
    {
        int temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}

void printCharArray(const char* arr) 
{
    if (arr != nullptr) 
    {
        while (*arr != '\0') 
        {
            cout << *arr;
            arr++;
        }
        cout << endl;
    }
    
}

void zeroOddIndices(int* arr, int size) 
{
    if (arr != nullptr && size > 0) 
    {
        for (int i = 1; i < size; i += 2) 
        {
            arr[i] = 0;
        }
    }
}

int main() 
{
    int num = 5;
    squareByPointer(&num);
    cout << "Square of 5: " << num << endl;

    char word[] = "hello";
    capitalizeFirst(word);
    cout << "Capitalized: " << word << endl;

    int squares[5];
    fillWithSquares(squares, 5);
    cout << "Squares: ";
    for (int i : squares) cout << i << " ";
    cout << endl;

    cout << "Sum of squares: " << sumArray(squares, 5) << endl;

    int a = 3, b = 7;
    swap(a, b);
    cout << "Swapped: " << a << ", " << b << endl;

    int* filled = makeFilledArray(4, 9);
    cout << "Filled array: ";
    for (int i = 0; i < 4; i++) cout << filled[i] << " ";
    cout << endl;
    delete[] filled;

    int p = 10, q = 20;
    cout << "Max value: " << *maxPointer(&p, &q) << endl;

    int nums[] = {1, 2, 3, 4, 5};
    reverseArray(nums, 5);
    cout << "Reversed: ";
    for (int i : nums) cout << i << " ";
    cout << endl;

    const char* text = "Print this!";
    cout << "Char array: ";
    printCharArray(text);

    int testArr[] = {10, 11, 12, 13, 14, 15};
    zeroOddIndices(testArr, 6);
    cout << "Zero odd indices: ";
    for (int i : testArr) cout << i << " ";
    cout << endl;
    
    return 0;
}
