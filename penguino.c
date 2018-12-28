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

struct sys_var
{

    char c_name[7]; 
    char menus[90]; 
    char menu[90]; 
    char name[90]; 

};

struct currency_var
{

    char currencies[80]; 
    char list_exit[5]; 
    int currency_selection;   

}; 

int currency(void)
{ 

    // Current value of all currencies to 1 United States Dollar 

    const double euro_value = 0.87; 
    const double pound_value = 0.79; 
    const double yen_value = 110.79; 

    double y_p_v, y_e_v, y_y_v, y_d_v;  // Your currency value 

    struct currency_var current = {"1 - Euro, 2 - Pound or 3 - Yen (All currencies are converted into US Dollars)"};

    printf("*************************************\n");
    printf("Welcome to the currency converter\n"); 
    printf("*************************************\n");
    printf("\nPlease enter List or Exit to continue: "); 
    scanf("%s", current.list_exit); 

    if (strcmp(current.list_exit, "List") == 0)
    {

        printf("\nHere is a list of currencies...\n\n"); 
        printf("%s", current.currencies); 
        printf("\nPlease select one: "); 
        scanf("%d", &current.currency_selection); 

        switch (current.currency_selection)
        {


            case 1: 
                
                printf("\n\nAll currencies will be converted into United States Dollars\n\n"); 
                printf("Please enter the amount of Euros you have: "); 
                scanf("%lf", &y_e_v); 
                y_d_v = y_e_v / euro_value;  
                printf("\n\nYou have %lf euros\n", y_d_v); 
                break; 

            case 2: 

                printf("\n\nAll currencies will be converted into United States Dollars\n\n"); 
                printf("Please enter the amount of Pounds you have: "); 
                scanf("%lf", &y_p_v); 
                y_d_v = y_p_v / pound_value;  
                printf("\n\nYou have %lf pounds\n", y_d_v);    
                break; 

            case 3: 

                printf("\n\nAll currencies will be converted into United States Dollars\n\n"); 
                printf("Please enter the amount of Yen you have: "); 
                scanf("%lf", &y_y_v); 
                y_d_v = y_y_v / yen_value;  
                printf("\n\nYou have %lf yen\n", y_d_v); 
                break;  

            default: 

                printf("You have entered an invalid input restart and try again"); 
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

    printf("Please enter an operator (+, -, *, /): "); 
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

    struct sys_var var = {"Casper", "Calculator, Currency converter or Exit"};  

    printf("Hello\n\n"); 
    printf("What is your name?\n\n"); 
    scanf("%[^\n]s", var.name); 
    
    printf("\nHello %s!!!\n", var.name); 
    printf("\nMy name is %s I am this program\n", var.c_name); 
    printf("\nWould you like to go to any of these menus (%s)? %s", var.menus, var.name); 
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
