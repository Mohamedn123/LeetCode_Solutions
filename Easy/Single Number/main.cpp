//
//  main.cpp
//  Single Number
//
//  Created by Mohamed Nashaat on 10/5/20.
//  Copyright © 2020 Tera Coding. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;
int singleNumber(vector<int> &nums){
    int Number = -1;
    vector<bool> Visited(nums.size() , false);
    for (int x=0; x<nums.size(); x++){
        if (!Visited[x]){
            for (int y= x+1; y<nums.size(); y++){
                if (nums[x] == nums[y]){
                    Visited[x] = true;
                    Visited[y] = true;
                    break;
                }
            }
            if (!Visited[x]){
                Number = nums[x];
                break;
            }
        }
    }
    
    
    return Number;
}

int main(int argc, const char * argv[]) {
    vector<int> Numbers;
    Numbers.push_back(1);
    Numbers.push_back(2);
    Numbers.push_back(3);
    Numbers.push_back(2);
    Numbers.push_back(1);
    Numbers.push_back(1);
    Numbers.push_back(5);
    Numbers.push_back(5);
    Numbers.push_back(6);
    Numbers.push_back(6);
    cout<<singleNumber(Numbers)<<endl;
    return 0;
}
