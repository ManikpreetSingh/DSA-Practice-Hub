//Question link https://www.geeksforgeeks.org/problems/parenthesis-checker2744/0

//Ques  Given an expression string x. Examine whether the pairs and the orders of {,},(,),[,] are correct in exp.
// For example, the function should return 'true' for exp = [()]{}{[()()]()} and 'false' for exp = [(]).
// Note: The drive code prints "balanced" if function return true, otherwise it prints "not balanced".

   public:
    //Function to check if brackets are balanced or not.
    bool ispar(string expr)
    {
        // Your code here
        
        stack<char>temp;
        for (int i = 0; i < expr.length(); i++) {
        if (temp.empty()) {
             
            // If the stack is empty 
            // just push the current bracket
            temp.push(expr[i]);
        }
        else if ((temp.top() == '(' && expr[i] == ')')
                 || (temp.top() == '{' && expr[i] == '}')
                 || (temp.top() == '[' && expr[i] == ']')) {
             
            // If we found any complete pair of bracket
            // then pop
            temp.pop();
        }
        else {
            temp.push(expr[i]);
        }
    }
    if (temp.empty()) {
         
        // If stack is empty return true
        return true;
    }
    return false;
    }
