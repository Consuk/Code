/*
https://leetcode.com/problems/evaluate-reverse-polish-notation/submissions/1180102277/
*/
class Solution {
public:
  int evalRPN(vector<string> &tokens) {
    stack<int> op;
    for (int x = 0; x < tokens.size(); x++) {
      if (tokens[x] != "+" && tokens[x] != "-" && tokens[x] != "*" &&
          tokens[x] != "/") {
        op.push(stoi(tokens[x]));
      } else {
        if (!op.empty()) {
          int op1 = op.top();
          op.pop();
          int op2 = op.top();
          op.pop();
          if (tokens[x] == "+")
            op.push(op2 + op1);
          else if (tokens[x] == "-")
            op.push(op2 - op1);
          else if (tokens[x] == "*")
            op.push(op2 * op1);
          else
            op.push(op2 / op1);
        }
      }
    }
    return op.top();
  }
};