//Build Array from Permutation
class Array1 {
public:
    vector<int> buildArray(vector<int>& nums) {

        int n = nums.size();

        for(int i = 0; i < n; i++){
            nums[i] = nums[i] + (n * (nums[nums[i]] % n));
        }

        for(int i = 0;i < n; i++){
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

        for(int i = 0; i < n; i++){
            for(int j = 1; j < n; j++){
                if(nums[i] == nums[j] && i < j){
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

        for(int i = 0; i < n; i++){
            returnVector.push_back(0);
        } 

        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(nums[j] != nums[i] && nums[j] < nums[i]){
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

        for(int i = 0; i < n; i++){
            for(int j = i + 1; j < n; j++){
                if(nums[i] + nums[j] < target){
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

        for(int i = 0, left = 0; i < n; i++){
            right -= nums[i];
            ans.push_back(abs(left - right));
            left += nums[i]; 
        }
        return ans;
    }
};