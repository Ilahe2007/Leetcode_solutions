class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        vector<pair<int,string>>v;
        vector<string>g;
        for(int i=0;i<names.size();i++){
            v.push_back(make_pair(heights[i],names[i]));
        }sort(v.begin(),v.end());
        reverse(v.begin(),v.end());
        for(int i=0;i<v.size();i++){
            g.push_back(v[i].second);
        }return g;
}

};
