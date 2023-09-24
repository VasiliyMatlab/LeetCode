class Solution {
public:
    string simplifyPath(string path) {
        path += "/";
        string out;
        stack<string> abs_path;
        string dir;
        bool slash_repeat = true;
        for (int i = 1; i < path.size(); i++) {
            if (path[i] == '/') {
                if (slash_repeat)
                    continue;
                if (dir == "..") {
                    if (!abs_path.empty())
                        abs_path.pop();
                } else if (dir != ".")
                    abs_path.push(dir);
                dir = "";
                slash_repeat = true;
            } else {
                slash_repeat = false;
                dir += path[i];
            }
        }
        while (!abs_path.empty()) {
            out = "/" + abs_path.top() + out;
            abs_path.pop();
        }
        if (out.size() == 0)
            return "/";
        return out;
    }
};