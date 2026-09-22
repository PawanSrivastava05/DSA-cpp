#include <iostream>
#include <vector>
#include <algorithm> 

using namespace std;

int majorityElement(vector<int>& nums) {
    int n = nums.size();
    
   if (n == 1) return nums[0];

    sort(nums.begin(), nums.end());
    
    int freq = 1;
    for (int i = 1; i < n; i++) {
        if (nums[i] == nums[i - 1]) {
            freq++;
        } else {
            freq = 1; 
        }
        if (freq > n / 2) {
            return nums[i];
        
    }}
    
       return nums[0]; 
}


int main() {
    vector<int> nums = {2, 2, 1, 1, 1, 2, 2}; 
    
    int result = majorityElement(nums);
    
    cout << " Majority element is: " << result << endl;
    
    return 0;
}
