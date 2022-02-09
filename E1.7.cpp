/*
Author: Sakib Khan
Course: CSCI-135
Instructor: Tong Yi
Assignment: HW E1.7
This program will make you input three names and will print them out on 3 separate lines.
*/

#include<iostream>
using namespace std;
int main(){
    string name1, name2, name3; 
    //Three separate strings indicating names
    cout << "List first name: "; 
    //User input asking for three names
    cin >> name1;
    cout << "List second name: ";
    cin >> name2;
    cout << "List third name: ";
    cin >> name3;
    cout << name1 << endl;
    cout << name2 << endl;
    cout << name3 << endl;

    return 0;
}
