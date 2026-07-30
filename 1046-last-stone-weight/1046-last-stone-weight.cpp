class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        int x=0;
        while(stones.size()>1){
            sort(stones.begin(),stones.end(),greater<int>());
            x = abs(stones[0]-stones[1]);
            stones.erase(stones.begin());
            stones.erase(stones.begin());
            if(x!=0)
            stones.push_back(x);
        }
        if (stones.empty()) {
            return 0;
            } 
        else {
        return stones[0];
        }
    }
};