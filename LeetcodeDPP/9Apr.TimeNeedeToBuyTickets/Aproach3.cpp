//Approach-3 (Using simple observation)
//T.C : O(n)
//S.C : O(1)
class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        int time =0;

        for(int i=0;i<tickets.size();i++) {
            int currentTime;
            if(i<=k)
                currentTime = min(tickets[i] , tickets[k]);
            else if(i>k)  {
                if(tickets[i] < tickets[k] ) currentTime = min(tickets[i] , tickets[k]);
                else currentTime = tickets[k] - 1;
            }
                
            time += currentTime;
        }
        return time;
    }
};