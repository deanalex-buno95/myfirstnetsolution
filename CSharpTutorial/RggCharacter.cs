namespace CSharpTutorial;

public class RggCharacter
{
    /* Static attributes */
    public static string CompanyName = "RGG Studios";
    public static int CharacterCount;
    
    /* Static methods */
    public static void NotifyUser()
    {
        Console.WriteLine("RGG Character created.");
    }

    /* Constructors */
    public RggCharacter()
    {
        Console.WriteLine("Empty character created.");
        LastName = "LASTNAME";
        FirstName = "FIRSTNAME";
        DateOfBirth = new DateTime();
        Nationality = "NATIONALITY";
        Height = 0;
        CharacterCount++;
    }
    public RggCharacter(string lastName, string firstName, DateTime dateOfBirth, string nationality, double height)
    {
        Console.WriteLine($"{firstName.ToUpper()} {lastName.ToUpper()}, a/an {nationality.ToUpper()} born on {dateOfBirth} with a height of {height}m, has been added.");
        LastName = lastName.ToUpper();
        FirstName = firstName.ToUpper();
        DateOfBirth = dateOfBirth;
        Nationality = nationality.ToUpper();
        Height = height;
        CharacterCount++;
    }
    
    /* Getters And Setters */
    public string LastName { get; set; }
    public string FirstName { get; set; }
    public DateTime DateOfBirth { get; set; }
    public string Nationality { get; set; }
    public double Height { get; set; }

    /* Object Method */
    public int GetAge()
    {
        var dateToday = DateTime.Today;
        var age = dateToday.Year - DateOfBirth.Year;
        if (DateOfBirth.Date > dateToday.AddYears(-age)) age--;
        return age;
    }
}