class Solution {
private:
    struct Node {
        Node* alpha[26];
        bool isEnd;
        Node(): isEnd(false) {
            for (int i = 0; i < 26; ++i) {
                alpha[i] = nullptr;
            }
        }
    };
    
    void search(vector<vector<char>>& board, int i, int j, Node* node, string& word, vector<string>& result) {
        if (i < 0 || i >= board.size() || j < 0 || j >= board[0].size() || board[i][j] == '.') return;
        
        node = node->alpha[board[i][j] - 'a'];
        if (!node) return;
        
        word.push_back(board[i][j]);
        board[i][j] = '.';
        
        if (node->isEnd) {
            result.push_back(word);
            node->isEnd = false;
        }
        
        search(board, i - 1, j, node, word, result);
        search(board, i + 1, j, node, word, result);
        search(board, i, j - 1, node, word, result);
        search(board, i, j + 1, node, word, result);
            
        board[i][j] = word.back();
        word.pop_back();
    }
    
public:
    vector<string> findWords(vector<vector<char>>& board, vector<string>& words) {
        Node* trie = new Node();
        for (const string& word: words) {
            Node* node = trie;
            for (char c: word) {
                Node*& next = node->alpha[c - 'a'];
                if (!next) next = new Node();
                node = next;
            }
            node->isEnd = true;
        }
        
        vector<string> result;
        
        for (int i = 0; i < board.size(); ++i) {
            for (int j = 0; j < board[0].size(); ++j) {
                string word;
                search(board, i, j, trie, word, result);
            }
        }
            
        return result;
    }
};