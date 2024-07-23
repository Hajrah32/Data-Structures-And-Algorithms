#include<bits/stdc++.h>
using namespace std;
bool isValid(string s){
    stack<char>st;
    int i=0;
    while(i<s.size()){
        if(s[i]=='(' || s[i]=='[' || s[i]=='{'){
            st.push(s[i]);
        }
        else{
            if(st.empty()){
                return 0;
            }
            else if((s[i]==']' && st.top()!='[')  || (s[i]=='}' && st.top()!='{') || (s[i]==')' && st.top()!='(')){
            
                return 0;
            }
            else{
                st.pop();
            }
        }
        i++;
    }
    
    if(st.empty())
        return 1;
    else{    
        cout<<st.top()<<endl;
        return 0;
    }
}
int main(){
    string str="({[]}))";
    cout<<isValid(str);
    return 0;
}
/*

Tom is a string freak. He has got sequences of  n words to manipulate. If in a sequence, two same words come together then hell destroy each other. He wants to know the number of words left in the sequence after this pairwise destruction.
 

Example 1:

Input:
5
v[] = {"ab", "aa", "aa", "bcd", "ab"}
Output:
3
Explanation:
ab aa aa bcd ab
After the first iteration, we'll have: ab bcd ab
We can't further destroy more strings and
hence we stop and the result is 3. 
 

Example 2:

Input:
4
v[] = {"tom", "jerry", "jerry", "tom"}
Output:
0
Explanation:
tom jerry jerry tom
After the first iteration, we'll have: tom tom
After the second iteration: 'empty-array' 
Hence, the result is 0. 

 

Your Task:  
You don't need to read input or print anything. Your task is to complete the function removeConsecutiveSame() which takes the array A[] and its size N as inputs and returns the number of words left per sequence.

 

Expected Time Complexity: O(N)
Expected Auxiliary Space: O(N)


Constraints:
1 ≤ N ≤ 100
1 ≤ |Si| ≤ 50
*/