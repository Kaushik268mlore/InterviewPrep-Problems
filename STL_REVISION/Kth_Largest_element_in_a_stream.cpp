// https://leetcode.com/problems/kth-largest-element-in-a-stream/
class KthLargest {
public:
    //multiset<int>arr;
    //instead using a min-heap would suffice
    int MAX;
    priority_queue<int,vector<int>,greater<int>>pq;
    KthLargest(int k, vector<int>& nums) {
        MAX=k;
        for(int i=0;i<size(nums);i++){
            pq.push(nums[i]);
            if(pq.size()>k)pq.pop();
        }
    }
    
    int add(int val) {
    pq.push(val);
        if(pq.size()>MAX)pq.pop();
        return pq.top();
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */