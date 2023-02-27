/*
// Definition for a QuadTree node.
class Node {
public:
    bool val;
    bool isLeaf;
    Node* topLeft;
    Node* topRight;
    Node* bottomLeft;
    Node* bottomRight;
    
    Node() {
        val = false;
        isLeaf = false;
        topLeft = NULL;
        topRight = NULL;
        bottomLeft = NULL;
        bottomRight = NULL;
    }
    
    Node(bool _val, bool _isLeaf) {
        val = _val;
        isLeaf = _isLeaf;
        topLeft = NULL;
        topRight = NULL;
        bottomLeft = NULL;
        bottomRight = NULL;
    }
    
    Node(bool _val, bool _isLeaf, Node* _topLeft, Node* _topRight, Node* _bottomLeft, Node* _bottomRight) {
        val = _val;
        isLeaf = _isLeaf;
        topLeft = _topLeft;
        topRight = _topRight;
        bottomLeft = _bottomLeft;
        bottomRight = _bottomRight;
    }
};
*/

class Solution {
public:
    bool allSame(vector<vector<int>>& grid, int is, int js, int ie, int je)
    {
        int val = grid[is][js];
        for(int i=is; i<=ie; i++)
            for(int j=js; j<=je; j++)
                if(val!=grid[i][j])
                    return false;
        return true;
    }
    Node* constructUtil(vector<vector<int>> & grid, int is,int js, int ie, int je)
    {
        if(allSame(grid,is,js,ie,je))
        {
            Node* temp=new Node(grid[is][js],1);
            return temp;
        }
        else
        {
            Node* temp = new Node(1,0);
            int imid = (is+ie)/2;int jmid = (js+je)/2;
            temp->topLeft = constructUtil(grid, is, js, imid, jmid);
            temp->topRight = constructUtil(grid, is, jmid+1, imid, je);
            temp->bottomLeft = constructUtil(grid, imid+1, js, ie, jmid);
            temp->bottomRight = constructUtil(grid, imid+1, jmid+1, ie, je);
            return temp;
        }
    }
    Node* construct(vector<vector<int>>& grid) 
    {   
        int n=grid.size();
        if(n==0)
            return NULL;
        return constructUtil(grid,0,0,n-1,n-1);
    }
};