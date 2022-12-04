#include <iostream>
#include <cmath>

void findLargestNumber();
void isVovel();
void quadraticEquation();
void sumOfNaturalNumbers();
void isYearLeap();
void factoryCounter();
void printMultiplicationTable();
void christmas();
void welcomeMessage();


using namespace std;
int main() {
    welcomeMessage();
//    findLargestNumber();
//    isVovel();
//    quadraticEquation();
//     sumOfNaturalNumbers();
//    isYearLeap();
//    factoryCounter();
//    printMultiplicationTable();
//    christmas();

    return 0;
}

void findLargestNumber() {

    int a, b, c;
    string text = "This number is highest: ";

    cout << "Input 3 numbers, separated with space charater: ";
    cin >> a;
    cin >> b;
    cin >> c;

    if(a >= b && a >= c)
        cout << text << a;
    else if(b >= a && b >= c)
        cout << text << b;
    else
        cout << text << c;
}


// Samomgłoski i spółgłoski, zadzierają w górę noski!
// bez nich książki i gazety,
// nie potrzebne są niestety,
// i nieważne wszstkie akta,
//i kontrakty także też!

void isVovel() {

   char a;
   bool isVovel;

   cout << "Enter character: ";
   cin >> a;

   a = tolower(a);

    isVovel = (a == 'a' || a== 'e' || a== 'i' || a== 'o' || a== 'u');

    if(isVovel)
        cout << a << " is vovel";
    else
        cout << a << " isn't vovel";
}

void quadraticEquation() {
    float a, b, c, root1, root2, formula, realPart, imaginaryPart;

    cout << "Enter number a, b and c to get roots from QuadraticEquation: ";
    cin >> a >> b >> c;
    formula = b*b-4*a*c;

    if(formula > 0){
        root1 = (-b + sqrt(formula)) / (2*a);
        root2 = (-b - sqrt(formula)) / (2*a);
        cout << "A graph is touching the X axis line at this distance from Y axis:";
        cout << "X1 = " << root1 << ", X2 = " << root2;
    }
    else if (formula == 0) {
        root1 = -(b*b) / 2*a*c;
        cout << "A graph is touching the X axis at this distance from Y axis:" << root1;
    }
    else {
        realPart = -b/(2*a);
        imaginaryPart = sqrt(-formula)/(2*a);
        cout << "a graph is not touching X axis";
        cout << "X1 = " << realPart << " + " << imaginaryPart << "i";
        cout << "X2 = " << realPart << " - " << -imaginaryPart << "i";
    }
}


void sumOfNaturalNumbers() {

    int number, sum = 0, i;
    cout << "Input number to count sum of all numbers smaller than it: ";
    cin >> number;

    for (i = 0; i <= number; ++i) {
        sum += number;
    }

    cout << "Sum of natural is: " << sum;
}

void isYearLeap() {

    int year;

    cout << "Input year to see if its leap: ";
    cin >> year;
    cout << "";

    string mess;

//        This is a long way

//    if(year % 4 == 0){
//        if(year % 100 == 0){
//            if(year % 400 == 0){
//                mess = "Year is leap";
//            }
//            else{
//                mess = "Year is not leap";
//            }
//        }
//        else {
//            mess = "Year is leap";
//        }
//    }
//    else {
//        mess = "Year is not leap";
//    }

//    This is a short way

    if((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0)){
        mess = "Year is leap";
    }
    else {
        mess = "Year is not leap";
    }

    cout << mess;
}

void factoryCounter() {

    int number, sum = 0, i;

    cout << "Input Your number to count factory: ";
    cin >> number;

    if(number > 0){
        for(i = 1; i <= number; i++) {
            cout << i;
            sum *= i;
        }
        cout << "This is sum of factory: " << sum;
    } else {
        cout << "Negative values have no factory.";
    }
}

void printMultiplicationTable() {

    int i, y;

    for(i = 0; i <= 10; i++) {
        for(y = 0; y <= 10; y++) {
            cout << " " << i << " * " << y << " = " << i * y;
        }
        cout << endl;
    }
}

void christmas() {

    char x;
    int height, width, i, j, k, s;
    string mess;

    cout << "Please, my little christmas ghost see christmas magic! \n \n";
    cout << "Type character: ";
    cin >> x;
    cout << "Type height: ";
    cin >> height;

    for(s = 3; s > 0; s--) {
        width = height;
        for (i = 0; i <= height; i++) {
            for (j = 0; j <= width; j++) {
                mess += " ";
            }
            for (k = 2 * i; k > 0; --k) {
                mess += x;
            }
            for (j = 0; j <= width; j++) {
                mess += " ";
            }
            width--;
            if(i == height){
                cout << mess;
            }
            else {
                cout << mess << endl;
            }
            mess = "";
        }
    }
}

/*
 xxxxx
x     x       x        x
x             x        x
x          xxxxxxx  xxxxxxx
x             x        x
x     x       x        x
 xxxxx
*/


void welcomeMessage() {
    string message = "\n xxxxx \n"
                     "x     x       x        x \n"
                     "x             x        x \n"
                     "x          xxxxxxx  xxxxxxx \n"
                     "x             x        x \n"
                     "x     x       x        x \n"
                     " xxxxx \n \n"
                     "You are welcome to see if Your code works bellow. \n \n \n";
    cout <<message;
}
