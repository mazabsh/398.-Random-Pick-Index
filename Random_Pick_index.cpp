#include<iostream> 
#include<vector> 
#include<unordered_map> 

using namespace std; 

class Solution{
public: 
     unordered_map<int, vector<int>> mp; 
     Solution(vector<int>& nums){
       for(int i=0; i<nums.size(); ++i){
         mp[nums[i]].push_back(i); 
       }
     }
     int pick(int target){
       auto&  indices = mp[target]; 
       return indices[rand()%indices.size()]; 
     }
};
int main(){
  vector<int> nums = {1,2,3,3,3}; 
  Solution solution(nums); 
  for (int i = 0; i < 5; ++i) {
        int index = solution.pick(3);
        cout << "Pick " << i + 1 << ": index = " << index << ", value = " << nums[index] << endl;
    }

    return 0;

}
