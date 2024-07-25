#include<bits/stdc++.h>
using namespace std;
vector<int> bracketNumbers(string str){
    stack<int>st;
    vector<int>ans;
    int count=0;
    for(int i=0; i<str.size(); i++){
        if(str[i]=='('){
            count++;
            st.push(count);
            ans.push_back(count);
        }
        else if(str[i]==')'){
            ans.push_back(st.top());
            st.pop();
        }
    }
    return ans;
}
int main(){
   // string str = "(aa(bdc))p(dee)";
    //string str="(((()(";
    string str="((g)n(f)(x)((((l)(z(q)bu)))(u())(((ze)))()()oy(()g))s(k(m))(dqqk(()()hj((s)l)bv((w)((((d)))((y))()i)u)vv((rbru())(qka(v)zzbm))j((((v)((ysv(r((iuoxrjs)ngfb)))n()d(((()(()o()j((wg(e(eofn((f)r)b)wyt(cr)(()((ik((((fs((e))n)b((()(ue(xylc()((xr((cq)yl)hx())o(p())))))t(nv(t)()o(rm())z()(iq((t()))()op)(()((g))jl(zfi((()()f)(q))))))))(g()p)()))acq(p((x(((((p()(())e(())u)(q(((k)d()))(n)(b))(b((qgdfsdq)(yxy((z(()))))amy)))h(avo(()e))((()(f)yx(z)((cc(((a(";
    vector<int>ans=bracketNumbers(str);
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}
/*
Given a string str, the task is to find the bracket numbers, i.e., for each bracket in str, return i if the bracket is the ith opening or closing bracket to appear in the string. 

 Examples:

Input:  str = "(aa(bdc))p(dee)"
Output: 1 2 2 1 3 3
Explanation: The highlighted brackets in
the given string (aa(bdc))p(dee) are
assigned the numbers as: 1 2 2 1 3 3.
Input:  str = "(((()("
Output: 1 2 3 4 4 5
Explanation: The highlighted brackets in
the given string (((()( are assigned
the numbers as: 1 2 3 4 4 5
Expected Time Complexity: O(|str|)
Expected Auxiliary Space: O(|str|)

Constraints:
1 <= |str| <= 105
str contains lowercase English alphabets, and '(', ')' characters
At any index, the number of opening brackets is greater than or equal to closing brackets


*/