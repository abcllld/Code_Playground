/*

Project Name : Unit Converter
Developer : Rahul Mishra
Date : 03-01-2023
Associated Team : Goggle
Purpose : To Increase Skill
*/

#include <stdio.h>
int main()
{
    char category;
    int temperature_choice;
    int mass_choice;
    int currency_choice;
    int input_Fahrenheit;   // user input in fahrenheit
    int input_Celsius;      // user input in Celsius;
    int input_Doll_Euro;    // user input from USD to Euro
    int input_Doll_Rmb;     // user input from USD to RMB;
    int input_Doll_Jpy;     // user input form USD to JPY
    int input_Ounce;        // user input in Ounce
    int input_Gram;         // user input in Gram
    int fahrenheit_celsius; // variable that stores the F-->C
    int celsius_fahrenheit; // stores C-->F
    float USD_EURO;         // USD->EURO
    float USD_RMB;          // USD->RMB
    float USD_JPY;          // USD->JPY
    float Ounce_kilogram;
    float Gram_kilogram;

    printf("\n\n\nWelcome to this Unit Converter  : ");
    printf("\nHere is a list of choice to choose from : ");
    printf("\nPress T for Temperature Converter (T) : ");
    printf("\nPress C for Currency(C) : ");
    printf("\nPress M for Mass(M) : ");
    printf("\n");
    scanf("%c", &category);

    printf("\n\n");

    if (category == 'T')
    {
        printf("Welcome To Temperature Converter : \n");
        printf("Here is a list of choice to choose from : \n");
        printf("Press 1 for Temperature to Celsius :\n");
        printf("Press 2 for Celsius to Temperature : \n");
        printf("\n");
        scanf("%d", &temperature_choice);

        if (temperature_choice == 1)
        {

            printf("\nEnter the temperature in Fahrenheit : ");
            scanf("%d", &input_Fahrenheit);
            fahrenheit_celsius = ((input_Fahrenheit - 32) * (5.0 / 9.0));
            printf("\nTemperature in Celsius = %d", fahrenheit_celsius);
        }

        else if (temperature_choice == 2)
        {
            printf("\nEnter the temperature in Celsius : ");
            scanf("%d", &input_Celsius);
            celsius_fahrenheit = (9.0 / 5.0) * input_Celsius + 32;
            printf("\nTemperature in Fahrenheit = %d ", celsius_fahrenheit);
        }
        else
        {
            printf("\n\nError! Please Enter Data as Instructed : ");
        }
    }

    else if (category == 'C')
    {
        printf("Welcome To Currency Converter : \n");
        printf("Here is a list of choice to choose from : \n");
        printf("Press 1 to Convert Dollar to Euro : \n");
        printf("Press 2 to Convert Dollar to Renminbi(Chinese Yuan) : \n");
        printf("Press 3 to Convert Dollar to JPY(Japanese Yuan) : \n");
        printf("\n");
        scanf("%d", &currency_choice);

        if (currency_choice == 1)
        {
            printf("Enter the amount in Dollar : ");
            scanf("%d", &input_Doll_Euro);
            USD_EURO = input_Doll_Euro * 0.87;
            printf("Amount in Euro = %.2f", USD_EURO);
        }
        else if (currency_choice == 2)
        {
            printf("Enter the amount in Dollar : ");
            scanf("%d", &input_Doll_Rmb);
            USD_RMB = input_Doll_Rmb * 6.82;
            printf("Amount in RMB = %.2f", USD_RMB);
        }
        else if (currency_choice == 3)
        {
            printf("Enter the amount in Dollar : ");
            scanf("%d", &input_Doll_Jpy);
            USD_JPY = input_Doll_Jpy * 111.09;
            printf("Amount in JPY = %.2f", USD_JPY);
        }

        else
        {
            printf("\n\nError! Please Enter Data as Instructed : ");
        }
    }

    else if (category == 'M')
    {
        printf("Welcome To Mass Converter : \n");
        printf("Here is a list of choice to choose from : \n");
        printf("Press 1 for Ounce Converter : \n");
        printf("Press 2 for Grams converter : \n");
        scanf("%d", &mass_choice);

        if (mass_choice == 1)
        {
            printf("Enter the amount in Ounce : ");
            scanf("%d", &input_Ounce);
            Ounce_kilogram = input_Ounce * 0.0625;
            printf("Amount in Kilogram = %.2f OUNCE", Ounce_kilogram);
        }

        else if (mass_choice == 2)
        {
            printf("Enter the amount in Grams : ");
            scanf("%d", &input_Gram);
            Gram_kilogram = input_Gram * 0.001;
            printf("Amount in Kilogram = %.2f KG", Gram_kilogram);
        }

        else
        {
            printf("\n\nError! Please Enter Data as Instructed : ");
        }
    }
}