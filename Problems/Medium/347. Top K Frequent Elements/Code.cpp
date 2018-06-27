class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        if(nums.empty()){
            return nums;
        }
        //sort(nums.begin(),nums.end());
        vector<int> result;
        unordered_multiset<int> hash;
        set<int> set;
        //insert into hash table
        for(vector<int>::iterator it=nums.begin();it!=nums.end();it++){
            hash.insert(*it);
        }
        //insert into set
        for(vector<int>::iterator it=nums.begin();it!=nums.end();it++){
            set.insert(*it);
        }
        
        unsigned nbuckets = hash.bucket_count();

//         std::cout << "myums has " << nbuckets << " buckets:\n";

//         for (unsigned i=0; i<nbuckets; ++i) {
//             std::cout << "bucket #" << i << " has " << hash.bucket_size(i) << " elements.\n";
//             //std::cout << "bucket #" << i << " value is " << hash.bucket(i) << "\n";
//         }
        
        int temp=0;
        int value = 0;
        for(int i=0;i<k;i++){

            for(std::set<int>::iterator it = set.begin();it!=set.end();it++){
                //cout<<*it<<" appears "<<hash.count(*it)<<" times"<<endl;
                if(hash.count(*it)>temp){
                    temp = hash.count(*it);
                    value=*it;
                }
            }
            cout<<value<<" appears "<<temp<<" times"<<endl;
            result.push_back(value);
            set.erase(value);
            temp=0;
            value=0;
            
        }
        return result;
        
        
        
        
    }
};
