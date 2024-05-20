
#include <iostream>
#include <string>

using namespace std;

string isPrime(int num)
{
    if (num <= 1)
        return  "false";

    // 
    for (int i = 2; i <= num / 2; i++){
       { if (num % i == 0)
            return  "false";
    }
}
    return  "true";
}

int main()
{
    cout << isPrime(2) << endl;  // true
    cout << isPrime(3) << endl;  // true
    cout << isPrime(4) << endl;  // false
    cout << isPrime(5) << endl;  // true
    cout << isPrime(11) << endl; // true
    cout << isPrime(41) << endl; // true
    cout << isPrime(51) << endl; // false
    cout << isPrime(97) << endl; // true
    return 0;
}