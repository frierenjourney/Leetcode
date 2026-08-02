class Solution {
public:
    int distanceBetweenBusStops(vector<int>& distance, int start, int destination) {
        int a=0,b=0;
        if(start > destination)
        swap(start, destination);
        int i=start;
        while(i<destination){
            a+=distance[i];
            i++;
        }
        for(int i=0;i<distance.size();i++){
            b+=distance[i];
        }
        return min(a,b-a);
    }
};