#include <bits/stdc++.h>
using namespace std;

int main () {
       vector<int> nums = {2, 7, 11, 15};
       int target = 9;

       unordered_map<int, int> hash_map; //valor,índice

       for(int i = 0 ; i < nums.size() ; i++) {
              int complemento = target - nums[i];
              if(hash_map.count(complemento)) {
                     cout << "[" << hash_map[complemento] << ", " << i << "]" << "\n";
              }
              hash_map[nums[i]] = i;
       }
       cout << "Sem solução" << "\n";

       return 0;
}