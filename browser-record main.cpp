#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
    stack<string> history;

    // Store visited pages
    history.push("google.com");
    history.push("youtube.com");
    history.push("abcsc.com");
    history.push("facebook.com");

    // Press Back twice
    history.pop();
    history.pop();

    // Display the page at the top
    cout << "Current top page: " << history.top() << endl;

    return 0;
}
