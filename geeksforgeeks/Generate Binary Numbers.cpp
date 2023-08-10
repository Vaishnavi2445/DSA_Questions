//Function to generate binary numbers from 1 to N using a queue.
vector<string> generate(int N)
{
    queue<string>Q;
    vector<string>A;
    Q.push("1");
    string s1;
    while(N--){
        string s1 = Q.front();
        Q.pop();
       A.push_back(s1);
        
        string s2 = s1;
        Q.push(s1.append("0"));
        Q.push(s2.append("1"));
        
        
    }
    return A;
}
