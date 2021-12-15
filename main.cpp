#include <iostream>
#include <string>

using namespace std;
int main() {
    string Hello = "Hello";
    char comma = ',';
    char space = ' ';
    string World = "World";
    char exclamationMark = '!';

    string theFirstConsoleWo = { 0 };
    cout << "Please tell what your first words in the console was\n";
    getline(cin, theFirstConsoleWo);

    string helloWorld = Hello + comma + space + World + exclamationMark;

    if(theFirstConsoleWo == helloWorld)
        cout << "So your words was:" << "'" << theFirstConsoleWo << "'" << "\n" << "That was exactly the same as me" << endl;
    else
        cout << "Was it really: " << "'" << theFirstConsoleWo << "'" << "?\n"<<"My was this: " << helloWorld << endl;




    return 0;
}
