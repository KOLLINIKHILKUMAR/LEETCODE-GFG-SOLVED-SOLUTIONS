class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) 
    {
        map<string,int> m;
        vector<string> s={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        vector<string> res;
        string temp="";
        for(int i=0;i<words.size();i++)
        {
            temp="";
            for(int j=0;j<words[i].size();j++)
            {
                temp=temp+s[int(words[i][j])-97];
            }
            cout<<temp<<";";
            m[temp]++;
        }
        return m.size();   
    }
};