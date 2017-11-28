 /**
 *Joshua Whiteford
 *02/10/2017
 *main.c
 *Menu Driven Code
 */


/**< preprocessor directives */
#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

void dec_2_bin(void);
void bin_2_dec(void);
char menu(void);

/**< Starting the function */
int main()
{
    /**< Declaring our variables */
    char input;

    /**< Title */
    cout << "\t\t Menu Driven Code!" << endl;

    /**< Do something while a parameter is not satisfied */
    do
    {
        /**< Sending our program to another function to get the user to choose what they want to do */
        input = menu();

        /**< Switch case that depending on the input does one of the task listed  */
        switch (input)
        {
            /**< The different tasks & function calling  */
            case 'b' :  bin_2_dec();
                        break;

            case 'd' :  dec_2_bin();
                        break;

            case 'q' :  cout << "Tank you and GoodBye..." << endl;
                        break;

            default :   cout << "\t\tPlease Try that again!" << endl;
                        break;
        }
    }

    /**< The Parameter that needs to be satisfied for the program to continue */
    while (input != 'q');

    return 0;
}

/**< Another function */
char menu(void)
{
    /**< Variable Declarition */
    char input;

    /**< Asking the user to select an option */
    cout << "\n\nChoose from on of the following options available!" << endl << "\nPress b to Select:\tConversion From Binary to Decimal!" << endl ;
    cout << "\nPress d to Select:\tConversion From Decimal to Binary!" << endl << "\nPress q to Qiut" << endl;

    fflush(stdin);
    /**< Getting the users input */
    cin >> input;

    /**< returning the users input */
    return input;
}

/**< Another Function */
void bin_2_dec(void)
{
    /**< Variable Declarition */
    long int i = 0, num = 0, output = 0;

    /**< Asking & Getting the user to input the binary number they want to convert */
    cout << "Please enter the Binary number you want to convert!" << endl;
    cin >> num;

    /**< For loop to calcualte  */
    while (num > 0)
    {
        if( num % 10 == 1)
        {
            output = output + pow(2,i);
        }
        i++;
        num = num / 10;
    }



    /**< Displaying the result to the user  */
    cout << output;

    /**< Ending this function returning nothing */
    return;
}

/**< Another Function */
void dec_2_bin(void)
{
    /**< Variable Declarition  */
    int i, num;
    int arrayVal[8] = {0};

    /**< Asking & Getting the User to input the Decimal value you want to convert */
    cout << "Please enter the Decimal number you wish to convert!" << endl;
    cin >> num;

    /**< Sending the user into a loop that will repeat 8 times */
    for(i = 0; i < 8; i++)
    {
        /**< Checking if when the inputted number is devided by 2 is a whole number i.e no remainder  */
        if(num % 2 == 0)
        {
            /**< Setting that variable in the array to be equal to 1  */
            arrayVal[i] = 0;
        }
        /**< Checking if when the inputted number is devided by 2 is not a whole number i.e some remainder  */
        else
        {
            /**< Setting that variable in the array to be equal to 0  */
            arrayVal[i] = 1;
        }
        /**< Divinding the input by 2 and setting a variable = to the result  */
        num /= 2;
    }
    /**< Loop to read out the numbers backwards */
    for(i = 7; i >= 0; i--)
    {
        /**< Reading out the Variables of an aray */
        cout << arrayVal[i];
    }

    /**< Returning nothing */
    return;
}
