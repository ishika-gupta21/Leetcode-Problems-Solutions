class RandomizedSet {
public:
    unordered_map<int, int> umap;
    vector<int> vec;
    RandomizedSet() {}
    bool insert(int val) 
    {
        if(umap.find(val) != umap.end())
            return false;
        umap[val] = vec.size();
        vec.push_back(val);
        return true;
    }
    bool remove(int val)
    {
        if(umap.find(val) == umap.end())
            return false;
        umap[vec[vec.size()-1]] = umap[vec[umap[val]]];
        swap(vec[vec.size()-1], vec[umap[val]]);
        umap.erase(val);
        vec.pop_back();
        return true;
    }
    int getRandom()
    {
        return vec[rand()%vec.size()];
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */