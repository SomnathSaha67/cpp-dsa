#include <iostream>
using namespace std;

int main(){

   int x, y;
    string op;
    cout << "Enter two integers: ";
    cin >> x >> y;
    cout << "Enter operator: ";
    cin >> op;

    if(op == "+") cout << x + y << "   (+ : addition)";
    else if(op == "-") 
      cout << x - y << "   (- : subtraction)";
    else if(op == "*") 
      cout << x * y << "   (* : multiplication)";
    else if(op == "/") { 
      if(y==0) cout << "Error: Division by zero"; else cout << x / y << "   (/ : division)"; 
    }
    else if(op == "%") { 
      if(y==0) cout << "Error: Modulo by zero"; else cout << x % y << "   (% : remainder)"; 
    }
    else if(op == "==") 
      cout << (x == y) << "   (== : equality)";
    else if(op == "!=") 
      cout << (x != y) << "   (!= : inequality)";
    else if(op == ">") 
      cout << (x > y) << "   (> : greater than)";
    else if(op == "<") 
      cout << (x < y) << "   (< : less than)";
    else if(op == ">=") 
      cout << (x >= y) << "   (>= : greater or equal)";
    else if(op == "<=") 
      cout << (x <= y) << "   (<= : less or equal)";
    else if(op == "&&") 
      cout << (x && y) << "   (&& : logical AND)";
    else if(op == "||") 
      cout << (x || y) << "   (|| : logical OR)";
    else if(op == "&") 
      cout << (x & y) << "   (& : bitwise AND)";
    else if(op == "|") 
      cout << (x | y) << "   (| : bitwise OR)";
    else if(op == "^") 
      cout << (x ^ y) << "   (^ : bitwise XOR)";
    else if(op == "~") 
      cout << (~x) << "   (~ : bitwise NOT, unary)";
    else if(op == "<<") 
      cout << (x << y) << "   (<< : left shift)";
    else if(op == ">>") 
      cout << (x >> y) << "   (>> : right shift)";
    else 
      cout << "Invalid operator";

  return 0;
}