#include <stdio.h>
#include <string.h>

/*

* * * * * * * * * * * * * * * * * * * *
 * * * * * * * * * * * * * * * * * * *
*                                     *
 *         Author: YELLLOWHATT       *
*                                     * 
 *         Version: 0.0.3            *
*                                     * 
 * * * * * * * * * * * * * * * * * * * 
* * * * * * * * * * * * * * * * * * * * 

*/

char* c_name = "Casper"; 
char new_c_name[90]; 

struct sys_var
{

    char menus[90];
    char menu[90];
    char name[90]; 

};

struct currency_var
{

    char currencies[130]; 
    char list_exit[5];
    int currency_selection;

};

int currency(void)
{ 

    // Current value of all currencies to 1 United States Dollar 

    const double euro_value = 0.87;
    const double pound_value = 0.79; 
    const double yen_value = 110.79; 
    const double swiss_value = 0.98; 

    double y_p_v, y_e_v, y_y_v, y_s_v, y_d_v;  // Your currency value 

    struct currency_var current = {"1 - Euro, 2 - Pound, 3 - Yen, or 4 - Swiss Franc"};

    printf("**********************************\n");
    printf("Welcome to the currency converter\n");
    printf("**********************************\n");
    printf("\nPlease enter List or Exit to continue: "); 
    scanf("%s", current.list_exit);

    if (strcmp(current.list_exit, "List") == 0)
    {

        printf("\nHere is a list of currencies...\n\n"); 
        printf("%s", current.currencies); 
        printf("\n\nPlease select one: "); 
        scanf("%d", &current.currency_selection); 

        switch (current.currency_selection)
        {

            case 1: 
                
                printf("\n\nAll currencies will be converted into United States Dollars\n\n"); 
                printf("Please enter the amount of Euros you have: "); 
                scanf("%lf", &y_e_v);
                
                y_d_v = y_e_v / euro_value;  
                printf("\n\nYou have %lf US Dollars\n", y_d_v); 
                break; 

            case 2: 

                printf("\n\nAll currencies will be converted into United States Dollars\n\n"); 
                printf("Please enter the amount of Pounds you have: "); 
                scanf("%lf", &y_p_v); 
                
                y_d_v = y_p_v / pound_value;  
                printf("\n\nYou have %lf US Dollars\n", y_d_v);    
                break; 

            case 3: 

                printf("\n\nAll currencies will be converted into United States Dollars\n\n"); 
                printf("Please enter the amount of Yen you have: "); 
                scanf("%lf", &y_y_v); 
                
                y_d_v = y_y_v / yen_value;  
                printf("\n\nYou have %lf US dollars\n", y_d_v); 
                break;  

            case 4: 

                printf("\n\nAll currencies will be converted into United States Dollars\n\n");
                printf("Please enter the amount of Swiss Francs you have: "); 
                scanf("%lf", &y_s_v); 
                
                y_d_v = y_s_v / swiss_value; 
                printf("\n\nYou have %lf US Dollars\n", y_d_v);
                break; 

            default: 

                printf("\nYou have entered an invalid input restart and try again\n"); 
                break; 

        }

        return (0); 

    }  

    else 
    {

        printf("Exiting...\n"); 
        return (0); 

    }

    return (0);   

}

int calculator(void)
{

    char op; 

    long double x, y, z; 

    printf("***************************\n");
    printf("Welcome to the Calculator\n");
    printf("***************************\n"); 
    printf("\nPlease enter an operator (+, -, *, /): "); 
    scanf(" %c", &op);

    printf("\nEnter an integer: "); 
    scanf("%Lf", &x); 

    printf("\nEnter an integer: "); 
    scanf("%Lf", &y); 

    switch (op)
    {

        case '+':

            z = x + y; 
            printf("\n%Lf + %Lf = %Lf\n", x, y, z); 
            break; 

        case '-': 

            z = x - y; 
            printf("\n%Lf - %Lf = %Lf\n", x, y, z);
            break; 

        case '*': 

            z = x * y; 
            printf("\n%Lf * %Lf = %Lf\n", x, y, z);
            break; 

        case '/': 

            z = x / y; 
            printf("\n%Lf / %Lf = %Lf\n", x, y, z);
            break;  

        default: 

            printf("\nYou have entered an invalid operation please try again\n"); 
            return (0); 
            break; 

    }

    return (0); 

}

int main(void)
{ 

    char change; 

    struct sys_var var = {"Calculator, Currency converter or Exit"};  

    printf("Hello\n\n"); 
    printf("What is your name?\n\n"); 
    scanf("%[^\n]s", var.name); 
    
    printf("\nHello %s!!!\n", var.name); 
    printf("\nMy name is %s I am this program\n", c_name); 
    
    printf("\nWould you like to change my name enter y or n: ");
    scanf(" %c", &change);

    if (change == 'y')
    {

        printf("\nPlease select a new name: ");
        scanf(" %[^\n]s", new_c_name); 
        c_name = new_c_name; 
        printf("%s", new_c_name);

    } 

    else 
    {

        printf("\nSince you have not chosen y it will stay %s\n", c_name); 

    }
    
    printf("\nSelect one of the menus please (%s)?", var.menus); 
    printf("\n\nEnter the name of the menu or enter anything to exit: ");  
    scanf(" %[^\n]s", var.menu); 

    if (strcmp(var.menu, "Calculator") == 0)
    {
    
        printf("\nGoing to Calculator");
        printf("\033c"); 
        calculator(); 

    } 

    else if (strcmp(var.menu, "Currency converter") == 0)
    {

        printf("\nGoing to the Currency Converter");
        printf("\033c"); 
        currency(); 

    }

    else 
    {

        printf("\nExiting...\n"); 
        return (0); 

    }

    return (0); 

}
