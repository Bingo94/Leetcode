#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> map;  // key = desired number, value = paired index
        for (int i = 0; i < nums.size(); i++) {
            int val = nums[i];
            auto iter = map.find(val);
            if (iter != map.end()) {
                // Found! Return the previously-stored index and current index.
                return vector<int> {iter->second, i};
            }
            map[target - val] = i;
        }
    }
};
int main()
{
    vector<int> numinput={9,2,3,4};
    class Solution sol;
    int tar=13;
    vector<int> res=sol.twoSum(numinput,tar);
    cout << "Hello world!" << endl;
    cout<<res.at(0)<<endl;
    cout<<res.at(1)<<endl;
    return 0;
}
