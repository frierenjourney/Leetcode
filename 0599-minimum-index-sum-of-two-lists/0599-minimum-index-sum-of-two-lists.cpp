class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
    vector<string> x;   
    int y = INT_MAX; 
    for(int i=0;i<list1.size();i++){
        for(int j=0;j<list2.size();j++){
            if((i+j)<=y){
            if (list1[i] == list2[j]) {

            if (i + j < y) {
            x.clear();
            x.push_back(list1[i]);
            y = i + j;
            }
            else if (i + j == y) {
            x.push_back(list1[i]);
            }
        }
        }
    }
    }
    return x;
    }
};