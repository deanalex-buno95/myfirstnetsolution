using System.Collections;

namespace CSharpTutorial;

public class RggFightingCharacter : RggCharacter
{
    /* Polymorphism OR Overwriting Class Methods */
    public new static void NotifyUser()
    {
        Console.WriteLine("RGG Fighting Character created.");
    }

    /* Constructor */
    public RggFightingCharacter()
    {
        FightingStyles = new ArrayList();
    }
    public RggFightingCharacter(string lastName, string firstName, DateTime dateOfBirth, string nationality,
        double height, ArrayList fightingStyles): base(lastName, firstName, dateOfBirth, nationality, height)
    {
        FightingStyles = fightingStyles;
    }

    /* Additional Getters And Setters */
    private ArrayList FightingStyles { get; set; }
    
    /* Additional Object Methods */
    public void AddFightingStyles(string newFightingStyle)
    {
        FightingStyles.Add(newFightingStyle);
    }
    
    /* Polymorphism OR Overwriting Object Methods */
    public override string ToString()
    {
        string listOfFightingStyles = "";
        foreach (var fightingStyle in FightingStyles)
        {
            listOfFightingStyles += $"- {fightingStyle}\n";
        }
        return $"Name: {FirstName} {LastName}\nDate Of Birth: {DateOfBirth:yyyy-M-d}\nNationality: {Nationality}\nHeight: {Height}m\nFighting Styles:\n{listOfFightingStyles}\n";
    }
}