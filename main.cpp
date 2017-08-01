/**********************************
 ** Program Filename: smallsort.cpp
 ** Author: reuben youngblom
 ** Date: October 19th 2016
 ** Description: This program takes three ints and passes them to a function by reference. The function sorts them using conditionals, and since they were passed by reference, the main function spits back out the ints in a sorted order.
 ** Input: Will take three numbers
 ** Output: should sort them into ascending order
 **********************************/


#include <iostream>
using namespace std;

void smallSort (int&, int&, int&);  //function prototype


 
 //main function, commented out
/*

 int main() {
  
    int a, b, c;
    
    cout << "Three numbers, please" << endl;
    
    cin >> a;
    cin >> b;
    cin >> c;
    
    smallSort(a, b, c);
    cout << a << ", " << b << ", " << c << endl;

    
    return 0;
}
 
*/

void smallSort (int &small, int &mid, int &big)  //sort function. Takes three ints as parameters, by reference
{
    int hold; //creates a holding variable, so program can swap variables without losing any to overwriting

    if (small >= mid)  //first conditional: sorts int #1 and int #2 into ascending order, IF they're in the wrong order
    {
        hold = small;  //moves #1 to holding variable
        small = mid;  //assigns int #2 to int #1 variable
        mid = hold;  //assigns holding variable (which holds original int #1 value) to int #2, effectively swapping the values of ints #1 and #2.
    }
    
    if (mid >= big) //this does the same thing as above conditional, but with ints #2 and #3
    {
        hold = mid; //stores value #2
        mid = big;  //assigns value #3 to variable #2
        big = hold;  //completes the swap
    }

    if (small >= mid)  //this does the same thing as the above two, but now re-checks the first variable against the new middle variable, since they haven't been directly compared yet.
    {
        hold = small;  //stores value #1
        small = mid;  //starts to swap
        mid = hold;  //completes the swap
    }
    
    //cout << a << ", " << b << ", " << c << endl;  //was my original test output
}