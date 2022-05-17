
class Solution
{
public:
    bool isValid(string s)
    {
       stack<char> stack;
      
        for(auto i:s){
            if(i=='(' or i=='{' or i=='['){
                stack.push(i);
            }
            else{
                if(stack.empty() or (stack.top()=='(' and i!=')') or (stack.top()=='{' and i!='}') or (stack.top()=='[' and i!=']')){
                    return false;
                }
                else stack.pop();
            }
        }
        return stack.empty()?true:false;
    }
};
