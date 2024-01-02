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
        if (n % 2 != 0){
            ans = n * 2;
        }else{
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
            } else {
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