#include <iostream>
#include <string>
#include <vector>

using namespace std;
// Write your function here


int main()
{
    vector<int> numbers = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    // Call your function, passing in the numbers vector
    // Write your function call here



    
    // Don't modify the following line
    for (int i = 0; i < numbers.size(); i++)
    {
        if (numbers.size() - i != numbers[i])
        {
            cout << "Incorrect" << endl;
        }
    }
    return 0;
}