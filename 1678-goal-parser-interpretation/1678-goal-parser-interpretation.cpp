class Solution {
public:
    string interpret(string command) {
      size_t pos1= command.find("()");
      while (pos1 != string::npos) {
            command.replace(pos1, 2, "o");
            pos1 = command.find("()"); } 
     size_t pos2 = command.find("(al)");
        while (pos2 != string::npos) {
            command.replace(pos2, 4, "al");
            pos2 = command.find("(al)");
        }
      return command;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna