#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;
int maxEle;

stack<int> s;

void push(int x){

    if(s.empty()){
        s.push(x);
        maxEle = x ;
        return ;
    }

    if(x > maxEle){
        s.push(2*x - maxEle);
        maxEle = x ;
    }
    else{
        s.push(x);
    }
}

void pop()
{
    if(s.empty()){
        return ;
    }
    int t = s.top();
    s.pop();

    if(t > maxEle){
        maxEle = 2 * maxEle - t;
    }
}

void display()
{
    if(s.empty()){
        return ;
    }

    else{
        cout << maxEle << "\n";
    }
}



int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin >> n;
    while(n!=0 ){
        int choice ; cin >> choice;
        switch(choice){
            case 1:int x;
                   cin >> x;
                   push(x);
            break;
            case 2:pop();
            break;
            case 3:display();
            break;
            default:cout << "invalid choice" <<endl;
            break;
        }
        n--;
    }
    return 0;
}
