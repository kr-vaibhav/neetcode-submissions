class Twitter {
    unordered_map<int, unordered_set<int> >mp;
    priority_queue< pair< int, pair< int, int> > >pq;
    int time = 0;
public:
    Twitter() {
        
    }
    
    void postTweet(int userId, int tweetId) {
        pq.push( { ++time, { userId, tweetId } } );
    }
    
    vector<int> getNewsFeed(int userId) {
        priority_queue< pair< int, pair< int, int> > > temp = pq;
        vector<int>ans;

        while( ! temp.empty() && ans.size() < 10 ){
            int usrId = temp.top().second.first;
            int twtId = temp.top().second.second;
            temp.pop();

            if( userId == usrId || mp[ userId ].find( usrId ) != mp[ userId ].end() ){
                ans.push_back( twtId );
            }
        }

        return ans;
    }
    
    void follow(int followerId, int followeeId) {
        
        if( mp.find( followerId) == mp.end() ){
            mp[ followerId ].insert( followeeId );
        }else{
            if( mp[ followerId ].find( followeeId ) == mp[ followerId ].end() ){
                mp[ followerId ].insert( followeeId );
            }
        }
    }
    
    void unfollow(int followerId, int followeeId) {
        mp[ followerId ].erase( followeeId );
    }
};
