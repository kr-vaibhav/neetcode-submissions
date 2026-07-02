class TimeMap {
    unordered_map<string, vector<pair<string,int>>>mp;
public:
    TimeMap() {
        
    }
    
    void set(string key, string value, int timestamp) {
        mp[key].push_back({value, timestamp});
    }
    
    string get(string key, int timestamp) {
        vector<pair<string,int>>arr = mp[key];

        string ans = "";
        int i = 0, j = arr.size() - 1;

        while(i <= j ){
            
            int mid = i + (j - i)/2;

            if(  arr[mid].second == timestamp ){
                ans = arr[mid].first;
                i = mid + 1;
            } 
            else if( arr[mid].second <= timestamp ){
                ans = arr[mid].first;
                i = mid + 1;
            }else{
                j = mid - 1;
            }
        }

        return ans;
    }
};
