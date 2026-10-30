// ConsoleApplication18.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

//void deleteSymbol(std::string& text, int number)
//{
//    text.erase(number, 1);
//}
//
//int main()
//{
//    std::string text;
//    int number;
//
//    std::cout << "Enter text: ";
//    std::getline(std::cin, text);
//
//    std::cout << "Enter symbol number: ";
//    std::cin >> number;
//
//    if (number >= 0 && number < text.length())
//    {
//        deleteSymbol(text, number);
//        std::cout << "Result: " << text;
//    }
//    else
//    {
//        std::cout << "Wrong number!";
//    }
//
//    return 0;
//}


//ex2
//void deleteSymbols(std::string& text, char symbol)
//{
//    for (int i = 0; i < text.length(); i++)
//    {
//        if (text[i] == symbol)
//        {
//            text.erase(i, 1);
//            i--;
//        }
//    }
//}
//
//int main()
//{
//    std::string text;
//    char symbol;
//
//    std::cout << "Enter text: ";
//    std::getline(std::cin, text);
//
//    std::cout << "Enter symbol: ";
//    std::cin >> symbol;
//
//    deleteSymbols(text, symbol);
//
//    std::cout << "Result: " << text;
//
//    return 0;
//}

//ex3
//void insertSymbol(std::string& text, char symbol, int position)
//{
//    text.insert(position, 1, symbol);
//}
//
//int main()
//{
//    std::string text;
//    char symbol;
//    int position;
//
//    std::cout << "Enter text: ";
//    std::getline(std::cin, text);
//
//    std::cout << "Enter symbol: ";
//    std::cin >> symbol;
//
//    std::cout << "Enter position: ";
//    std::cin >> position;
//
//    if (position >= 0 && position <= text.length())
//    {
//        insertSymbol(text, symbol, position);
//        std::cout << "Result: " << text;
//    }
//    else
//    {
//        std::cout << "Wrong position!";
//    }
//
//    return 0;
//}


//ex4
//int main()
//{
//    std::string text;
//
//    std::cout << "Enter text: ";
//    std::getline(std::cin, text);
//
//    for (int i = 0; i < text.length(); i++)
//    {
//        if (text[i] == '.')
//        {
//            text[i] = '!';
//        }
//    }
//
//    std::cout << "Result: " << text;
//
//    return 0;
//}


//ex5

//int main()
//{
//    std::string text;
//    char symbol;
//    int count = 0;
//
//    std::cout << "Enter text: ";
//    std::getline(std::cin, text);
//
//    std::cout << "Enter symbol: ";
//    std::cin >> symbol;
//
//    for (int i = 0; i < text.length(); i++)
//    {
//        if (text[i] == symbol)
//        {
//            count++;
//        }
//    }
//
//    std::cout << "Count: " << count;
//
//    return 0;
//}








//ex6
int main()
{
    std::string text;

    int letters = 0;
    int numbers = 0;
    int other = 0;

    std::cout << "Enter text: ";
    std::getline(std::cin, text);

    for (int i = 0; i < text.length(); i++)
    {
        if ((text[i] >= 65 && text[i] <= 90) ||
            (text[i] >= 97 && text[i] <= 122))
        {
            letters++;
        }
        else if (text[i] >= 48 && text[i] <= 57)
        {
            numbers++;
        }
        else
        {
            other++;
        }
    }

    std::cout << "Letters: " << letters << std::endl;
    std::cout << "Numbers: " << numbers << std::endl;
    std::cout << "Other symbols: " << other;

    return 0;
}