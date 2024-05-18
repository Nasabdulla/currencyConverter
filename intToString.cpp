#include <iostream>
#include <string>

using namespace std;

string intToString(long long num)
{
    // Write your code here

    
    return to_string(num); // Modify this line to return the string representation of the integer
}

int main()
{
    cout << intToString(123) << endl; // Expected output: "123"
    cout << intToString(-123) << endl; // Expected output: "-123"
    cout << intToString(0) << endl; // Expected output: "0"
    cout << intToString(123456789) << endl; // Expected output: "123456789"

    return 0;
}