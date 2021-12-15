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

    if(theFirstConsoleWo.compare(Hello+comma+space+World) != true || theFirstConsoleWo.compare(Hello+comma+space+World+exclamationMark) != true )
        cout << "That was exactly the same as me" << endl;
    else

    cout << "Really?? Mine was this.\n" << Hello << comma << space << World << exclamationMark << endl;




    return 0;
}
