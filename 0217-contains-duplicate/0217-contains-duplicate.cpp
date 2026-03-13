#include <unordered_set> // Yeh hasing ke liye use krunga for unsorted elements
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {  //vector<int> yeh ek dynamic array & pass by reference
        unordered_set<int> seen; // optimised way more than unordered map

        for(int num : nums){
            if(seen.count(num)){ // If the element if found Mai return krdunga 
                return true;
            }
            seen.insert(num); // seen i used to prevent duplicates 
        }
        return false; // element nhi mila 
        
    }
};