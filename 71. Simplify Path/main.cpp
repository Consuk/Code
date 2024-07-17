/*
https://leetcode.com/problems/simplify-path/submissions/1173511021/
*/
class Solution {
public:
  string simplifyPath(string s) {
    if (s.empty())
      return "";
    stack<string> newPath;
    for (int x = 0; x < s.size(); x++) {
      if (s[x] == '/')
        continue;
      else {
        string auxWordPath;
        while (s[x] != '/' && x < s.size()) {
          auxWordPath += s[x];
          x++;
        }
        if (auxWordPath == "..") {
          if (!newPath.empty())
            newPath.pop();
        } else if (auxWordPath == ".") {
          continue;
        } else {
          newPath.push(auxWordPath);
        }
      }
    }
    vector<string> path;
    while (!newPath.empty()) {
      cout << ' ' << newPath.top();
      path.push_back(newPath.top());
      newPath.pop();
    }
    string currentPath;
    for (auto it = path.rbegin(); it < path.rend(); ++it) {
      if (*it != "")
        currentPath += "/";
      currentPath += *it;
    }
    if (currentPath == "")
      return "/";
    return currentPath;
  }
};