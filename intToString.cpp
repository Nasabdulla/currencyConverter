#include <iostream>
#include <string>

using namespace std;

string intToString(long long num)
{
    
    return to_string(num); 
}

int main()
{
    cout << intToString(123) << endl; // Expected output: "123"
    cout << intToString(-123) << endl; // Expected output: "-123"
    cout << intToString(0) << endl; // Expected output: "0"
    cout << intToString(123456789) << endl; // Expected output: "123456789"

    return 0;
}