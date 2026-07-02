class TimeMap {
    unordered_map<string, vector<pair<string,int>>>mp;
public:
    TimeMap() {
        
    }
    
    void set(string key, string value, int timestamp) {
        if( mp.find(key) != mp.end() ){
            mp[key].push_back({value, timestamp});
        }else{
            mp[key].push_back({value, timestamp});
        }
    }
    
    string get(string key, int timestamp) {
        vector<pair<string,int>>arr = mp[key];

        string ans = "";
        for( pair<string,int> it : arr ){
            string st = it.first;
            int time = it.second;
            if( time<= timestamp ){
                ans = st;
            }else{
                break;
            }
        }

        return ans;
    }
};
