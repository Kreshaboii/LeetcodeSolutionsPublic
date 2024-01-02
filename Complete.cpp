#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>
#include <vector>
#include <numeric>
#include <algorithm>


using namespace std;

//Build Array from Permutation
class Array1 {
public:
    vector<int> buildArray(vector<int>& nums) {

        int n = nums.size();

        for (int i = 0; i < n; i++) {
            nums[i] = nums[i] + (n * (nums[nums[i]] % n));
        }

        for (int i = 0; i < n; i++) {
            nums[i] /= n;
        }

        return nums;
    }
};


//Number of Good Pairs
class Array2 {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int n = nums.size();
        int pairs = 0;

        for (int i = 0; i < n; i++) {
            for (int j = 1; j < n; j++) {
                if (nums[i] == nums[j] && i < j) {
                    pairs++;
                }
            }
        }
        return pairs;
    }
};


//How Many Numbers Are Smaller Than the Current Number
class Array3 {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int n = nums.size();
        vector<int> returnVector;

        for (int i = 0; i < n; i++) {
            returnVector.push_back(0);
        }

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (nums[j] != nums[i] && nums[j] < nums[i]) {
                    returnVector[i] += 1;
                }
            }
        }
        return returnVector;
    }
};


//Count Pairs Whose Sum is Less than Target
class Array4 {
public:
    int countPairs(vector<int>& nums, int target) {
        int n = nums.size();
        int pairs = 0;

        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (nums[i] + nums[j] < target) {
                    pairs++;
                }
            }
        }
        return pairs;
    }
};


//Left and Right Sum Differences
class Array5 {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n = nums.size();
        int right = accumulate(begin(nums), end(nums), 0); //Duke perdorur #include <numeric>
        vector<int> ans;

        for (int i = 0, left = 0; i < n; i++) {
            right -= nums[i];
            ans.push_back(abs(left - right));
            left += nums[i];
        }
        return ans;
    }
};

//Defanging an IP Address
class String1 {
public:
    string defangIPaddr(string address) {
        string ans;
        for (int i = 0; i < address.length(); i++)
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
        for (int i = 0; i < jewels.size(); i++) {
            for (int j = 0; j < stones.size(); j++) {
                if (stones[j] == jewels[i]) {
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
        for (int i = 0; i < words.size(); i++) {
            if (words[i].find(x) != string::npos) {
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

//Convert the Temperature
class Math1 {
public:
    vector<double> convertTemperature(double celsius) {
        vector<double> ans;
        ans.push_back(celsius + 273.15);
        ans.push_back(celsius * 1.8 + 32);

        return ans;
    }

};

//Find the Maximum Achievable Number
class Math2 {
public:
    int theMaximumAchievableX(int num, int t) {
        int ans = num + t * 2;

        return ans;
    }
};

//Smallest Even Multiple
class Math3 {
public:
    int smallestEvenMultiple(int n) {
        int ans;
        if (n % 2 != 0) {
            ans = n * 2;
        }
        else {
            ans = n;
        }

        return ans;
    }
};

//Divisible and Non-divisible Sums Difference
class Math4 {
public:
    int differenceOfSums(int n, int m) {
        int ans = 0;
        for (int i = 1; i <= n; i++) {
            if (i % m) {
                ans += i;
            }
            else {
                ans += -i;
            }
        }
        return ans;
    }
};

//Add Two Integers
class Solution {
public:
    int sum(int num1, int num2) {
        int ans = num1 + num2;

        return ans;
    }
};

//Richest Customer Wealth
class Matrix1 {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int ans = 0;
        for (auto& v : accounts) {
            ans = max(ans, accumulate(v.begin(), v.end(), 0));
        }
        return ans;
    }
};

//Largest Local Values in a Matrix
class Matrix2 {
public:
    vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
        int n = grid.size();
        vector<vector<int>> ans(n - 2, vector<int>(n - 2));
        for (int i = 0; i < n - 2; i++) {
            for (int j = 0; j < n - 2; j++) {
                for (int x = i; x <= i + 2; x++) {
                    for (int y = j; y <= j + 2; y++) {
                        ans[i][j] = max(ans[i][j], grid[x][y]);
                    }
                }
            }
        }
        return ans;
    }
};

//Matrix Diagonal Sum
class Matrix3 {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int ans = 0;
        int n = mat.size();
        for (int i = 0; i < n; ++i) {
            int j = n - i - 1;
            ans += mat[i][i] + (i == j ? 0 : mat[i][j]);
        }
        return ans;
    }
};

//Delete Greatest Value in Each Row
class Matrix4 {
public:
    int deleteGreatestValue(vector<vector<int>>& grid) {
        for (auto& row : grid) sort(row.begin(), row.end());

        int ans = 0;
        for (int j = 0; j < grid[0].size(); j++) {
            int t = 0;
            for (int i = 0; i < grid.size(); i++) {
                t = max(t, grid[i][j]);
            }
            ans += t;
        }
        return ans;
    }
};

//Flipping an Image
class Matrix5 {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        for (auto& row : image) {
            int i = 0, j = row.size() - 1;
            for (; i < j; i++, j--) {
                if (row[i] == row[j]) {
                    row[i] ^= 1;
                    row[j] ^= 1;
                }
            }
            if (i == j) {
                row[i] ^= 1;
            }
        }
        return image;
    }
};

int main() {
    int choice;

    do {
        cout << "Zgjedh nje numer prej 1 deri 20 (ose 0 per te dal): ";
        cin >> choice;

        switch (choice) {
        case 1: {
            //Array1
            cout << "Keni zgjedhur: Build Array from Permutation\n\n";
            Array1 arr1;
            vector<int> nums;
            int size;
            cout << "Vendos madhesin e vektorit: ";
            cin >> size;
            cout << "Shkruaj " << size << " numrat e ndare me space: ";
            nums.resize(size);
            for (int i = 0; i < size; ++i) {
                cin >> nums[i];
            }
            vector<int> result = arr1.buildArray(nums);
            cout << "Rezultati: ";
            for (int num : result) {
                cout << num << " ";
            }
            cout << endl;
            break;
        }
        case 2: {
            //Array2
            cout << "Keni zgjedhur: Number of Good Pairs\n\n";
            Array2 arr2;
            vector<int> nums;
            int size;
            cout << "Vendos madhesin e vektorit: ";
            cin >> size;
            cout << "Shkruaj " << size << " numrat e ndare me space: ";
            nums.resize(size);
            for (int i = 0; i < size; ++i) {
                cin >> nums[i];
            }
            int result = arr2.numIdenticalPairs(nums);
            cout << "Rezultati: " << result << endl;
            break;
        }
        case 3: {
            //Array3
            cout << "Keni zgjedhur: How Many Numbers Are Smaller Than the Current Number\n\n";
            Array3 arr3;
            vector<int> nums;
            int size;
            cout << "Vendos madhesin e vektorit: ";
            cin >> size;
            cout << "Shkruaj " << size << " numrat e ndare me space: ";
            nums.resize(size);
            for (int i = 0; i < size; ++i) {
                cin >> nums[i];
            }
            vector<int> result = arr3.smallerNumbersThanCurrent(nums);
            cout << "Rezultati: ";
            for (int num : result) {
                cout << num << " ";
            }
            cout << endl;
            break;
        }
        case 4: {
            //Array4
            cout << "Keni zgjedhur: Count Pairs Whose Sum is Less than Target\n\n";
            Array4 arr4;
            vector<int> nums;
            int size;
            cout << "Vendos madhesin e vektorit: ";
            cin >> size;
            cout << "Shkruaj " << size << " numrat e ndare me space: ";
            nums.resize(size);
            for (int i = 0; i < size; ++i) {
                cin >> nums[i];
            }
            int target;
            cout << "Cakto targetin: ";
            cin >> target;
            int result = arr4.countPairs(nums, target);
            cout << "Rezultati: " << result << endl;
            break;
        }
        case 5: {
            //Array5
            cout << "Keni zgjedhur: Left and Right Sum Differences\n\n";
            Array5 arr5;
            vector<int> nums;
            int size;
            cout << "Vendos madhesin e vektorit: ";
            cin >> size;
            cout << "Shkruaj " << size << " numrat e ndare me space: ";
            nums.resize(size);
            for (int i = 0; i < size; ++i) {
                cin >> nums[i];
            }
            vector<int> result = arr5.leftRightDifference(nums);
            cout << "Rezultati: ";
            for (int num : result) {
                cout << num << " ";
            }
            cout << endl;
            break;
        }
        case 6: {
            //String1
            cout << "Keni zgjedhur: Defanging an IP Address\n\n";
            String1 str1;
            string address;
            cout << "Shkruaj IP adresen: ";
            cin >> address;
            string result = str1.defangIPaddr(address);
            cout << "Rezultati: " << result << endl;
            break;
        }
        case 7: {
            //String2
            cout << "Keni zgjedhur: Jewels and Stones\n\n";
            String2 str2;
            string jewels, stones;
            cout << "Cakto xhevahiret: ";
            cin >> jewels;
            cout << "Cakto guret: ";
            cin >> stones;
            int result = str2.numJewelsInStones(jewels, stones);
            cout << "Rezultati: " << result << endl;
            break;
        }
        case 8: {
            //String3
            cout << "Keni zgjedhur: Find Words Containing Character\n\n";
            String3 str3;
            vector<string> words;
            int size;
            cout << "Cakto madhesin e vektorit te fjalve: ";
            cin >> size;
            cout << "Shkruaj " << size << " fajle te ndara me space: ";
            words.resize(size);
            for (int i = 0; i < size; ++i) {
                cin >> words[i];
            }
            char x;
            cout << "Cakto shkronjen per te gjetur: ";
            cin >> x;
            vector<int> result = str3.findWordsContaining(words, x);
            cout << "Rezultati: ";
            for (int index : result) {
                cout << index << " ";
            }
            cout << endl;
            break;
        }
        case 9: {
            //String4
            cout << "Keni zgjedhur: Goal Parser Interpretation\n\n";
            String4 str4;
            string command;
            cout << "Cakto komanden: ";
            cin >> command;
            string result = str4.interpret(command);
            cout << "Rezultati: " << result << endl;
            break;
        }
        case 10: {
            //String5
            cout << "Keni zgjedhur: Decode the Message\n\n";
            String5 str5;
            string key, message;
            cout << "Cakto enkriptimin: ";
            cin >> key;
            cout << "Shkruaj mesazhin: ";
            cin >> message;
            string result = str5.decodeMessage(key, message);
            cout << "Rezultati: " << result << endl;
            break;
        }
        case 11: {
            //Math1
            cout << "Keni zgjedhur: Convert the Temperature\n\n";
            Math1 math1;
            double celsius;
            cout << "Shkruaj temperaturen ne celcius: ";
            cin >> celsius;
            vector<double> result = math1.convertTemperature(celsius);
            cout << "Rezultati: " << result[0] << " K, " << result[1] << " °F" << endl;
            break;
        }
        case 12: {
            //Math2
            cout << "Keni zgjedhur: Find the Maximum Achievable Number\n\n";
            Math2 math2;
            int num, t;
            cout << "Shkruaj numrin: ";
            cin >> num;
            cout << "Cakto t: ";
            cin >> t;
            int result = math2.theMaximumAchievableX(num, t);
            cout << "Rezultati: " << result << endl;
            break;
        }
        case 13: {
            //Math3
            cout << "Keni zgjedhur: Smallest Even Multiple\n\n";
            Math3 math3;
            int n;
            cout << "Shkruaj numrin: ";
            cin >> n;
            int result = math3.smallestEvenMultiple(n);
            cout << "Rezultati: " << result << endl;
            break;
        }
        case 14: {
            //Math4
            cout << "Keni zgjedhur: Divisible and Non-divisible Sums Difference\n\n";
            Math4 math4;
            int n, m;
            cout << "Shkruaj numrin e pare: ";
            cin >> n;
            cout << "Shkruaj numrin e dyte: ";
            cin >> m;
            int result = math4.differenceOfSums(n, m);
            cout << "Rezultati: " << result << endl;
            break;
        }
        case 15: {
            //Solution
            cout << "Keni zgjedhur: Add Two Integers\n\n";
            Solution solution;
            int num1, num2;
            cout << "Shkruaj numrin e pare: ";
            cin >> num1;
            cout << "Shkruaj numrin e dyte: ";
            cin >> num2;
            int result = solution.sum(num1, num2);
            cout << "Rezultati: " << result << endl;
            break;
        }
        case 16: {
            //Matrix1
            cout << "Keni zgjedhur: Richest Customer Wealth\n\n";
            Matrix1 mat1;
            vector<vector<int>> accounts;
            int numRows, numCols;
            cout << "Cakto numrin e rreshtave ne matric: ";
            cin >> numRows;
            cout << "Cakto numrin e shtyllave ne matric: ";
            cin >> numCols;
            cout << "Shkruaj elementet e matrices te ndara me space: ";
            accounts.resize(numRows, vector<int>(numCols));
            for (int i = 0; i < numRows; ++i) {
                for (int j = 0; j < numCols; ++j) {
                    cin >> accounts[i][j];
                }
            }
            int result = mat1.maximumWealth(accounts);
            cout << "Rezultati: " << result << endl;
            break;
        }
        case 17: {
            //Matrix2
            cout << "Keni zgjedhur: Largest Local Values in a Matrix\n\n";
            Matrix2 mat2;
            vector<vector<int>> grid;
            int numRows, numCols;
            cout << "Cakto numrin e rreshtave ne matric: ";
            cin >> numRows;
            cout << "Cakto numrin e shtyllave ne matric: ";
            cin >> numCols;
            cout << "Shkruaj elementet e matrices te ndara me space: ";
            grid.resize(numRows, vector<int>(numCols));
            for (int i = 0; i < numRows; ++i) {
                for (int j = 0; j < numCols; ++j) {
                    cin >> grid[i][j];
                }
            }
            vector<vector<int>> result = mat2.largestLocal(grid);
            cout << "Rezultati: " << endl;
            for (const auto& row : result) {
                for (int value : row) {
                    cout << value << " ";
                }
                cout << endl;
            }
            break;
        }
        case 18: {
            //Matrix3
            cout << "Keni zgjedhur: Matrix Diagonal Sum\n\n";
            Matrix3 mat3;
            vector<vector<int>> mat;
            int size;
            cout << "Cakto madhesin e matrices katrore: ";
            cin >> size;
            cout << "Shkruaj elementet e matrices te ndara me space: ";
            mat.resize(size, vector<int>(size));
            for (int i = 0; i < size; ++i) {
                for (int j = 0; j < size; ++j) {
                    cin >> mat[i][j];
                }
            }
            int result = mat3.diagonalSum(mat);
            cout << "Rezultati: " << result << endl;
            break;
        }
        case 19: {
            //Matrix4
            cout << "Keni zgjedhur: Delete Greatest Value in Each Row\n\n";
            Matrix4 mat4;
            vector<vector<int>> grid;
            int numRows, numCols;
            cout << "Cakto numrin e rreshtave ne matric: ";
            cin >> numRows;
            cout << "Cakto numrin e shtyllave ne matric: ";
            cin >> numCols;
            cout << "Shkruaj elementet e matrices te ndara me space: ";
            grid.resize(numRows, vector<int>(numCols));
            for (int i = 0; i < numRows; ++i) {
                for (int j = 0; j < numCols; ++j) {
                    cin >> grid[i][j];
                }
            }
            int result = mat4.deleteGreatestValue(grid);
            cout << "Rezultati: " << result << endl;
            break;
        }

        case 20: {
            //Matrix5
            cout << "Keni zgjedhur: Flipping an Image\n\n";
            Matrix5 mat5;
            vector<vector<int>> image;
            int numRows, numCols;
            cout << "Cakto numrin e rreshtave ne matric: ";
            cin >> numRows;
            cout << "Cakto numrin e shtyllave ne matric: ";
            cin >> numCols;
            cout << "Shkruaj elementet e matrices te ndara me space: ";
            image.resize(numRows, vector<int>(numCols));
            for (int i = 0; i < numRows; ++i) {
                for (int j = 0; j < numCols; ++j) {
                    cin >> image[i][j];
                }
            }

            vector<vector<int>> result = mat5.flipAndInvertImage(image);

            cout << "Matrica e pandryshuar:" << endl;
            for (int i = 0; i < numRows; ++i) {
                for (int j = 0; j < numCols; ++j) {
                    cout << image[i][j] << " ";
                }
                cout << endl;
            }

            cout << "Matrica e ndryshuar:" << endl;
            for (int i = 0; i < result.size(); ++i) {
                for (int j = 0; j < result[i].size(); ++j) {
                    cout << result[i][j] << " ";
                }
                cout << endl;
            }

            break;
        }
        default:
            cout << "E pavlefhsme. Ju lutem zedhni nje numer prej 1 deri 20." << endl;

        }
    } while (choice != 0);

    return 0;
}