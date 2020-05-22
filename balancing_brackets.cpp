string isBalanced(string s) {

stack<char> t;

for(int i = 0; i < s.length(); i++){
    if(s[i] == '{' || s[i] == '(' || s[i]== '['){
        t.push(s[i]);
    } 

    if(t.size()== 0){
        return "NO";
    }

    if (s[i]=='}'){
        if(t.top() == '{'){
            t.pop();
        } else{
            return "NO";
        }
    }
    else if (s[i]==')'){
        if(t.top() == '('){
            t.pop();
        } else {
            return "NO";
        }
    }
    else if (s[i]==']'){
        if(t.top()=='['){
            t.pop();
        } else {
            return "NO";
        }
    }
}
if(t.size()==0){
    return "YES";
} else {
    return "NO";
}

}
