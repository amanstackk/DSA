#include<iostream>
#include<utility>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<pair<int, int>> intervals = {
    {8, 10}, {1, 3}, {2, 6}, {17, 20}, {15, 18}
};
    sort(intervals.begin(), intervals.end());
    for(int i=0;i<intervals.size()-1;i++){
        if(intervals[i].first > intervals[i].second){
            cout<<"Invalid interval: "<<intervals[i].first<<", "<<intervals[i].second<<endl;
            return 0;
        }
        if(intervals[i].second>=intervals[i+1].first){
            intervals[i].second = intervals[i+1].second;
            intervals.erase(intervals.begin() + i + 1);
        i--;
        }
    }
    for(int i=0;i<intervals.size();i++){
        cout<<"("<<intervals[i].first<<", "<<intervals[i].second<<") "<<endl;
    }
    return 0;
}