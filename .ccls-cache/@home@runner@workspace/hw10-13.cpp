//Lab 9-2.cpp - displays two monthly car payments
//Created/revised by <your name> on <current date>

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

//Function to swap two integers using pass-by-pass reference
void swap(double &a, double &b) {
    double temp = a;
    a = b;
    b = temp;
}
int main() {

    //declare variables
    int carPrice = 0;
    int rebate = 0;
    int prin = 0;
    double creditRate = 0.0;
    double dealerRate = 0.0;
    int term = 0;
    double creditPayment = 0.0;
    double dealerPayment = 0.0;

    //input variables
    cout << "Car price (after any trade-in): ";
    cin >> carPrice;
    cout << "Rebate: ";
    cin >> rebate;
    cout << "Credit union rate: ";
    cin >> creditRate;
    cout << "Dealer rate: ";
    cin >> dealerRate;
    cout << "Term in years: ";
    cin >> term;
    
    //calculate payments
        prin = carPrice - rebate;
    
    //calculates and returns a dealermonthly payment
    double monthPayment = 0.0;
        monthPayment = prin * dealerRate/ 
        (1 - pow(dealerRate + 1, -term * 12));
    return monthPayment;

    cout << "Dealer Payment: " << monthPayment << endl;

    //call the swap function
    swap(dealerPayment, creditPayment);
    //display payments

    cout << "Credit Payment: " << monthPayment << endl;
    
    return 0;
}//end of main function    

   
