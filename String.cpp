//Defanging an IP Address
class String1 {
public:
    string defangIPaddr(string address) {
        string ans;
        for (int i=0; i<address.length(); i++)
        {
            if (address[i] == '.')
                ans += "[.]";
            else
                ans.push_back(address[i]);
        }
        return ans;
    }
};

//Jewels and Stones
class String2 {
public:
    int numJewelsInStones(string jewels, string stones) {
        int ans = 0;
        for (int i = 0; i < jewels.size(); i++){
            for (int j = 0; j < stones.size(); j++){
                if (stones[j] == jewels[i]){
                    ans++;
                }
            }
        }
        return ans;
    }
};

//Find Words Containing Character
class String3 {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int> ans;
        for (int i = 0; i < words.size(); i++){
            if (words[i].find(x) != string::npos){
                ans.push_back(i);
            }
        }
        return ans;
    }
};

//Goal Parser Interpretation
class String4 {
public:
    string interpret(string command) {
        string ans;
        for (int i = 0; i < command.size(); i++) {
            char c = command[i];
            if (c == 'G')
                ans += c;
            else if (c == '(')
                ans += command[i + 1] == ')' ? "o" : "al";
        }
        return ans;
    }
};

//Decode the Message
class String5 {
public:
    string decodeMessage(string key, string message) {
        char d[128]{};
        d[' '] = ' ';
        char i = 'a';
        for (char& c : key) {
            if (!d[c]) {
                d[c] = i++;
            }
        }
        for (char& c : message) {
            c = d[c];
        }
        return message;
    }
};