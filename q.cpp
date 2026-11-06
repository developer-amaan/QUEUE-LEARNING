#include <iostream>
#include <queue>
using namespace std;
int main(){
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    cout << "Front :" << q.front();
    cout << endl;
    cout << "Back :" << q.back();
    cout << endl;
    cout << "size :" << q.size();
    
    return 0;
 }
