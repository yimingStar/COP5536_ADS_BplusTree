#include<list>
#include<vector>
#include<utility>
#include<stack>

// <PROJECT>_<PATH>_<FILE>_H_.
#ifndef BPLUSTREE_H_
#define BPLUSTREE_H_


class treeNode {
  private:
    /**
     * Size of this map will be degree-1
     * Which will be the maximum key pairs in one node. 
    */
    bool isLeaf;
    int degree;
    int maxPairSize;  
    std::vector<std::pair<int,double>> keyPairs;
    std::vector<treeNode*> childPointers;
  public:
    treeNode(int degree, int key); // create index node
    treeNode(int degree, int key, double value); // create leaf node

    treeNode* searchIndexNode(int key);
    std::pair<bool, double> searchLeafNode(int key);

    int insertIndexNode(treeNode* target, std::pair<int,double>); // insert new key-value into 'index' node
    int insertLeafNode(treeNode* target, std::pair<int,double>); // insert new key-value into 'leaf' node

    int getNodeNumOfPairs();
    bool getIsLeaf();
};

class bPlusTree {
  private: 
    int degree;
    treeNode *root;
    std::vector<treeNode*> tracePath;
    std::list<treeNode*> leafList;
  public:
  /**
   * project description functions
   */
  bPlusTree(int m);
  int insertion(int key, double value);
  int deletion(int key);

  int search(int);
  treeNode* searchLeaf(int);
  /**
   * test functions
   */
  int getTreeDegree();
  void traversal(); 
};

#endif  // BPLUSTREE_H_
