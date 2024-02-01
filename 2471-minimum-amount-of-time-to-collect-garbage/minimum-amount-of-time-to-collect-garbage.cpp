class Solution {
public:
    // step 1 : calculate pick up time and the last house index to pick garbage from for each type.
    // step 2: using last house index of each type of garbage we calculte travel time.
    // step 3: we finalize our ans using pick up time and travel time.

    //t.c O(n*m)
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        
        int pickP=0;
        int pickG=0;
        int pickM=0;

        int travelP=0;
        int travelG=0;
        int travelM=0;

        int lastP=0;
        int lastG=0;
        int lastM=0;

        //calculate pick time and travel time 
        for(int i=0;i<garbage.size();i++){
            string curr =garbage[i];

            for(auto ch:curr){
                if(ch=='P'){
                    pickP++;
                    lastP=i;;
                }
                else if(ch=='G'){
                    pickG++;
                    lastG=i;
                }
                else if(ch=='M'){
                    pickM++;
                    lastM=i;
                }
            }
        }

        //travel time
        for(int i=0;i<lastP;i++){
            travelP+=travel[i];
        }
        for(int i=0;i<lastG;i++){
            travelG+=travel[i];
        }
        for(int i=0;i<lastM;i++){
            travelM+=travel[i];
        }
        int finalAns = (pickP+travelP)+(pickG+travelG)+(pickM+travelM);
        return finalAns;
    }
};