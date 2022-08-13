class Trie {
    set<string> set;
public:
    Trie() {}
    void insert(string word) 
    {
        set.insert(word);
    }
    bool search(string word) 
    {
        return set.count(word);
    }
    bool startsWith(string prefix) 
    {
        if (set.count(prefix) > 0)
            return true;
        auto p = set.insert(prefix);
        bool found = false;
        if ((++p.first) != set.end())
            found = (*p.first).find(prefix) == 0;
        set.erase(--p.first);
        return found;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */