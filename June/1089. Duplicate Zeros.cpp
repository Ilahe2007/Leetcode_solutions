class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        vector<int>v;
        for(int i=0;i<arr.size();i++){
            if(arr.size()>v.size()){
                if(arr[i]==0){
                    v.push_back(arr[i]);
                    v.push_back(arr[i]);
                }else{
                    v.push_back(arr[i]);
                }
            }else{
                break;
            }
        }int a=v.size();
        if(v.size()>arr.size()){
            a=arr.size();
        }arr.clear();
        for(int i=0;i<a;i++){
            arr.push_back(v[i]);
        }return ;
    }
};
