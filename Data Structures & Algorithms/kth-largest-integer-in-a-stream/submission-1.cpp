class KthLargest {

    int size = 0;
    priority_queue<int, vector<int>, greater<int>>pq;

public:
    KthLargest(int k, vector<int>& nums) {

        size = k;
        for( int num : nums )pq.push( num );
    }
    
    int add(int val) {
        
        pq.push( val );
        
        while( pq.size() > size )pq.pop();

        if( pq.size() > 0 )return pq.top();
        return -1;
    }
};
