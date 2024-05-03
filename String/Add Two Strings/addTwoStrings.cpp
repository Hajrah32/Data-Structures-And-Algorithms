#include<bits/stdc++.h>
using namespace std;
string addStrings(string num1, string num2);
int main()
{   
    //string num1 = "11", num2 = "123";
    //string num1 = "456", num2 = "77";
    //string num1="26583", num2="698";
    string num2="26583", num1="698";
    cout<<addStrings(num1,num2);
    return 0;
    
}
string addStrings(string num1, string num2){
    int i=num1.length()-1, j=num2.length()-1;
    string ans;
    int carry=0;
    int temp;
    while(i>=0 && j>=0){
            temp=(num1[i] - '0') + (num2[j] - '0') + (carry);
            carry=temp/10;
            ans.push_back((temp%10) + '0');
        i--;
        j--;
    }
    while(i>=0){
        temp=(num1[i] - '0') + (carry);
        carry=temp/10;
        ans.push_back(((temp%10) + '0'));
        i--;
    }
    while(j>=0){
        temp=(num2[j] - '0') + (carry);
        carry=temp/10;
        ans.push_back(((temp%10) + '0'));
        
        j--;
    }
    if(carry!=0){
        ans.push_back((carry +'0'));
    }
    int start=0, end=ans.length()-1;
    while(start<end){
        swap(ans[start],ans[end]);
        start++;
        end--;
    }
    return ans;
}