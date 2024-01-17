class TimeMap {
public:
     map<string, map<int,string> >mapping ;
    TimeMap() {
       
    }
    
    void set(string key, string value, int timestamp) {
        mapping[key][timestamp]=value;
    }
    
    string get(string key, int timestamp) {
        
        string ans=mapping[key][timestamp];
        if(ans==""){
            for(int i=timestamp-1;i>0;i--){
                string ans2=mapping[key][i];
                if(ans2!="") return ans2;
            }
        }
        return ans;
        
    }
};
/**
 * Your TimeMap object will be instantiated and called as such:
 * TimeMap* obj = new TimeMap();
 * obj->set(key,value,timestamp);
 * string param_2 = obj->get(key,timestamp);
 */
