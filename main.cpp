
// Alexa Brown, CSC 112, Project 0
#include <iostream>
using namespace std;
int main() {
    cout << "Hello, World! " << endl;
    int i=-10;
    int j=-10;
    int firstEquationx;
    int firstEquationy;
    int equalto1;
    int equalto2;
    int secondEquationx;
    int secondEquationy;

    cout << "Enter the first x ";
    cin>> firstEquationx;
    cout << "Enter the first y ";
    cin>> firstEquationy;
    cout << "Enter the number the first equation is equal to ";
    cin>> equalto1;
    cout << "Enter the second x ";
    cin>> secondEquationx;
    cout << "Enter the second y ";
    cin>> secondEquationy;
    cout << "Enter the number the second equation is equal to ";
    cin>> equalto2;


    for (i = -10; i <11; i++){
        for (j = -10; j <11; j++){
            if ((firstEquationx * i) + (firstEquationy * i) == equalto1){
                if ((secondEquationx * j) + (secondEquationy * j) == equalto2){

                    cout << "x = " <<  i << endl;
                    cout << "y = " << j << endl;
                    break;
                }

            }
        }
    }
    cout << "No solution." <<endl;



    return 0;
}
