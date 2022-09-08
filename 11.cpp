#include <iostream>
#include <stack>
using namespace std;
int main() {
    stack<int> s1,s2,s3;
    for(int i=0;i<3;i++){
        s1.push(i);
    }
    for(int i=3;i<6;i++){
        s2.push(i);
    }
    for(int i=0;i<3;i++){
        s3.push(s1.top()+s2.top());
        s1.pop();
        s2.pop();
    }
    while (!s3.empty()) {
        cout << ' ' << s3.top()<<endl;
        s3.pop();
    }
}
