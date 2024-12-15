#include<iostream>
#include<vector>
#include<stdlib.h>
#include<stdio.h>

using namespace std;

class Solution {
public:
    bool isPalindrome(int n){
        vector<int> digits;

        if(n < 0) {
            return false;
        }
        
        if(n == 0) {
            return true;
        }
        
        for(; n > 0; n /= 10){
            digits.push_back(n % 10);
        }

        for(int i = 0; i < digits.size() / 2; ++i){
            int leftDigit = i;
            int rightDigit = digits.size() - i - 1;

            if(digits[leftDigit] != digits[rightDigit]){
                return false;
            }
        }

        return true;
    }
};

int main(){
    Solution a;
    bool res = a.isPalindrome(1221);
    if(res){
        cout << "Is palindrome";
    } else {
        cout << "Is not palindrome";
    }
    return 0;
}