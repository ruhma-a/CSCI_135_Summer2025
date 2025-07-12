#include <iostream>
#include <vector>
using namespace std;

class Recipe 
{
private:
    string title;
    vector<string> ingredients;
    int cookTime;

public:
    /**
     * Constructor
     * Initializes the recipe with a title and cook time.
     * - Assign title and cookTime from parameters.
     */
    Recipe(string t, int time) 
    {
        title = t;
        cookTime = time;
    }

    /**
     * addIngredient
     * Adds a new ingredient to the ingredients vector.
     * - Use push_back() to add the ingredient to the vector.
     */
    void addIngredient(string ing) 
    {
        ingredients.push_back(ing);
    }

    /**
     * printRecipe
     * Prints the title, cook time, and all ingredients.
     * - Use a loop to display each ingredient in the vector.
     */
    void printRecipe() 
    {
        cout << "Recipe: " << title << endl;
        cout << "Cook Time: " << cookTime << " minutes" << endl;
        cout << "Ingredients:" << endl;
        for (const string& ingredient : ingredients) 
        {
            cout << "- " << ingredient << endl;
        }
    }
};

int main() 
{
    // TODO: Create a Recipe object on the stack (no new)
    // Example: Recipe pancakes("Pancakes", 20);
    Recipe pancakes("Pancakes", 20);

    pancakes.addIngredient("2 cups flour");
    pancakes.addIngredient("1 cup milk");
    pancakes.addIngredient("2 eggs");

    // TODO: Call printRecipe() to test your class
    pancakes.printRecipe();
    return 0;
}