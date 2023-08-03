#include <iostream>
#include <cmath>
#include <string>
#include <list>

using namespace std;

/**
 * Functions used.
 */

void print_hello_world()
{
    cout << "Hello World!" << endl;
}

void print_hello_user(string name, int age)
{
    cout << "Hello " << name << "! You are " << age << " year(s) old!" << endl;
}

void can_you_see_me();

double cube_number(double number)
{
    return number * number * number;
}

string get_day_from_int(const int day_integer)
{
    switch (day_integer)
    {
    case 0:
        return "SUNDAY";
    case 1:
        return "MONDAY";
    case 2:
        return "TUESDAY";
    case 3:
        return "WEDNESDAY";
    case 4:
        return "THURSDAY";
    case 5:
        return "SATURDAY";
    case 6:
        return "SUNDAY";    
    default:
        return "N.A.";
    }
}

int power_integer(int base_int, int exponent_int)
{
    int result_int = 1;
    for (int i = 0; i < exponent_int; ++i)
    {
        result_int *= base_int;
    }
    return result_int;
}

class rgg_character
{
    string name_;
    string nationality_;
    public:
        rgg_character()
        {
            name_ = "Unknown";
            nationality_ = "Unknown";
        }
        rgg_character(const string& name, const string& nationality)
        {
            name_ = name;
            nationality_ = nationality;
        }
        string get_name()
        {
            return name_;
        }
        void set_name(const string& name)
        {
            name_ = name;
        }
        string get_nationality()
        {
            return nationality_;
        }
        void set_nationality(const string& nationality)
        {
            nationality_ = nationality;
        }
        void print()
        {
            cout << "Name: " << get_name() << endl;
            cout << "Nationality: " << get_nationality() << endl;
        }
};

class rgg_fighting_character : public rgg_character
{
    list<string> fighting_styles_;

    list<string> get_fighting_styles()
    {
        return fighting_styles_;
    }
    
    public:
        rgg_fighting_character() = default;

        rgg_fighting_character(const string& name, const string& nationality, const list<string>& fighting_styles) : rgg_character(name, nationality)
        {
            fighting_styles_ = fighting_styles;
        }
    
        string get_fighting_styles(const int style_number)
        {
            if (fighting_styles_.empty())
            {
                return "No styles found";
            }
            if (style_number < 1 || style_number > fighting_styles_.size())
            {
                return "N/A";
            }
            auto it = fighting_styles_.begin();
            advance(it, style_number-1);
            return *it;
        }

        void print()
        {
            cout << "Name: " << get_name() << endl;
            cout << "Nationality: " << get_nationality() << endl;
            cout << "Fighting styles: " << endl;
            for (const auto& fighting_style : get_fighting_styles())
            {
                cout << "- " << fighting_style << endl;
            }
        }
};

/*
 * All lessons.
 */

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
    // (Arrays - Standard array definition) Create a standard array with variables.
    char grades[] = {'S', 'A', 'B', 'C', 'D', 'E', 'F', 'L'};
    // (Arrays - Access elements) Access an element based on index from 0 to length of array - 1.
    char merit_grade = grades[2];
    char highest_fail_grade = grades[4];
    cout << "Merit grade: " << merit_grade << endl;
    cout << "Highest fail grade: " << highest_fail_grade << endl;
    // (Arrays - Modify elements) Change the value of an element based on index from 0 to length of array - 1.
    grades[7] = 'X';
    char cheat_grade = grades[7];
    cout << "Cheat grade: " << cheat_grade << endl;
    // (Arrays - Alternative array definition) Create an empty array.
    string character_names[8];
    character_names[0] = "Kazuma Kiryu";
    character_names[6] = "Goro Majima";
    cout << "Character number 1 (index 0): " << character_names[0] << endl;
    cout << "Character number 7 (index 6): " << character_names[6] << endl;
}

void lesson08()
{
    /**
     * Lesson 8: Functions + Return Statements
     */
    cout << "* Lesson 8: Functions + Return Statements *" << endl;
    // (Functions + Return Statements - Simple function) Write function, with or without parameters, and call it out.
    print_hello_world();
    print_hello_user("JOHNATHAN IRONS", 64);
    print_hello_user("TONY STARK", 58);
    // (Functions + Return Statements - Function stub) Declare the function signature before it can be placed below of where it is called.
    can_you_see_me();
    // (Functions + Return Statements - Return) Store output of functions. Note that any step after return will not be run.
    cout << "Cube of 3: " << cube_number(3.0) << endl;
    double cube_of_10 = cube_number(10.0);
    cout << "Cube of 10: " << cube_of_10 << endl;
}

void lesson09()
{
    /**
     * Lesson 9: If Statement
     */
    cout << "* Lesson 9: If Statements *" << endl;
    // (If Statements) Create if-else or if-elif-else statements.
    int years[] = {2000, 1944, 1800, 1765};
    for (auto year : years)
    {
        if ((year % 100 == 0 && year % 400 == 0) || (!(year % 100 == 0) && year % 4 == 0))
        {
            cout << year << " is a leap year!" << endl;
        }
        else
        {
            cout << year << " is a common year!" << endl;
        }
    }
    double bmis[] = {25.0, 18.0, 21.0};
    for (auto bmi : bmis)
    {
        if (bmi > 24.9)
        {
            cout << bmi << " You are OVERWEIGHT!" << endl;
        }
        else if (bmi < 18.5)
        {
            cout << bmi << " You are UNDERWEIGHT!" << endl;
        }
        else
        {
            cout << bmi << " You are HEALTHY!" << endl;
        }
    }
}

void lesson10()
{
    /**
     * Lesson 10: Better Calculator (Mini-project 1B)
     */
    cout << "* Lesson 10: Better Calculator (Mini-project 1B) *" << endl;
    // (Better Calculator) Declare variables.
    double num1, num2;
    char op;
    // (Better Calculator) Prompt the user for inputs.
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter operator: ";
    cin >> op;
    cout << "Enter second number: ";
    cin >> num2;
    // (Better Calculator) Calculate both numbers together, with the operator via if-elif-else.
    if (op == '+')
    {
        cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
    }
    else if (op == '-')
    {
        cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
    }
    else if (op == '*')
    {
        cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
    }
    else if (op == '/')
    {
        cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
    }
    else
    {
        cout << "Invalid operator!" << endl;
    }
}

void lesson11()
{
    /**
     * Lesson 11: Switch Statements
     */
    cout << "* Lesson 11: Switch Statements *" << endl;
    // (Switch Statements) Take an integer and put it into a switch statement to get the day.
    for (int i = -1; i <= 7; ++i)
    {
        cout << "Day " << i << ": " << get_day_from_int(i) << endl;
    }
}

void lesson12()
{
    /**
     * Lesson 12: While Loops
     */
    cout << "* Lesson 12: While Loops *" << endl;
    // (While Loops - Standard) Create a standard while loop, which checks the condition before running a step.
    int user_number;
    cout << "Enter a number: ";
    cin >> user_number;
    int number_of_steps = 0;
    while (user_number > 1)
    {
        if (user_number % 2 == 1)
        {
            user_number = 3 * user_number + 1;
        }
        else
        {
            user_number /= 2;
        }
        number_of_steps++;
    }
    cout << "Number of steps to reach " << user_number << ": " << number_of_steps << endl;
    // (While Loops - Do) Create a do-while loop, which runs a step before checking the condition.
    int x = 0;
    do
    {
        x++;
    }
    while (x < 5);
    cout << "x = " << x << " when it exits the loop." << endl;
}

void lesson13()
{
    /**
     * Lesson 13: Guessing Game (Mini Project 3)
     */
    cout << "* Lesson 13: Guessing Game (Mini Project 3) *" << endl;
    // (Guessing Game - Variables) Initialize variables.
    int constexpr secret_number = 5;
    int number_of_guesses = 3; 
    int guess = -1;
    // (Guessing Game - Game) Start game.
    while (guess != secret_number && number_of_guesses != 0)
    {
        cout << "Enter guess: ";
        cin >> guess;
        number_of_guesses--;
    }
    // (Guessing Game - Results) Display results via if-else.
    if (guess == secret_number)
    {
        cout << "You win!" << endl;
    }
    else
    {
        cout << "Better luck next time!" << endl;
    }
}

void lesson14()
{
    /**
     * Lesson 14: For Loops
     */
    cout << "* Lesson 14: For Loops *" << endl;
    // (For Loops - Standard) Increment index.
    string const rgg_characters[] = {"Kiryu Kazuma", "Yagami Takayuki", "Goda Ryuji", "Saejima Taiga", "Kaito Masaharu", "Kasuga Ichiban", "Majima Goro", "Sugiura Fumiya"};
    cout << "Standard For loop:" << endl;
    for (int i = 0; i < 8; ++i)
    {
        cout << "Character number " << i << ": " << rgg_characters[i] << endl;
    }
    cout << "Reverse For loop:" << endl;
    for (int i = 7; i >= 0; --i)
    {
        cout << "Character number " << i << ": " << rgg_characters[i] << endl;
    }
    cout << "Foreach Loop:" << endl;
    for (const auto& rgg_character : rgg_characters)
    {
        cout << rgg_character << endl;
    }
}

void lesson15()
{
    /**
     * Lesson 15: Exponent Function (Mini Project 4)
     */
    cout << "* Lesson 15: Exponent Function (Mini Project 4) *" << endl;
    // (Exponent Function) Create function using for-loops for powering a base integer by an exponent non-negative integer.
    int const result_5_base_2_exponent = power_integer(5, 2);
    int const result_7_base_3_exponent = power_integer(7, 3);
    cout << "5 ^ 2 = " << result_5_base_2_exponent << endl;
    cout << "7 ^ 3 = " << result_7_base_3_exponent << endl;
}

void lesson16()
{
    /**
     * Lesson 16: 2D Arrays + Nested Loops
     */
    cout << "* Lesson 16: 2D Arrays + Nested Loops *" << endl;
    // (2D Arrays + Nested Loops - 2D Arrays) Make a 2D array, an array filled with arrays.
    string const rgg_character_to_aura_color_array[8][2] = {{"KIRYU", "RED"}, {"YAGAMI", "BLUE"}, {"GODA", "YELLOW"}, {"SAEJIMA", "GREEN"}, {"KAITO", "ORANGE"}, {"KASUGA", "CYAN"}, {"MAJIMA", "PURPLE"}, {"SUGIURA", "WHITE"}};
    cout << "Kiryu\'s aura color: " << rgg_character_to_aura_color_array[0][1] << endl;
    cout << "RGG character with a white aura: " << rgg_character_to_aura_color_array[7][0] << endl;
    // (2D Arrays + Nested Loops - Nested Loops) Use a nested loop to traverse through a 2D array.
    for (int i = 0; i < 8; ++i)
    {
        for (int j = 0; j < 2; ++j)
        {
            if (j == 0)
            {
                cout << "Character at [" << i << "][" << j << "]: " << rgg_character_to_aura_color_array[i][j] << endl;
            }
            else
            {
                cout << "Color at [" << i << "][" << j << "]: " << rgg_character_to_aura_color_array[i][j] << endl;
            }
        }
    }
}

void lesson17()
{
    /**
     * Lesson 17: Pointers
     */
    cout << "* Lesson 17: Pointers *" << endl;
    // (Pointers - Variables) Regular values that are stored by the computer that uses RAM.
    constexpr int age = 21;
    constexpr double gpa = 6.42;
    const string name = "Santos";
    // (Pointers - Declaration) Use RAM to store information.
    const int *age_pointer = &age;
    const double *gpa_pointer = &gpa;
    const string *name_pointer = &name;
    cout << "Age pointer: " << age_pointer << endl;
    cout << "GPA pointer: " << gpa_pointer << endl;
    cout << "Name pointer: " << name_pointer << endl;
    // (Pointers - Dereference) Use asterisk to dereference the pointer to get the value.
    cout << "Age: " << *age_pointer << endl;
    cout << "GPA: " << *gpa_pointer << endl;
    cout << "Name: " << *name_pointer << endl;
}

void lesson18()
{
    /**
     * Lesson 18: Classes + Objects
     */
    cout << "* Lesson 18: Classes + Objects *" << endl;
    // (Classes + Objects - Declare object) Create an object with a class, with getters and setters, and methods.
    rgg_character character1;
    character1.set_name("Mack");
    character1.set_nationality("American");
    character1.print();
    // (Classes + Objects - Declare sub-class object) Create an object with a class based on a parent, with overwritten methods via polymorphism.
    rgg_fighting_character character2 = rgg_fighting_character("Kazuma Kiryu", "Japanese", list<string>{"Dragon", "Brawler", "Rush", "Beast", "Yakuza", "Agent"});
    cout << "Red style: " << character2.get_fighting_styles(1) << endl;
    cout << "White style: " << character2.get_fighting_styles(5) << endl;
    character2.print();
}

/*
 * Main program.
 */

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

/**
 * Functions used.
 */

void can_you_see_me()
{
    cout << "YOU FOUND ME!" << endl;
}