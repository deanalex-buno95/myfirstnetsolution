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
     * Lesson 5: Basic Calculator (Mini-project 1A)
     */
    cout << "* Lesson 5: Basic Calculator (Mini-project 1A) *" << endl;
    // (Basic Calculator) Declare variables.
    double num1, num2;
    // (Basic Calculator) Prompt the user for both numerical inputs.
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    // (Basic Calculator) Add both numbers together.
    cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
}

void lesson06()
{
    /**
     * Lesson 6: Mad Libs Game (Mini-project 2)
     */
    cout << "* Lesson 6: Mad Libs Game (Mini-project 2) *" << endl;
    // (Mad Libs Game) Declare variables.
    string color, plural_noun, celebrity;
    // (Mad Libs Game) Prompt the user for three string inputs.
    cout << "Enter color: ";
    getline(cin >> ws, color);  // Make use of >> ws to extract out any whitespace from the stream (ignored by default).
    cout << "Enter plural noun: ";
    getline(cin >> ws, plural_noun);
    cout << "Enter celebrity: ";
    getline(cin >> ws, celebrity);
    // (Mad Libs Game) Output poem.
    cout << "Roses are " << color << "." << endl;
    cout << plural_noun << " are blue." << endl;
    cout << "I love " << celebrity << "." << endl;
}

void lesson07()
{
    /**
     * Lesson 7: Arrays
     */
    cout << "* Lesson 7: Arrays *" << endl;
    // (Arrays) .
}

void lesson08()
{
    /**
     * Lesson 8: Functions + Return Statements
     */
    cout << "* Lesson 8: Functions + Return Statements *" << endl;
    // (Functions + Return Statements) .
}

void lesson09()
{
    /**
     * Lesson 9: If Statement
     */
    cout << "* Lesson 9: If Statements *" << endl;
    // (If Statements) .
}

void lesson10()
{
    /**
     * Lesson 10: Better Calculator (Mini-project 1B)
     */
    cout << "* Lesson 10: Better Calculator (Mini-project 1B) *" << endl;
    // (Better Calculator) .
}

void lesson11()
{
    /**
     * Lesson 11: Switch Statements
     */
    cout << "* Lesson 11: Switch Statements *" << endl;
    // (Switch Statements) .
}

void lesson12()
{
    /**
     * Lesson 12: While Loops
     */
    cout << "* Lesson 12: While Loops *" << endl;
    // (While Loops) .
}

void lesson13()
{
    /**
     * Lesson 13: Guessing Game (Mini Project 3)
     */
    cout << "* Lesson 13: Guessing Game (Mini Project 3) *" << endl;
    // (Guessing Game) .
}

void lesson14()
{
    /**
     * Lesson 14: For Loops
     */
    cout << "* Lesson 14: For Loops *" << endl;
    // (For Loops) .
}

void lesson15()
{
    /**
     * Lesson 15: Exponent Function (Mini Project 4)
     */
    cout << "* Lesson 15: Exponent Function (Mini Project 4) *" << endl;
    // (Exponent Function) .
}

void lesson16()
{
    /**
     * Lesson 16: 2D Arrays + Nested Loops
     */
    cout << "* Lesson 16: 2D Arrays + Nested Loops *" << endl;
    // (2D Arrays + Nested Loops) .
}

void lesson17()
{
    /**
     * Lesson 17: Pointers
     */
    cout << "* Lesson 17: Pointers *" << endl;
    // (Pointers) .
}

void lesson18()
{
    /**
     * Lesson 18: Classes + Objects
     */
    cout << "* Lesson 18: Classes + Objects *" << endl;
    // (Classes + Objects) .
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
    lesson06();
    lesson07();
    lesson08();
    lesson09();
    lesson10();
    lesson11();
    lesson12();
    lesson13();
    lesson14();
    lesson15();
    lesson16();
    lesson17();
    lesson18();
    return 0;
}
