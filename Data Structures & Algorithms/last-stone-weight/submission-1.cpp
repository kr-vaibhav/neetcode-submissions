class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int>pq;
        for( int num : stones )pq.push( num );
        while( pq.size() > 1 ){
            int n1,n2;
            n1 = pq.top();
            pq.pop();
            if( pq.size() > 0 )n2 = pq.top();
            pq.pop();

            n1 = n1-n2;
            if( n1 > 0 )pq.push( n1 );
        }

        return pq.size() > 0 ? pq.top() : 0;

    }
};
