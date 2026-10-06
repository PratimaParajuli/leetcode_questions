class Solution {
public:
    long long countIntersectingIntervals(vector<vector<int>>& intervals) {

        int n = intervals.size();

        vector<int>s(n);
        vector<int>e(n);

        for (int i =0; i<n; i++){
            s[i] = intervals[i][0];
            e[i] = intervals[i][1];
        }
    sort(s.begin(),s.end());
    sort(e.begin(),e.end());

    long long count = 0;
    int j = 0;

    for (int i =0;i<n;i++){
    while (j <n&&e[j]<s[i]){
        j++;
    }
      count +=i-j;
    }
    return count;
        
    }
};