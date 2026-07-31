class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> s;

        for(const string& op: operations)
        {
            if(op == "+")
            {
                int top1 = s.top();
                s.pop();
                int top2 = s.top();
                s.push(top1);
                s.push(top1 + top2);
            }
            else if(op == "D")
            {
                s.push(2*s.top());
            }
            else if(op == "C")
            {
                s.pop();
            }
            else
            {
                s.push(stoi(op));
            }
        }
        int total = 0;
        while(!s.empty())
        {
            total+=s.top();
            s.pop();
        }
        return total;
    }
};