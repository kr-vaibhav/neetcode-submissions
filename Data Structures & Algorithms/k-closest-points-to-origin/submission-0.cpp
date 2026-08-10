class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue< pair<double, pair<int,int> > > maxh;
        for( vector<int> arr : points ){
            int i = arr[0];
            int j = arr[1];
            double dist = i*i + j*j ;
            maxh.push( { dist, { i, j } } );
            if( maxh.size() > k )maxh.pop();
        }

        vector<vector<int>>ans;
        while( maxh.size() > 0 ){
            ans.push_back( { maxh.top().second.first, maxh.top().second.second });
            maxh.pop();
        }
        return ans;
    }
};
