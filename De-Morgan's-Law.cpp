/*
 Author : Kade Sole
 Date Created : April 13th 2023
 Date Last Modified : April 13th 2023
 Problem : De Morgan’s Law: De Morgan’s law can sometimes make it more convenient for us to express a
logical expression. These laws state that the following expressions are logically equivalent Use De Morgan’s
laws to write equivalent expressions for each of the following, then write a program
with four functions (one for each proof) to show that the original expression and the new expression
in each case are equivalent


Pseudo Code 1) create 4 functions that  show the original expression and how its equal to the new expression in each case of the inequalities
2) run through these functions for each case of the inequality. For example, if x > 2 theres true and false so 2 cases. Do this for all functions
3) return the new expression back to the user to show how depending on the inequalities cases they are still equal because of De Morgans law
*/


#include<stdio.h>
#include<iostream>
using namespace std;
//Function Decleration
void funcA(int x, int y);
void funcB(int a, int b, int g);
void funcC(int x, int y);
void funcD(int i, int j);
//Main Function
int main ()
{
//Part A
cout << " De Morgan's Law\n"; //Header
cout << " Part A \n !( x < 5 ) && !( y >= 7 )\n"; //Shows what part we are on
funcA(5,4); //Function call to show each case
funcA(5,10);
funcA(4,5);
funcA(4,10);

//Part B
cout << "\n\n\n\n Part B \n !( a == b ) || !( g != 5 )\n "; //Shows what part we are on
funcB(4,5,5);//Function call to show each case
funcB(4,5,6);
funcB(5,5,5);
funcB(5,5,6);

//Part C
cout << "\n\n\n\n Part C \n !( ( x <= 8 ) && ( y > 4 ) )\n "; //Shows what part we are on
funcC(4,5);//Function call to show each case
funcC(4,3);
funcC(9,5);
funcC(9,3);

//Part D
cout << "\n\n\n\n Part D \n !( ( i > 4 ) || ( j <= 6 ) )\n "; //Shows what part we are on
funcD(9,5);//Function call to show each case
funcD(9,7);
funcD(4,5);
funcD(4,7);
}



//Function Definition
void funcA(int x, int y){
        if(!(x<5)){
            cout << "\n !( x < 5 ): True ";
        }
        else{
            cout << "\n !( x < 5 ): False ";
        }
        if(!(y>=7)){
                cout << "\n !( y >= 7 ): True";
        }
        else {
            cout << "\n !( y >= 7 ): False";
        }
        cout << "\n !(x < 5) && !(y >= 7) is equivalent to !((x < 5) || (y >= 7))\n\n";
        }

//Function Definition
void funcB(int a, int b, int g){
        if(!(a == b)){
            cout << "\n !(a == b): True";
        }
        else{
            cout << "\n !(a == b): False";
            }
        if(!(g!=5)){
            cout << "\n !( g != 5): True";
            }
        else{
            cout << "\n !( g != 5): False";
            }
        cout << "\n !(a == b) || !(g != 5) is equivalent to !((a == b) && (g != 5))\n\n";
        }

//Function Definition
void funcC(int x, int y){
        if(x <= 8){
            cout << "\n ( x <= 8 ): True";
        }
        else{
            cout << "\n ( x <= 8 ): False";
        }
        if( y > 4){
                cout << "\n ( y > 4 ): True";
        }
        else {
            cout << "\n ( y > 4 ): False";
        }
        cout << "\n !((x <= 8) && (y > 4)) is equivalent to !(x <= 8) || !(y > 4)\n\n";
        }

//Function Definition
void funcD(int i, int j){
        if(i > 4){
            cout << "\n ( i > 4 ): True";
        }
        else{
            cout << "\n ( i > 4 ): False";
        }
        if( j <= 6){
                cout << "\n ( j <= 6 ): True";
        }
        else {
            cout << "\n ( j <= 6 ): False";
        }
        cout << "\n !((i > 4) || (j <= 6)) is equivalent to !(i > 4) && !(j <= 6)\n\n";
        }
