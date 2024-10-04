class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
       sort(skill.begin(),skill.end());
        int n = skill.size();
        
        int j = n-1;
        int tskill=0;
        long long sum=0;
        for(int i=0;i<n/2;i++){
            int nskill=skill[i]+skill[j];
            if(i==0){
                tskill=nskill;
                
            }
           
            if(nskill!=tskill){
                return -1;
            }
            sum+=(long long)skill[i]*skill[j];
                
            j--;

        }
        return sum;
    }
};
TC: O(nlogn)
SC: O(1)

  
