//
//  main.cpp
//  算法
//
//  Created by wangjianlong on 2019/2/14.
//  Copyright © 2019 wangjianlong. All rights reserved.
//

#include <iostream>
#include <vector>
#include <map>

using namespace std;

/*
 //给定一个整数数组 nums 和一个目标值 target，请你在该数组中找出和为目标值的那 两个 整数，并返回他们的数组下标。
 //
 //你可以假设每种输入只会对应一个答案。但是，你不能重复利用这个数组中同样的元素。
 */
vector<int> twoSum(vector<int>& nums, int target) {
    vector<int> v1;
    for (int i = 0; i < nums.size(); i++) {
        for (int j = i + 1; j < nums.size(); j++) {
            if (nums[i] + nums[j] == target) {
                v1.push_back(i);
                v1.push_back(j);
                break;
            }
        }
    }
    return v1;
};

vector<int> twoSum_hash(vector<int>& nums, int target) {
    vector<int> v1;
    map<int,int> tmpMap;
    for (int i = 0; i<nums.size(); i++) {
        tmpMap.insert(map<int, int>::value_type(nums[i],i));
    }
    
    for (int i = 0; i < nums.size(); i++) {
        int tmp = target - nums[i];
        map<int,int>::iterator iter = tmpMap.find(tmp);
        if (iter != tmpMap.end() && iter->second != i) {
            v1.push_back(i);
            v1.push_back(iter->second);
            break;
        }
    }
    return v1;
};
/*
 给出两个 非空 的链表用来表示两个非负的整数。其中，它们各自的位数是按照 逆序 的方式存储的，并且它们的每个节点只能存储 一位 数字。
 
 如果，我们将这两个数相加起来，则会返回一个新的链表来表示它们的和。
 
 您可以假设除了数字 0 之外，这两个数都不会以 0 开头。
 
 示例：
 
 输入：(2 -> 4 -> 3) + (5 -> 6 -> 4)
 输出：7 -> 0 -> 8
 原因：342 + 465 = 807
 */
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    if (l1 == NULL) {
        return l2;
    }
    if (l2 == NULL) {
        return l1;
    }
    ListNode *sumNode = new ListNode(0);
    ListNode *headNode = sumNode;
    int carry = 0;
    while (l1 != NULL || l2 != NULL) {
        int x = (l1 != NULL) ? l1->val : 0;
        int y = (l2 != NULL) ? l2->val : 0;
        int sum = carry + x + y;
        carry = sum / 10;
        sumNode->next = new ListNode(sum%10);
        sumNode = sumNode->next;
        if (l1 != NULL) l1 = l1->next;
        if (l2 != NULL) l2 = l2->next;
    }
    if (carry > 0) {
        sumNode->next = new ListNode(carry);
    }
    return headNode->next;
}

/*给定一个字符串，请你找出其中不含有重复字符的 最长子串 的长度。*/
int lengthOfLongestSubstring(string s) {
    if (s.empty()) {
        return 1;
    }
    //定义了一个string类型的迭代器ite，迭代器就相当于一个指针，一个string类型的迭代器就是一个指向string对象元素的char *指针，本质就是char *指针，用法也跟指针一样
    
//    string::iterator iter = s.begin();
    int maxLength = 0;
    int tmp = 1;
    for (size_t i = 0; i < s.size(); i++) {
        tmp = 1;
        for (size_t j = i+1; j<=s.size(); j++) {
            string subStr = s.substr(i,tmp);
            maxLength = maxLength < subStr.length() ? subStr.length(): maxLength;
            if (j < s.size()) {
                if (subStr.find(s.at(j),0) != string::npos){
                    
                    break;
                }
            }
            
            tmp ++;
        }
        
    }
    return maxLength;
}

int char_lengthOfLongestSubstring(string s) {
    if (s.empty()) {
        return 1;
    }
    //定义了一个string类型的迭代器ite，迭代器就相当于一个指针，一个string类型的迭代器就是一个指向string对象元素的char *指针，本质就是char *指针，用法也跟指针一样
    
    //    string::iterator iter = s.begin();
    int maxLength = 0;
    int tmp = 1;
    for (size_t i = 0; i < s.size(); i++) {
        tmp = 1;
        for (size_t j = i+1; j<=s.size(); j++) {
            string subStr = s.substr(i,tmp);
            maxLength = maxLength < subStr.length() ? subStr.length(): maxLength;
            if (j < s.size()) {
                if (subStr.find(s.at(j),0) != string::npos){
                    
                    break;
                }
            }
            
            tmp ++;
        }
        
    }
    return maxLength;
}

int main(int argc, const char * argv[]) {
//    vector<int>sourceArray{2,7,11,15};
//    int target = 9;
//    vector<int>v = twoSum_hash(sourceArray,target);
//    cout << v[0] << " " << v[1] << endl;
    
    string s = string("");
    cout << lengthOfLongestSubstring(s) << endl;
    
    return 0;
}
