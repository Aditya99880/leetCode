class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& my_list) {
         map<map<char, int>, vector<string>> my_map;
     
    for(string str : my_list)
    {
      
        map<char, int> temp_map;
        vector<string> temp_my_list;
        for(int i = 0; i < str.length(); ++i) 
        {
            ++temp_map[str[i]];
        }
         
       
        auto it = my_map.find(temp_map);
        if (it != my_map.end())
        {
            it->second.push_back(str);
        }
        else
        {
            temp_my_list.push_back(str);
            my_map.insert({ temp_map, temp_my_list });
        }
    }
     
    // Stores the result in a vector
    vector<vector<string>> result;
 
    for(auto it = my_map.begin();
             it != my_map.end(); ++it)
    {
        result.push_back(it->second);
    }
    return result;
    }
};