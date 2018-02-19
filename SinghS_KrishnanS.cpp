//Saytu Singh & Siddarth Krishnan
//CPSC 121 Lab 3
//2/18/2018

#include <iostream>
#include <string>
#include <fstream>
#include <string.h>
using namespace std;

void DrawRectangle(int width, int height) // prints the rectangle with given width and height
{
    int print;
    ofstream outFile;
    cout << "Press 0 to print in file and Press 1 for cout: ";  //Asks the user for input of 0 or 1.
    cin >> print;
    if (print == 0)     //For loop begins when user chooses 0 and increase the height and width inside the file.
    {
        outFile.open("myshape.txt");      //Function opens the file.
        for (int i = 0; i<height; i++)
        {
            for (int j = 0; j<width; j++)
            {
                outFile << "*";            //Outputs * from the file.
            }
            outFile << "\n"; //Begins on new line
        }
        outFile.close();  //Functions closes the file.
    }
    else if (print == 1)   //For loop begins when user chooses 1 and increase the height and width when its outputted to the screen.
    {
        for (int i = 0; i<height; i++)
        {
            for (int j = 0; j<width; j++)
            {
                cout << "*";
            }
            cout << "\n"; //Begins on a new line.
        }
    }
}

void DrawRectangle(string word, int height) // Prints word with given height.
{
    int print;
    ofstream outFile;
    cout << "Press 0 to print in file and Press 1 for cout: ";    //Asks the user for input of 0 or 1.
    cin >> print;
    if (print == 0)     //For loop begins when user chooses 0 to print in file.
    {
        outFile.open("myshape.txt");
        for (int i = 0; i<height; i++)
        {
            outFile << word;
            outFile << "\n"; //Begins on a new line
        }
        outFile.close();   //Function closes the file.
    }
    if (print == 1)   //For loop begins when user chooses 1 to print on the screen.
    {
        for (int i = 0; i<height; i++)
        {
            cout << word;
            cout << "\n"; //Begins on a new line.
        }
    }
}

void DrawTriangle(int size, bool pointingUp) // Prints a triangle with size.
{
    int print;
    ofstream outFile;
    cout << "Press 0 to print in file and Press 1 for cout: ";  //Asks the user for input of 0 or 1.
    cin >> print;
    if (print == 0)   // Loop begins when user chooses 0 to print inside the file.
    {
        outFile.open("myshape.txt");
        if (pointingUp == true)      //If statment beigns when it is true and the size increases.
        {
            for (int i = 0; i<size; i++)
            {
                for (int j = 0; j <= i; j++)
                {
                    outFile << "*";
                }
                outFile << "\n";
            }
        }
        else if (pointingUp == false)  //Else if statment beigns when it is false and the size decreases.
        {
            for (int i = size; i > 0; i--)
            {
                for (int j = i; j > 0; j--)
                {
                    outFile << "*";
                }
                outFile << "\n";
            }
        }
        outFile.close();     //File is closed.
    }
    if (print == 1)   // Loop begins when user chooses 1 to prints to the screen.
    {
        if (pointingUp == true)    //If statment beigns when it is true and the size increases.
        {
            for (int i = 0; i<size; i++)
            {
                for (int j = 0; j <= i; j++)
                {
                    cout << "*";
                }
                cout << "\n";
            }
        }
        else if (pointingUp == false)  //Else if statment beigns when it is false and the size decreases.
        {
            for (int i = size; i > 0; i--)
            {
                for (int j = i; j > 0; j--)
                {
                    cout << "*";
                }
                cout << "\n";
            }
        }
    }
}

void DrawTriangle(string word, bool pointingUp) // Prints the triangle on word.
{
    int print;
    int length = word.length();
    ofstream outFile;
    cout << "Press 0 to print in file and Press 1 for cout: ";   //Asks the user for input of 0 or 1.
    cin >> print;
    if (print == 0)   // Loop begins when user chooses 0 to print inside the file.
    {
        outFile.open("myshape.txt");
        if (pointingUp == true)      //If statment beigns when it is true and the size increases.
        {
            for (int i = 0; i<length; i++)
            {
                for (int j = length - i - 1; j <length; j++)
                {
                    outFile << word[j];
                }
                outFile << "\n";
            }
        }
        else if (pointingUp == false)   //Else if statment beigns when it is false and the size decreases.
        {
            for (int i = length; i > 0; i--)
            {
                for (int j = length - i; j < length; j++)
                {
                    outFile << word[j];
                }
                outFile << "\n";
            }
        }
        outFile.close();       //Function closes the file.
    }
    if (print == 1)   // Loop begins when user chooses 1 to prints to the screen.
    {
        if (pointingUp == true)    //If statment beigns when it is true and the size increases.
        {
            for (int i = 0; i<length; i++)
            {
                for (int j = length - i - 1; j <length; j++)
                {
                    cout << word[j];
                }
                cout << "\n";
            }
        }
        else if (pointingUp == false)   //Else if statment beigns when it is false and the size decreases.
        {
            for (int i = length; i > 0; i--)
            {
                for (int j = length - i; j < length; j++)
                {
                    cout << word[j];
                }
                cout << "\n";
            }
        }
    }
}

int main()     //Begins the main of the program.
{
    int shape, w, width, height, direction, e;
    string word;
    
    while (true) //Will run until the user exits.
    {
        //Prompt the user to choose between a rectangle and a triangle
        cout << "Press 0 for Rectangle or Press 1 for Triangle: ";
        cin >> shape;
        if (shape == 0)     //If statement begins when user chooses 0 for shape Rectangle.
        {
            //Prompt user to enter word or width as parameter
            cout << "Press 0 to enter word or 1 to enter width: ";
            cin >> w;
            if (w == 0)     //If statement begins when user chooses 0 to enter a word.
            {
                cout << "Enter word: ";
                cin >> word;
                cout << "Enter rectangle height: ";
                cin >> height;
                DrawRectangle(word, height);     //Calls the function DrawRectangle(word,height)
            }
            else if (w == 1)   ////If statement begins when user chooses 1 to enter a width.
            {
                cout << "Enter width: ";
                cin >> width;
                cout << "Enter rectangle height: ";
                cin >> height;
                DrawRectangle(width, height);    //Calls the function DrawRectangle(width,height)
            }
            else
            {
                cout << "Invalid input.";   //Prints invalid in the loop.
            }
        }
        else if (shape == 1)    //Else if statement begins when user chooses 1 for shape Triangle.
        {
            cout << "Press 0 to enter word or 1 to enter width: ";
            cin >> w;
            if (w == 0)    //If statement begins when user chooses 0 to enter a word.
            {
                cout << "Enter word: ";
                cin >> word;
                cout << "Press 0 to enter up or 1 to enter down for direction: ";   //Asks the user to enter 0 or 1 to go up or down.
                cin >> direction;
                if (direction == 0)    //If statement begins when user chooses 0 to enter up.
                {
                    DrawTriangle(word, true);   //Calls the function DrawTriangle(word,true)
                }
                else if (direction == 1)  //If statement begins when user chooses 1 to enter down.
                {
                    DrawTriangle(word, false);   //Calls the function DrawTriangle(word,false)
                }
                else
                {
                    cout << "Invalid input.";
                }
            }
            else if (w == 1)  //Else if statement begins when user chooses 1 to enter a width.
            {
                cout << "Enter width: ";
                cin >> width;
                cout << "Press 0 to enter up or 1 to enter down for direction: "; //Asks the user to enter 0 or 1 to go up or down.
                cin >> direction;
                if (direction == 0)  //If statement begins when user chooses 0 to enter up.
                {
                    DrawTriangle(width, true);     //Calls the function DrawTriangle(width,true)
                }
                else if (direction == 1)  //Else if statement begins when user chooses 1 to enter down.
                {
                    DrawTriangle(width, false);   //Calls the function DrawTriangle(width,false)
                }
                else
                {
                    cout << "Invalid input.";     //Prints invalid in the inner loop.
                }
            }
            else
            {
                cout << "Invalid input.";   //Prints invalid in the outer loop.
            }
        }
        else
        {
            cout << "Invalid input.";   //Prints invalid in the whole loop.
        }
        cout << "Press 0 to continue or Press 1 to exit: ";   //Asks the user to either continue or to exit.
        cin >> e;
        if (e == 1)    //If statement begins when user chooses to 1 to exit. Loops back to the beginning to continue if user chooses 0. 
        {
            break;    //Break out of the loop.
        }
    }
    return 0;      //End of the program.
}
