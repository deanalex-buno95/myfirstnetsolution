#include <iostream>

using namespace std;

void lesson01()
{
    /**
     * Lesson 1: Hello World + Draw A Shape
     */
    cout << "Lesson 1: Hello World + Draw A Shape" << endl;
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
    cout << "Lesson 2: Variables + Data Types" << endl;
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

int main()
{
    /**
     * All lessons.
     */
    lesson01();
    lesson02();
    return 0;
}
