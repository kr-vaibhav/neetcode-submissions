class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        int n = position.size();

        vector<pair<int, double>> cars;
        for (int i = 0; i < n; i++) {
            cars.push_back({position[i], (double)(target - position[i]) / speed[i]});
        }

        sort(cars.begin(), cars.end()); // sort by position ascending

        int fleets = 0;
        double maxTime = 0;

        for (int i = n - 1; i >= 0; i--) {
            double t = cars[i].second;

            if (t > maxTime) {
                fleets++;
                maxTime = t;
            }
        }

        return fleets;
    }
};
