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
            
            /* End Execution */
            Console.ReadLine();  // Keep console up to see what is in the console before termination (useful for VS Code)
        }
    }
}