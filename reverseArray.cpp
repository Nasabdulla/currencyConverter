#include <iostream>
#include <string>
#include <vector>

using namespace std;
// Write your function here
void reverse(vector<int>& num) {
    int left = 0;
    int right = num.size() - 1;

    while (left < right) {
        swap(num[left], num[right]);
        ++left;
        --right;
    }
}

int main()
{
    vector<int> numbers = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    // Call your function, passing in the numbers vector
    // Write your function call here

     reverse(numbers);

    
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