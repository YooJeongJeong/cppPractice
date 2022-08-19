#include <iostream>

using namespace std;

void problem1();
void problem2();
int fact(int n);
int comb(int n, int k);

int main() {
    char in;
    while(1) {
        cout << "###############################" << endl;
        cout << "Main Menu" << endl;
        cout << "Enter your command!" << endl;
        cout << "###############################" << endl << endl;

        cout << "1. Problem1" << endl;
        cout << "2. Problem2" << endl;
        cout << "0. Exit" << endl;

        cout << endl << "Command >> ";
        cin >> in;
        cout << endl;
        switch(in) {
            case '1':
                problem1();
                break;
            case '2':
                problem2();
                break;
            case '0':
                return 0;
            default:
                cout << "Wrong Input. Please choose one of the above options." << endl << endl;
        }
    }

    return 0;
}

void problem1() {
    char in;
    int i, j;
    int n = 5;
    int m = 9;

    cout << "*Drawing a shape" << endl
        << "(1-Rectangle, 2-Triangle, 3-Inverted Triangle, 4-Letter 'H', 0-Back to Main Menu)" << endl;
    
    while(1) {
        cout << "Chosee shape >> ";
        cin >> in;
        cout << endl;
        switch(in) {
            case '1':
                for(i = 0; i < n; i++) {
                    for(j = 0; j < m; j++) {
                        cout << "*";
                    }
                    cout << endl;
                }
                break;
            case '2':
                for(i = 0; i < n; i++) {
                    for(j = 0; j < m; j++) {
                       if(j < (m/2) - i || j > (m/2) + i) {
                           cout << " ";
                       } 
                       else {
                           cout << "*";
                       }
                    }
                    cout << endl;
                }
                break;
            case '3':
                for(i = 0; i < n; i++) {
                    for(j = 0; j < m; j++) {
                        if(j < i || j >= m - i)
                            cout << " ";
                        else
                            cout << "*";
                    }
                    cout << endl;
                }
                break;
            case '4':
                for(i = 0; i < n; i++) {
                    for(j = 0; j < m; j++) {
                        if(i ==  2) {
                            cout << "*";
                            continue;
                        }

                        if(j < 2 || j > 6) {
                            cout << "*";
                        } 
                        else {
                            cout << " ";
                        }
                    }
                    cout << endl;
                }
                break;
            case '0':
                return;
            default:
                cout << "Wrong Input. Please choose one of the above options." << endl;
        }
        cout << endl;
    }
}

void problem2() {
    char in;
    cout << "*Choose Function of calculator" << endl
        << "(1-Factorial, 2-Combination, 0-Back to main menu)" << endl;
    
    while(1) {
        int n, k;
        cout << "Choose function >> ";
        cin >> in;
        cout << endl;

        switch(in) {
            case '1':
                cout << "Input of N = ";
                cin >> n;
                cout << n << "! is " << fact(n) << endl;
                break;
            case '2':
                cout << "Input of N = ";
                cin >> n;
                cout << "Input of K =";
                cin >> k;
                cout << n << "C" << k << " is " << comb(n, k) << endl;
                break;
            case '0':
                return;
            default:
                cout << "Wrong Input. Please choose one of the above options." << endl;
        }
        cout << endl;
    }

}

int fact(int n) {
    int result = 1;
    for(int i = 2; i <= n; i++) {
        result *= i;
    }
    return result;
}

int comb(int n, int k) {
    return fact(n) / (fact(k) * fact(n-k));
}

