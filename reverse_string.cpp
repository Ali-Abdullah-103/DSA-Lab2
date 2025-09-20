#include <iostream>
using namespace std;

string reverse_str(string*);

int main() {
    string* org_string = new string;
    cout << "Enter a string: ";
    getline(cin, *org_string);
    string reversed = reverse_str(org_string);
    cout << "\nRevresed String: " << reversed << endl;
    delete org_string;
    return 0; 
}

string reverse_str(string* line) {
    string temp = *line;
    string reverse = "";
    for(int i = temp.length() - 1; i >= 0; i--) {
         reverse += temp[i];
    }
    return reverse;
}