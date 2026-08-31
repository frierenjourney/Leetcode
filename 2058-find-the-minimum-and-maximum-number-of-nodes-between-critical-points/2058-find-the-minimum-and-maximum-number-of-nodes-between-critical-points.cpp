class Solution {
public:
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {

        vector<int> critical;

        ListNode* prev = head;
        ListNode* curr = head->next;

        int pos = 1;

        while(curr->next != nullptr) {

            ListNode* next = curr->next;

            if((prev->val > curr->val && curr->val < next->val) ||
               (prev->val < curr->val && curr->val > next->val)) {
                
                critical.push_back(pos);
            }

            prev = curr;
            curr = next;
            pos++;
        }

        if(critical.size() < 2)
            return {-1, -1};

        int mini = INT_MAX;

        for(int i = 1; i < critical.size(); i++) {
            mini = min(mini, critical[i] - critical[i-1]);
        }

        int maxi = critical[critical.size() - 1] - critical[0];

        return {mini, maxi};
    }
};