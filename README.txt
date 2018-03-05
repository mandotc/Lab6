# Lab6
CPSC 121
Lab 6
Spring 2018
Eric May
Sorting Arrays
Create a program, with an array of 10 ints, that will:
  1.  Ask the user if they would like to:
    a)  input values 
    b)  provide a range for randomly generated values to fill the array 
    c)  use the default range for random values
    -Random values will be generated with the rand function. See end of chapter 8 slides.
  2.  Display all elements of the array
  3.  Ask the user to choose between sorting ascended and descended
  4.  Ask the user to choose between Bubble and Selection sort
Extra credit: Also include BOGOsort (aka dumb sort), where the array is shuffled randomly then checked for order. If BOGOsort is chosen, the user should be told how many shuffles the solution took.
  5.  Display the array
    -See 4
  6.  Ask the user if they wish to return to step 1. The array should be recreated if they return to step 1.

Define and make use of these functions:
void mySwap(int & a, int & b);//Switches the contents in a and b
//Will fill all entries in the array with a number between min and (min + range)
void fillRandom(int arr[], int range = 100, int min = 0)
//Feel free to add an argument for size of the array; I assumed use of global const
/*userSelection, bubbleSort, and selectSort would all have fillRandom’s argument list without range or min.*/


If you’re unfamiliar with pointers, wait, look to the slides and/or try working on this assignment with a regular array first. If you

Another effective way to ease into this assignment without understanding pointers is to use reference parameters (int &) in the mySwap function until you later swap them out for pointers. 
Alternative valid syntax:
void fillRandom(int [] arr, … )



Points:
1 - Documentation, readability, format
1.5 - Proper use of RNG
3.5 - Proper program flow (conditionals, loops, etc)
2 - Filename and Header
2 - Output testing

Header
//Author: Eric May (your name)
//CPSC 121 Lab 6
//<MM/DD/YY> (Current Date)

Filename
<Last Name><First Initial>lab6.cpp
For example, my assignment would be named MayElab6.cpp

Github Classroom Assignment Link:
<include>
  Name your repository as you would name your file

