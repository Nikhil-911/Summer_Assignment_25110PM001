// C++ program to implement a simple digital recipe book using 1D and 2D arrays
#include <iostream>
#include <string>

using namespace std;

// Global constants for array sizes
const int MAX_RECIPES = 5;
const int MAX_INGREDIENTS = 4;

// Global arrays to store project data
string recipeNames[MAX_RECIPES];
string ingredients[MAX_RECIPES][MAX_INGREDIENTS];
int recipeCount = 0;

// Function Prototypes
void displayMenu();
void addRecipe();
void viewAllRecipes();
void generateShoppingList();

int main() {
    int choice;

    // Seeding a couple of initial recipes so the program isn't empty at startup
    recipeNames[0] = "Pasta";
    ingredients[0][0] = "Noodles"; ingredients[0][1] = "Sauce"; ingredients[0][2] = "Cheese"; ingredients[0][3] = "Garlic";
    recipeCount++;

    recipeNames[1] = "Omelet";
    ingredients[1][0] = "Eggs"; ingredients[1][1] = "Butter"; ingredients[1][2] = "Onions"; ingredients[1][3] = "Salt";
    recipeCount++;

    cout << "======================================\n";
    cout << "  Welcome to the Digital Recipe Book  \n";
    cout << "======================================\n";

    do {
        displayMenu();
        cout << "Enter your choice (1-4): ";
        cin >> choice;
        cin.ignore(); // Clear the buffer line for string inputs later

        switch (choice) {
            case 1:
                addRecipe();
                break;
            case 2:
                viewAllRecipes();
                break;
            case 3:
                generateShoppingList();
                break;
            case 4:
                cout << "\nThank you for using Digital Recipe Book! Goodbye.\n";
                break;
            default:
                cout << "\nInvalid choice! Please try again.\n";
        }
    } while (choice != 4);

    return 0;
}

// Function to display the main menu
void displayMenu() {
    cout << "\n--- MAIN MENU ---\n";
    cout << "1. Add a New Recipe\n";
    cout << "2. View All Recipes\n";
    cout << "3. Generate Grocery Shopping List\n";
    cout << "4. Exit\n";
    cout << "-----------------\n";
}

// Function to add a recipe using 1D and 2D arrays
void addRecipe() {
    if (recipeCount >= MAX_RECIPES) {
        cout << "\n[Error] Recipe book is full! Cannot add more.\n";
        return;
    }

    cout << "\nEnter recipe name: ";
    getline(cin, recipeNames[recipeCount]);

    cout << "Enter exactly " << MAX_INGREDIENTS << " ingredients required:\n";
    for (int i = 0; i < MAX_INGREDIENTS; i++) {
        cout << "  Ingredient " << i + 1 << ": ";
        getline(cin, ingredients[recipeCount][i]);
    }

    recipeCount++;
    cout << "\n[Success] Recipe added successfully!\n";
}

// Function to display all recipes currently stored
void viewAllRecipes() {
    if (recipeCount == 0) {
        cout << "\nYour recipe book is currently empty.\n";
        return;
    }

    cout << "\n=== CURRENT RECIPE BOOK ===\n";
    for (int i = 0; i < recipeCount; i++) {
        cout << "\n" << i + 1 << ". " << recipeNames[i] << "\n   Ingredients: ";
        for (int j = 0; j < MAX_INGREDIENTS; j++) {
            cout << ingredients[i][j];
            if (j < MAX_INGREDIENTS - 1) cout << ", ";
        }
        cout << "\n";
    }
    cout << "===========================\n";
}

// Function that handles the "Meal Planning" logic to build a grocery list
void generateShoppingList() {
    if (recipeCount == 0) {
        cout << "\nNo recipes available to plan a meal.\n";
        return;
    }

    int choice;
    viewAllRecipes();
    cout << "Enter the number of the recipe you want to cook today: ";
    cin >> choice;

    // Validate user selection index
    if (choice < 1 || choice > recipeCount) {
        cout << "\n[Error] Invalid selection.\n";
        return;
    }

    int index = choice - 1; // Convert to 0-based index
    cout << "\n=====================================";
    cout << "\n   GROCERY SHOPPING LIST FOR: " << recipeNames[index];
    cout << "\n=====================================";
    cout << "\n Please buy the following items:";
    
    for (int j = 0; j < MAX_INGREDIENTS; j++) {
        cout << "\n [ ] " << ingredients[index][j];
    }
    cout << "\n=====================================\n";
}