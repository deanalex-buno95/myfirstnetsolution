// See https://aka.ms/new-console-template for more information

using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

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
            
            /* End Execution */
            // Console.ReadLine();  // Keep console up to see what is in the console before termination (useful for VS Code)
        }
    }
}