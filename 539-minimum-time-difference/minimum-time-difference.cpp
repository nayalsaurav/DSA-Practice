class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        vector<int>time;
        for(auto s:timePoints){
            int hh = stoi(s.substr(0,2))*60;
            int mm = stoi(s.substr(3,2));
            time.push_back(mm+hh);
        }
        sort(time.begin(),time.end());
        int minTime = INT_MAX;
        for(int i=0;i<time.size()-1;i++){
            for(int j=i+1;j<time.size();j++){
            int diff1 = abs(time[i]-time[j]);
            int diff2 = abs(time[i]+1440-time[j]);
            // cout<<diff1<<" "<<diff2<<endl;
            minTime = min(minTime,min(diff1,diff2));
            }
        }
        return minTime;
    }
};