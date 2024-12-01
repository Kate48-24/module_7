#include <iostream>
#include "IntArray.h"
using namespace std;

int main()
{
    // Declare an array with 10 elements
    try
    {
        IntArray array(10);

        // Fill the array with numbers 1 through 10
        for (int i{ 0 }; i < 10; ++i)
            array[i] = i + 1;

        // Resize the array to 8 elements
        array.resize(8);

        try
        {   // Insert the number 20 before element with index 5
            array.insertBefore(20, 5);
        }
        catch (Bad_range&e)
        {
           cout << e.what();
        }

        // Remove the element with index 3
        try
        {
            array.remove(3);
        }
        catch (Bad_range& e)
        {
            cout << e.what();
        }

        // Add 30 and 40 to the end and beginning
        array.insertAtEnd(30);
        array.insertAtBeginning(40);

        // A few more tests to ensure copy constructing / assigning arrays
        // doesn't break things
        {
            IntArray b{ array };
            b = array;
            b = b;
            array = array;
        }

        // Print out all the numbers
        for (int i{ 0 }; i < array.getLength(); ++i)
            std::cout << array[i] << ' ';

        std::cout << '\n';

    }
    catch (Bad_lenght& e)
    {
        cout << e.what();
    }

    return 0;
}