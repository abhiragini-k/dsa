class Solution {
public:
    bool isValid(string s) {
        stack<char> ob;
        for(char c:s){
            if(c=='(' || c=='{' || c=='[') ob.push(c);
            else{
                if(ob.empty()) return false;
                if(c==')' && ob.top()=='(') ob.pop();
                else if(c=='}' && ob.top()=='{') ob.pop();
                else if(c==']' && ob.top()=='[') ob.pop();
                else return false;
            }
        }
        return ob.empty();
    }
};