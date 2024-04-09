class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        queue<pair<int,int>> que;
        int time = 0;

        for(int i=0;i<tickets.size();i++) {
            que.push({i,tickets[i]});
        }

        while(1) {
            int ind = que.front().first;
            int ticket = que.front().second;
            que.pop();
            if(ind == k && ticket-1 == 0 ) return time+1;
            else if(ticket != 0) {
                que.push({ind,ticket-1});
                time++;
            }
        }
        return time;
    }
};