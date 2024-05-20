
#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Write your function here
int fibonacci(int num) 
{ 
    if (num <= 1) {
        return num; }
    return fibonacci(num - 1) + fibonacci(num - 2); 
} 
  
int main() 
{ 
    
    cout << fibonacci(7)<<endl; 
    cout << fibonacci(12)<< endl;
    return 0; 
} 
