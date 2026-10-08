#include <iostream>

int main()
{
    // Comment like this
    std::cout << "Hello World" << std::endl;

    std::cout << 5 << std::endl;       // print the literal number `5`
    std::cout << -6.7 << std::endl;    // print the literal number `-6.7`
    std::cout << 'H' << std::endl;     // print the literal character `H`
    std::cout << "Hello" << std::endl; // print the literal text `Hello`

    int x {10};
    std::cout << x << std::endl; // print the value of variable `x`

    int a, z; // Multiple variables can be declared in a single statement
    a = 5;

    // Traditional initialization forms:
    int b = 5;     // copy-initialization (initial value after equals sign)
    int c ( 6 );   // direct-initialization (initial value in parenthesis)

    // Modern initialization forms (preferred):
    int d { 7 };   // direct-list-initialization (initial value in braces)
    int e {};      // value-initialization (empty braces), prints 0

    // Get input
    // std::cin >> e;

    /*
    int w1 { 4.5 }; // compile error: list-init does not allow narrowing conversion
    int w2 = 4.5;   // compiles: w2 copy-initialized to value 4
    int w3 (4.5);   // compiles: w3 direct-initialized to value 4
    */

    std::cout << e << std::endl;

    [[maybe_unused]] double pi { 3.14159 };  // Don't complain if pi is unused
    [[maybe_unused]] double gravity { 9.8 }; // Don't complain if gravity is unused
    [[maybe_unused]] double phi { 1.61803 }; // Don't complain if phi is unused

    std::cout << pi << '\n';
    std::cout << phi << '\n';

    // The compiler will no longer warn about gravity not being used

    std::cout << "Hello" << " world!" << std::endl;
    // std::endl; flushes the buffered line to the console

    std::cout << sizeof(int) << '\n'; // print how many bytes of memory an int value takes

    std::cout << "Enter integer: ";
    int willDouble {};
    std::cin >> willDouble;

    std::cout << "Double of that integer is: " << willDouble * 2 << '\n';
    std::cout << "Triple of that integer is: " << willDouble * 3 << '\n';

    int firstNumber {};
    std::cout << "Enter an integer: ";
    std::cin >> firstNumber;

    int secondNumber {};
    std::cout << "Enter another integer: ";
    std::cin >> secondNumber;

    std::cout << firstNumber << " + " << secondNumber << " is " << firstNumber + secondNumber << "." << '\n'; 
    std::cout << firstNumber << " - " << secondNumber << " is " << firstNumber - secondNumber << ".";

    return 0;
}

