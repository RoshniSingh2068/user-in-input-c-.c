// user input ... it is possible to use extraction operator >> on cin( output from the user ) to store a string entered by the user

#include <iostream>
#include <string>

using namespace std;

int main(){
    string fullName;
    cout << " type your name ";
    cin >> fullName;
    cout << "your name is " << fullName ; // it does'n print the complete name
    return 0;

}
