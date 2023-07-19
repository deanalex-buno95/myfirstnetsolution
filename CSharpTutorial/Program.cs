// See https://aka.ms/new-console-template for more information

using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using CSharpTutorialPrograms;


namespace CSharpTutorialPrograms
{
    public class BasicCalculator
    {
        public void doConversions()
        {
            /* Issues */
            // Console.WriteLine("43" + "56")  // Concatenation.
            // int num = "45"  // Wrong data type.
            /* Conversion */
            int num = Convert.ToInt32("45");
        }
        public void runBasicCalculator()
        {
            /* Prompts */
            Console.Write("Enter a number: ");
            double num1 = Convert.ToDouble(Console.ReadLine());
            Console.Write("Enter a number: ");
            double num2 = Convert.ToDouble(Console.ReadLine());
            /* Print sum */
            Console.WriteLine(num1 + num2);
        }
    }

    public class MadLibsGame
    {
        public void runMadLibsGame()
        {
            /* Declare variables */
            string color, pluralNoun, celebrity;
            
            /* Prompts */
            Console.Write("Enter a color: ");
            color = Console.ReadLine().ToUpper();
            Console.Write("Enter a plural noun: ");
            pluralNoun = Console.ReadLine().ToUpper();
            Console.Write("Enter a celebrity: ");
            celebrity = Console.ReadLine().ToUpper();
            
            /* Use interpolated strings */
            Console.WriteLine($"Roses are {color}.");
            Console.WriteLine($"{pluralNoun} are blue.");
            Console.WriteLine($"I love {celebrity}.");
            Console.WriteLine("And so do you.");
        }
    }

    public class BetterCalculator
    {
        public void RunBetterCalculator()
        {
            /* Variables */
            double num1, num2;
            string op;
            
            /* Prompts */
            Console.Write("Enter a number: ");
            num1 = Convert.ToDouble(Console.ReadLine());
            Console.Write("Enter an operator: ");
            op = Console.ReadLine();
            Console.Write("Enter another number: ");
            num2 = Convert.ToDouble(Console.ReadLine());
            
            /* Conditionals */
            if (op == "+")
            {
                Console.WriteLine($"{num1} + {num2} = {num1 + num2}");
            }
            else if (op == "-")
            {
                Console.WriteLine($"{num1} - {num2} = {num1 - num2}");
            }
            else if (op == "*")
            {
                Console.WriteLine($"{num1} * {num2} = {num1 * num2}");
            }
            else if (op == "/")
            {
                Console.WriteLine($"{num1} / {num2} = {num1 / num2}");
            }
            else
            {
                Console.WriteLine("Invalid operator!");
            }
        }
    }

    public class GuessingGame
    {
        public void RunGuessingGame()
        {
            /* Variables */
            const string secretWord = "DRAGON";  // Secret word.
            const int maxGuesses = 3;  // Max number of guesses.
            string guess = "";  // Guess.
            int numberOfGuesses = 0;  // Number of guesses.
            /* While loop */
            while (guess != secretWord && numberOfGuesses < maxGuesses)  // Continue looping till the correct guess, or run out of guesses.
            {
                Console.Write("Enter guess: ");
                guess = Console.ReadLine().ToUpper();
                numberOfGuesses++;
            }
            /* Win or lose. */
            if (guess == secretWord)  // Win
            {
                Console.WriteLine("You win!");
            }
            else  // Lose
            {
                Console.WriteLine("Better luck next time!");
            }
        }
    }
}


namespace CSharpTutorial
{
    class MainProgram
    {
        static void Main(string[] args)
        {
            /* Lesson 01 (Hello World + Draw A Shape) */
            Console.WriteLine("* Lesson 01 (Hello World And Draw A Shape) *");
            // (Hello World) Print line to console.
            Console.WriteLine("Hello World!");
            // (Draw A Shape) Lines printed starts from top to bottom.
            Console.WriteLine("00100");
            Console.WriteLine("01110");
            Console.WriteLine("11111");
            
            Console.WriteLine();
            
            /* Lesson 02 (Variables) */
            Console.WriteLine("* Lesson 02 (Variables) *");
            // (Variables - Manual Editing) Manual editing of outputs are possible, but inefficient, especially for larger stories.
            Console.WriteLine("There is a man named _Kiryu/Yagami_.");  // Inputs between underscores can be changed manually.
            Console.WriteLine("He is currently _55/40_ years old.");
            Console.WriteLine("He currently glows a/an _red/blue_ aura.");
            // (Variables - Container) Contain data values.
            string character = "Kiryu";  // String variable.
            int characterAge = 55;  // Integer variable.
            string characterAura;  // Alternative way of initializing variables.
            characterAura = "red";
            // (Variables - Editing With Variables) With variables, editing is more efficient.
            Console.WriteLine("There is a man named " + character + ".");
            Console.WriteLine("He is currently " + characterAge + " years old.");
            Console.WriteLine("He currently glows a/an " + characterAura + " aura.");
            // (Variables - Update variables) The variables can be updated.
            character = "Yagami";
            characterAge = 40;
            characterAura = "blue";
            // (Variables - Editing With Updated Variables) With updated variables, the values have changed.
            Console.WriteLine("There is a man named " + character + ".");
            Console.WriteLine("He is currently " + characterAge + " years old.");
            Console.WriteLine("He currently glows a/an " + characterAura + " aura.");
            
            Console.WriteLine();
            
            /* Lesson 03 (Data Types + Strings + Numbers) */
            Console.WriteLine("* Lesson 03 (Data Types + Strings + Numbers) *");
            // (Data Types) Store different types of data.
            string phrase = "You either die a hero, or live long enough to see yourself become a villain!";  // String, multi-length text.
            char grade = 'A';  // Character, length of 1 as opposed to multi-length with Strings.
            int age = 21;  // Integer, no need quotation marks, including all types of numbers, can handle negative numbers.
            decimal debt = -3000.0m;  // Decimal, most precise non-integer number.
            float height = 1.7f;  // Float, most energy-saving non-integer number.
            double gpa = 6.42;  // Double, most used non-integer number, between decimal and float.
            bool hasPassed = true;  // Boolean, only two values for yes (true) or no (false).
            Console.WriteLine("Passing status: " + hasPassed + ".");
            // (Strings) Deal with strings.
            Console.WriteLine("Hello John!");  // Standard.
            Console.WriteLine("Line1\nLine2");  // End line.
            Console.WriteLine("\"It\'s Time!\"");  // Special characters.
            Console.WriteLine(phrase);  // Using variables.
            Console.WriteLine("Listen here! " + phrase);  // Concatenation.
            Console.WriteLine("Length of phrase: " + phrase.Length + ".");  // Length of String.
            Console.WriteLine(phrase.ToUpper());  // Letter casing (another example being `.lower()`).
            Console.WriteLine(phrase.ToLower().Contains("villain"));  // Check if a string contains a substring.
            Console.WriteLine(phrase.ToUpper().Contains("villain"));
            Console.WriteLine(phrase[0]);  // Print character of an index (index within brackets).
            Console.WriteLine(phrase.IndexOf("villain"));  // Print position of string and character (return -1 if not found).
            Console.WriteLine(phrase.IndexOf(grade));
            Console.WriteLine(phrase.Substring(68));  // Print out a substring from a string from a starting point (include length if needed).
            Console.WriteLine(phrase.Substring(68, 7));
            // (Numbers) Deal with numbers.
            Console.WriteLine(50);  // Standard.
            Console.WriteLine(13 % 8);  // Math calculations (+, -, *, /, %, etc.).
            Console.WriteLine(4 + 2 * 3);  // B.O.D.M.A.S (order of operation).
            Console.WriteLine(age);  // Print variable value.
            age++;  // Increment.
            Console.WriteLine(age);
            age--;  // Decrement.
            Console.WriteLine(age);  // Print quotient from division (only return Integer).
            Console.WriteLine(gpa / 2.0);  // Print value from true division (returns a non-Integer).
            Console.WriteLine(Math.Abs(debt));  // Print absolute value.
            Console.WriteLine(Math.Pow(2, 3));  // Print power.
            Console.WriteLine(Math.Sqrt(25));  // Print square root.
            Console.WriteLine(Math.Max(height, 1.6f));  // Print maximum or minimum of two numbers.
            Console.WriteLine(Math.Min(height, 1.8f));
            Console.WriteLine(Math.Round(4.5));  // Print nearest whole number.
            
            Console.WriteLine();
            
            /* Lesson 04 (Get User Input) */
            Console.WriteLine("* Lesson 04 (Get User Input) *");
            // (Get User Input) Prompt user for information.
            Console.Write("Enter your name: ");  // Prompt.
            string name = Console.ReadLine();  // Pause and input.
            Console.WriteLine("Hello " + name + "!");  // Print input.
            Console.Write("Enter your age: ");  // Another input.
            string ageString = Console.ReadLine();
            try
            {
                int ageInteger = Int32.Parse(ageString);
                Console.WriteLine("You are " + ageInteger + " years old!");
            }
            catch (FormatException)
            {
                Console.WriteLine("Invalid age value!");
            }
            
            Console.WriteLine();
            
            /* Lesson 05 (Basic Calculator) */
            Console.WriteLine("* Lesson 05 (Basic Calculator) *");
            BasicCalculator basicCalculator = new BasicCalculator();
            // (Basic Calculator - Conversions) Convert text to integers.
            basicCalculator.doConversions();
            // (Basic Calculator - Run) Run calculator.
            basicCalculator.runBasicCalculator();
            
            Console.WriteLine();

            /* Lesson 06 (Mad Libs Game) */
            Console.WriteLine("* Lesson 06 (Mad Libs Game) *");
            MadLibsGame madLibsGame = new MadLibsGame();
            // (Mad Libs Game) Run game.
            madLibsGame.runMadLibsGame();
            
            Console.WriteLine();
            
            /* Lesson 07 (Arrays) */
            Console.WriteLine("* Lesson 07 (Arrays) *");
            // (Arrays - Create arrays) Make arrays of a certain data type.
            int[] commonJerseyNumbers = {32, 3 , 8, 43, 4, 18, 99, 42, 23, 5};
            // (Arrays - Access arrays) Get values from arrays.
            Console.WriteLine($"commonJerseyNumbers[0] = {commonJerseyNumbers[0]}");  // First element, until index n-1.
            // (Arrays - Modify arrays) Update values from arrays.
            commonJerseyNumbers[2] = 24;  // Update the third element before printing.
            Console.WriteLine($"commonJerseyNumbers[2] = {commonJerseyNumbers[2]}");
            // (Arrays - Create empty arrays) Make arrays that are empty, then populate by insertion (should have length limit before creation).
            string[] rggCharacters = new string[8];
            rggCharacters[1] = "Takayuki Yagami";
            rggCharacters[7] = "Fumiya Sugiura";
            Console.WriteLine($"rggCharacters[1] = {rggCharacters[1]}");
            Console.WriteLine($"rggCharacters[7] = {rggCharacters[7]}");
            
            Console.WriteLine();
            
            /* Lesson 08 (Arrays) */
            Console.WriteLine("* Lesson 08 (Methods) *");
            // (Methods - SayHi) Method to print out "Hi! User!".
            SayHi();  // Function call.
            SayHelloUser("Jeremy");  // With parameters (can change).
            SayHelloUser("Kevin");
            SayHelloUser("Lawrence");
            PrintGradeAndScore('A', 83);
            PrintGradeAndScore('B', 73);
            PrintGradeAndScore('C', 63);
            PrintGradeAndScore('D', 50);
            PrintGradeAndScore('E', 40);
            PrintGradeAndScore('F', 0);
            
            Console.WriteLine();
            
            /* Lesson 09 (Return Statement) */
            Console.WriteLine("* Lesson 09 (Return Statement) *");
            // (Return Methods - CubeInteger) Method to return an Integer that is cubed.
            Console.WriteLine($"Cube of 9 is {CubeInteger(9)}.");
            // (Return Methods - GetMortgageValue) Method to return a Decimal of a mortgage value of a property.
            Console.WriteLine($"Mortgage value of Boardwalk is ${GetMortgageValue(400.0m)}.");

            Console.WriteLine();
            
            /* Lesson 10 (If Statement) */
            Console.WriteLine("* Lesson 10 (If Statement) *");
            // (If Statement - Boolean Variables) Use a variable for booleans in If Statement.
            bool isProperty = true;  // True.
            if (isProperty)
            {
                Console.WriteLine("(Printed) You wanna buy this property?");  // Print this.
            }
            isProperty = false;  // False.
            if (isProperty)
            {
                Console.WriteLine("(Not printed) You wanna buy this property?");  // Will not print this.
            }
            else
            {
                Console.WriteLine("(Printed) Move on.");  // Print this instead.
            }
            // (If Statement - Combine Conditions) Use either `&&` or `||` to combine conditionals.
            Console.Write("Enter a year: ");
            int year = Convert.ToInt32(Console.ReadLine());
            if (year < 1)
            {
                Console.WriteLine($"{year} is an invalid year!");
            }
            else if ((year % 100 == 0 && year % 400 == 0) || (!(year % 100 == 0) && year % 4 == 0))  // && is AND, and || is OR, !(<expression>) is a a negation of expression.
            {
                Console.WriteLine($"{year} is a leap year!");
            }
            else
            {
                Console.WriteLine($"{year} is a common year!");
            }

            Console.WriteLine();
            
            /* Lesson 11 (Better Calculator) */
            Console.WriteLine("* Lesson 11 (Better Calculator) *");
            BetterCalculator betterCalculator = new BetterCalculator();
            // (Better Calculator - Run) Run calculator.
            betterCalculator.RunBetterCalculator();
            
            Console.WriteLine();
            
            /* Lesson 12 (Switch Statement) */
            Console.WriteLine("* Lesson 12 (Switch Statement) *");
            // (Switch Statement - RGG character) Get the RGG character based on aura color.
            Console.Write("Enter a color: ");
            string auraColor = Console.ReadLine().ToUpper();
            Console.WriteLine($"{auraColor} aura: {GetRggCharacterFromAuraColor(auraColor)}");
            
            Console.WriteLine();
            
            /* Lesson 13 (While Loops) */
            Console.WriteLine("* Lesson 13 (While Loops) *");
            // (While Loops - Traditional) Use traditional while loops, check the condition before executing the code.
            int numberOfSteps = 0;
            Console.Write("Enter a number: ");
            int num = Convert.ToInt32(Console.ReadLine());
            Console.WriteLine($"({num}) Number of steps: {numberOfSteps}");
            while (num > 1)  // 3x + 1 loop, purpose of this condition is to avoid the infinite loop.
            {
                if (num % 2 == 1)  // Odd
                {
                    num = 3 * num + 1;
                }
                else  // Even
                {
                    num /= 2;
                }
                numberOfSteps++;
                Console.WriteLine($"({num}) Number of steps: {numberOfSteps}");
            }
            Console.WriteLine($"It takes {numberOfSteps} steps to reach {num}.");
            // (While Loops - Do) Use do while loops, which will execute the code before checking the condition.
            int x = 4;
            do
            {
                x++;  // Execute code, then check.
            } while (x < 4);
            Console.WriteLine($"x becomes {x}, since it executes the code before the conditional check.");

            Console.WriteLine();

            /* Lesson 14 (Guessing Game) */
            Console.WriteLine("* Lesson 14 (Guessing Game) *");
            // (Guessing Game) Run game.
            GuessingGame guessingGame = new GuessingGame();
            guessingGame.RunGuessingGame();

            /* End Execution */
            // Console.ReadLine();  // Keep console up to see what is in the console before termination (useful for VS Code).
        }

        static void SayHi()
        {
            /* Just print "Hi! User!" */
            Console.WriteLine("Hi! User!");
        }

        static void SayHelloUser(string user)
        {
            /* Print "Hello {user}!", user being a parameter. */
            Console.WriteLine($"Hello {user}!");
        }

        static void PrintGradeAndScore(char grade, int score)
        {
            /* Print grade and score, the two parameters. */
            Console.WriteLine($"Grade: {grade}, Score: {score}");
        }

        static int CubeInteger(int integer)
        {
            /* Integer ^ 3. */
            return integer * integer * integer;
        }

        static decimal GetMortgageValue(decimal propertyValue)
        {
            /* Mortgage is half of the property value. */
            return propertyValue / 2.0m;
        }

        static string GetRggCharacterFromAuraColor(string auraColor)
        {
            /* Pass a value to check each case. */
            switch (auraColor)
            {
                case "RED":
                    return "KAZUMA KIRYU";
                case "BLUE":
                    return "TAKAYUKI YAGAMI";
                case "YELLOW":
                    return "RYUJI GODA";
                case "GREEN":
                    return "TAIGA SAEJIMA";
                case "ORANGE":
                    return "MASAHARU KAITO";
                case "CYAN":
                    return "ICHIBAN KASUGA";
                case "PURPLE":
                    return "GORO MAJIMA";
                case "WHITE":
                    return "FUMIYA SUGIURA";
                default:
                    return "Character not found!";
            }
        }
    }
}