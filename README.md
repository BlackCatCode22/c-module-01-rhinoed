[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-22041afd0340ce965d47ae6ef1cefeee28c7c493a6346c4f15d667ab976d596c.svg)](https://classroom.github.com/a/QDO2JWBZ)

# tCppModule01Spr25

tCppModule01Spr25

Create five projects in your IDE (CLion, or VS Code) that do the following and commit your source code for all of your projects to your remote repo created with GitHub Classroom.

1. [Hello World](hello_world) - [helloWorld.cpp](hello_world/helloWorld.cpp)

    <details>
    <summary>helloWorld source</summary>

    ```c++
    #include <iostream>

    int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
    }

    ```

    </details>
2. [Get an int from the user and double it](double_int) - [doubleInt.cpp](double_int/doubleInt.cpp)

    <details>
    <summary>doubleInt source</summary>

    ```c++
    #include <iostream>

    int main() {
        int num;
        // prompt for number
        std::cout << "Enter a nuber to double:" << std::endl;
        // read input
        std::cin >> num;
        // send num * 2 to standard out
        std::cout << "Your number doubled is: " << 2 * num << std::endl;
        return 0;
    }
    ```
    </details>



3. [Get an int from the user and triple it](triple_int) - [tripleInt.cpp](triple_int/tripleInt.cpp)

    <details>
    <summary>tripleInt source</summary>

    ```c++
    #include <iostream>

    int main() {
        int num;
        // prompt for number
        std::cout << "Enter a nuber to triple:" << std::endl;
        // read input
        std::cin >> num;
        // send num * 2 to standard out
        std::cout << "Your number tripled is: " << 3 * num << std::endl;
        return 0;
    }
    ```
    </details>



4. [Get two ints from the user and sum them](sum_two_ints) - [sumTwoInts.cpp](sum_two_ints/sumTwoInts.cpp)

    <details>
    <summary>sumTwoInts source</summary>

    ```c++
    #include <iostream>

    int main() {
        // create variables
        int num1;
        int num2;
        // prompt for input
        std::cout << "Enter first number:" << std::endl;
        // read from standard in set num1
        std::cin >> num1;
        // prompt for second input
        std::cout << "Enter second number:" << std::endl;
        // read from standard in set num 2
        std::cin >> num2;
        // output sum
        std::cout << "The sum of the numbers is: " << num1 + num2 << std::endl;

        return 0;
    }
    ```
    </details>



5. [Get the user's name and create a friendly greeting to the user](simple_greeting) - [simpleGreeting.cpp](simple_greeting/simpleGreeting.cpp)

    <details>
    <summary>simpleGreeting source</summary>

    ```c++

    #include <iostream>
    #include <string>
    using namespace std;

    int main() {
        // create character array
        string name;
        // create salutation
        const string salutation = "Hello";
        // prompt for name
        cout << "What is your name?:" << endl;
        // read standard in and set name
        cin >> name;
        // crate greeting
        const string greeting = salutation + " " + name + ", " + "welcome to the world of C++";
        // output to standard out
        cout << greeting << endl;
        return 0;
    }

    ```
    </details>

Commit all your source code to your GitHub Classroom repo as soon as you complete each small program.
