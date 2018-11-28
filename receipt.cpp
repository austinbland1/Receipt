// Name: Austin Bland
// Program Purpose: To print a receipt for ATU fees
// Date: 10-1-18

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    string tNum, lName, fName, major, date;
    int hours;
    float tRate=170.65; //initialized variable
    float dorm=1250;
    float laundry=25;
    float tFee=275;
    float sCharge=43;
    float total;
    float pPlan;
    float mPay;
    float down=.10;
    float month=4;

    cout << fixed << showpoint; //fixes the decimal and shows it
    cout << setprecision(2); //sets the precision to two numbers after the decimal point

    cout << "Enter your T number: ";
    cin >> tNum;

    cout << "Enter your last name: ";
    cin >> lName;

    cout << "Enter your first name: ";
    cin >> fName;

    cout << "Enter todays date: ";
    cin >> date;

    cout << "Enter your major: ";
    cin >> major;

    cout << "Enter the number of hours taken: ";
    cin >> hours;



    total= tRate * hours + dorm + laundry + tFee + sCharge;

    pPlan=total * down;

    mPay=(total - pPlan)/month;

    cout << "Receipt for T-Number: " "\""<< tNum <<"\"" << endl;
    cout << "Last Name\t\tFirst Name " << endl;
    cout << lName << "\t\t\t " << fName << endl;
    cout << "Todays Date \t\t Major " << endl;
    cout << date <<"\t\t\t " << major << endl;
    cout << "Tuition Rate \t\t Hours Enrolled " << endl;
    cout << "$ " <<tRate <<"\t\t " << hours << endl;
    cout << "Dorm Fee \t\t Laundry Fee " << endl;
    cout << "$ " <<tFee <<"\t\t " <<"$ " <<laundry << endl;
    cout << "Technology Fee \t\t Service Charge " << endl;
    cout << "$ " <<tFee <<"\t\t " <<"$ " <<sCharge << endl;
    cout << "Total Due: $ "<<total << endl;
    cout << "10% Down Payment of: $ " <<pPlan << endl;
    cout << "4 monthly payments of: $ " << mPay << endl;


    return 0;
}