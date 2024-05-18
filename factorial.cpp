
#include <iostream>
#include <string>

using namespace std;

long factorial(int num)
{
    
    if (num <= 1) 
    {
        return 1; }

    return num* factorial(num - 1); 

}

int main()
{
    cout << factorial(0) << endl; // 1
    cout << factorial(1) << endl; // 1
    cout << factorial(3) << endl; // 6
    cout << factorial(5) << endl; // 120
    cout << factorial(10) << endl; // 3628800
    return 0;
}