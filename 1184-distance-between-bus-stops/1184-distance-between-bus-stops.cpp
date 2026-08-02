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
        i = destination;
        while(i != start){
        b += distance[i];
        i = (i + 1) % distance.size();
        }
        return min(a,b);
    }
};