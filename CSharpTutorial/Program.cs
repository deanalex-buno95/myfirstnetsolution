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
            
            /* End Execution */
            Console.ReadLine();  // Keep console up to see what is in the console before termination (useful for VS Code)
        }
    }
}