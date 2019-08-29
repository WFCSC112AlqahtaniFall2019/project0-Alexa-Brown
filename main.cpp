#include <iostream>
using namespace std;
//Not finished yet
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

    cin>> firstEquationx;
    cin>> firstEquationy;
    cin>> equalto1;
    cin>> secondEquationx;
    cin>> secondEquationy;
    cin>> equalto2;


    for (i = -10; i >-11; i--){
        cout << "Hi" << endl;
        for (j = -10; j > -11; j--){
            cout << "Hiii" << endl;
            if ((firstEquationx * i) + (firstEquationy * i) == equalto1){
                cout << "Hello"<<endl;
                if ((secondEquationx * j) + (secondEquationy * j) == equalto2){
                    cout << i << j << endl;
                    break;
                }
            }
        }
    }
        cout << "No solution." <<endl;

    return 0;
}
