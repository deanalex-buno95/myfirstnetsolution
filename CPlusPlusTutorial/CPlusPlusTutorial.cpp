#include <iostream>
#include <cmath>
#include <string>

using namespace std;

void lesson01()
{
    /**
     * Lesson 1: Hello World + Draw A Shape
     */
    cout << "* Lesson 1: Hello World + Draw A Shape *" << endl;
    // (Hello World + Draw A Shape) Hello World.
    cout << "Hello World!" << endl;
    // (Hello World + Draw A Shape) Draw A Shape.
    cout << "   /|" << endl;
    cout << "  / |" << endl;
    cout << " /  |" << endl;
    cout << "/___|" << endl;
}

void lesson02()
{
    /**
     * Lesson 2: Variables + Data Types
     */
    cout << "* Lesson 2: Variables + Data Types *" << endl;
    // (Variables + Data Types) Variables - Manual editing.
    cout << "My name is KIRYU, I am 55 years old." << endl;
    cout << "I have a RED aura, and my name is renamed to JORYU." << endl;
    // (Variables + Data Types) Variables - Create variables and put them in the story, which the values can be updated.
    string character_name = "KIRYU";
    int character_age;
    character_age = 55;
    cout << "My name is " << character_name << ". I am " << character_age << " years old." << endl;
    string character_aura = "RED";
    character_name = "JORYU";
    cout << "I have a " << character_aura << " aura, and my name is renamed to " << character_name << "." << endl;
    // (Variables + Data Types) Data Types - Create different types.
    char grade = 'A';  // Character (Single-length text).
    cout << grade << endl;
    string word = "Santos";  // String (Multi-length text).
    cout << word << endl;
    int age = 21;  // Integer (Non-decimal number).
    cout << age << endl;
    float height = 1.71f;  // Float (More efficient decimal number).
    cout << height << endl;
    double gpa = 6.42;  // Double (More accurate decimal number).
    cout << gpa << endl;
    bool is_male = true;  // Boolean (true or false).
    cout << is_male << endl;
}

void lesson03()
{
    /**
     * Lesson 3: Working With Strings + Numbers
     */
    cout << "* Lesson 3: Working With Strings + Numbers *" << endl;
    // (Working With Strings + Numbers) Working With Strings - Without `endl`.
    cout << "Hello ";
    // (Working With Strings + Numbers) Working With Strings - Using `\n` instead of `endl`.
    string remaining_word = "Earthling";
    cout << remaining_word << "!\n";
    // (Working With Strings + Numbers) Working With Strings - Length.
    cout << remaining_word.length() << endl;
    // (Working With Strings + Numbers) Working With Strings - Access character via indexing.
    cout << remaining_word[1] << endl;
    // (Working With Strings + Numbers) Working With Strings - Replace a character within a string via indexing.
    remaining_word[0] = 'G';
    cout << remaining_word  << endl;
    // (Working With Strings + Numbers) Working With Strings - Find positions of a part of a string from the off index.
    cout << remaining_word.find("ling", 0) << endl;
    // (Working With Strings + Numbers) Working With Strings - Substrings from start index to a certain length.
    cout << remaining_word.substr(0, 5) << endl;
    // (Working With Strings + Numbers) Working With Numbers - Print any number.
    cout << -420.69 << endl;
    // (Working With Strings + Numbers) Working With Numbers - Calculation.
    cout << 5 + 7 << endl;
    cout << 6 - 1 << endl;
    cout << 3 * 9 << endl;
    cout << 24 / 3 << endl;
    cout << 9 % 4 << endl;
    // (Working With Strings + Numbers) Working With Numbers - BODMAS.
    cout << (1 + 8) / 3 << endl;
    // (Working With Strings + Numbers) Working With Numbers - Variables.
    int integer_number = 5;
    cout << integer_number << endl;
    // (Working With Strings + Numbers) Working With Numbers - Increment + Decrement.
    integer_number++;
    cout << integer_number << endl;
    integer_number--;
    integer_number--;
    cout << integer_number << endl;
    // (Working With Strings + Numbers) Working With Numbers - Different types.
    double decimal_number = 14.5;
    cout << decimal_number + integer_number << endl;
    cout << integer_number / 3 << endl;
    cout << static_cast<double>(integer_number) / 3 << endl;
    // (Working With Strings + Numbers) Working With Numbers - Math functions.
    cout << pow(2, 5) << endl;
    cout << pow(3, 4) << endl;
    cout << sqrt(49) << endl;
    cout << sqrt(0.49) << endl;
    cout << round(9.4) << endl;
    cout << round(9.5) << endl;
    cout << ceil(9.4) << endl;
    cout << floor(9.5) << endl;
    cout << fmax(4, 5) << endl;
    cout << fmin(4, 5) << endl;
}

void lesson04()
{
    /**
     * Lesson 4: Getting User Input
     */
    cout << "* Lesson 4: Getting User Input *" << endl;
    // (Getting User Input) Declare variables for input from user.
    string name;
    // (Getting User Input) Prompt user.
    cout << "Enter your name: ";
    // (Getting User Input) User input.
    getline(cin, name);
    // (Getting User Input) Output the user input.
    cout << "Hello " << name << "!" << endl;
    // (Getting User Input) Similar process for any type other than strings.
    int age;
    cout << "Enter your age: ";
    cin >> age;
    cout << "You are " << age << " year(s) old!" << endl;
}

void lesson05()
{
    /**
     * Lesson 5: Basic Calculator
     */
    cout << "* Lesson 5: Basic Calculator *" << endl;
    // (Basic Calculator) Declare variables.
    double num1, num2;
    // (Basic Calculator) Prompt the user for both numerical inputs.
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    cout << num1 << " + " << num2 << " = " << num1 + num2;
}

int main()
{
    /**
     * All lessons.
     */
    lesson01();
    lesson02();
    lesson03();
    lesson04();
    lesson05();
    return 0;
}
