/*
 * Complete the 'isBalanced' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string isBalanced(string s) {
int i;
string h;
int top=-1;
vector<int> s1;
int p=']',q='}',r=')';
for(int i=0;i<s.size();i++)
   { 
      if(s[0]==')'||s[0]=='}'||s[0]==']')
      s1.push_back(3);
      else if(s[i]=='('||s[i]=='['||s[i]=='{') {   
        s1.push_back(s[i]);
        top++;
    }
    else if(s1[s1.size()-1]-s[i]==-1  || s1[s1.size()-1]-s[i]==-2 ||s1[s1.size()-1]-s[i]==-2) {   
       s1.pop_back();
       top--; 
    }
    else { 
    top--;    
    }
   }
   
   if(s1.empty() && top==-1) {
       return "YES";
   }
   else {
       return "NO";
   }
}