#include <iostream> // for std::cout

void doPrint();

int function(int x, int y);

int doubleNumber(int x) {
    return x * 2;
}

int add(int x, int y) // x and y created and initialized here
{
    int z{ x + y };   // z created and initialized here

    return z;
}

// Definition of user-defined function main()
int main()
{
    std::cout << "Starting main()\n";
    doPrint();  
    doPrint();                      // Interrupt main() by making a function call to doPrint().  main() is the caller.
    std::cout << "Ending main()\n";   // This statement is executed after doPrint() ends

    std::cout << "Enter integer: ";
    int x {};
    std::cin >> x;
    std::cout << "Double x is: " << doubleNumber(x) << '\n';

    int localScopeExample {add(7, 4)};
    std::cout << localScopeExample;


    std::cout << function(10, 5);

    return 0;
}

// Definition of user-defined function doPrint()
// doPrint() is the called function in this example
void doPrint()
{
    std::cout << "In doPrint()\n";
}