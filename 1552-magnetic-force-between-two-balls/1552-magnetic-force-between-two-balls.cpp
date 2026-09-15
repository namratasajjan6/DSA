class Solution {
public:
    int canWePlace(vector<int>& position, int m,int mid){
        int cntCows=1;
        int last=position[0];
        for(int i=1;i<position.size();i++){
            if(position[i]-last >= mid){
                cntCows++;
                last=position[i];

            }
        }
        if(cntCows>=m)return true;
        return false;
    }
    int maxDistance(vector<int>& position, int m) {
        sort(position.begin(), position.end());
        int max = *max_element(position.begin(),position.end());
        int min = *min_element(position.begin(),position.end());
        int low=1;
        int high=max-min;
        int ans= max-min;

        while(low <= high){
            int mid= low +(high-low)/2;

            if(canWePlace(position,m,mid)== true){
                ans=mid;
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return (long long)ans;
    }
};