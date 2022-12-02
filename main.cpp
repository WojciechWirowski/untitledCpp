#include <iostream>

void findLargestNumber();
void isVovel();

using namespace std;

int main() {
    //findLargestNumber();
    //isVovel();

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

