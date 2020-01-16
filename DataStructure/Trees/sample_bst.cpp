/*TREE & BINARY SEARCH TREE*/

#include<bits/stdc++.h>
using namespace std;

class TreeNode{
    public:
    int val;
    TreeNode* leftChild;
    TreeNode* rightChild;
    
    TreeNode(int x){
        val=x;
        leftChild=NULL;
        rightChild=NULL;
    }
};

TreeNode* root=NULL;

void insertBST(int data){
    TreeNode* newNode=new TreeNode(data);
    TreeNode* current;
    TreeNode* parent;
    if(root == NULL){
    root=newNode;
    }
    else{
        current=root;
        parent=NULL;
        
        while(1){
            parent=current;
            if(data < current->val){
                current=current->leftChild;
                if(current == NULL){
                    parent->leftChild=newNode;
                    return;
                }
            }else{
                current=current->rightChild;
                if(current == NULL){
                    parent->rightChild=newNode;
                    return;
                }
            }
        }
    }
}


void printLevelOrder(){
    cout<<"--------LevelOrderTraversal-----"<<endl;
TreeNode* temp=root;
if(temp == NULL) return;

queue<TreeNode*> que;
que.push(temp);

while(que.empty() == false){
int nodeCount=que.size();

while(nodeCount > 0){
        TreeNode *node = que.front();  
        cout << node->val << " ";  
        que.pop();  
        if (node->leftChild != NULL)  
            que.push(node->leftChild);  
        if (node->rightChild != NULL)  
            que.push(node->rightChild);  
        nodeCount--;      
}
       cout<<endl;
}

}


void printInOrder(TreeNode* rootNode){
   if(rootNode == NULL){
   return;
    }
    
    printInOrder(rootNode->leftChild);
    cout<<rootNode->val<<"->";
    printInOrder(rootNode->rightChild);
    
}

void printPreOrder(TreeNode* rootNode){
   if(rootNode == NULL){
   return;
    }
    
    cout<<rootNode->val<<"->";
    printPreOrder(rootNode->leftChild);
    printPreOrder(rootNode->rightChild);
    
}

void printPostOrder(TreeNode* rootNode){
   if(rootNode == NULL){
   return;
    }
    
    printPostOrder(rootNode->leftChild);
    printPostOrder(rootNode->rightChild);
    cout<<rootNode->val<<"->";
    
}

int getHeight(TreeNode* rootNode){
   if(rootNode == NULL){
       return 0;
   } else{
       int ldepth=getHeight(rootNode->leftChild);
       int rdepth=getHeight(rootNode->rightChild);
       
       if(ldepth > rdepth)
       return (ldepth+1);
       else
       return (rdepth+1);
   }
}

int main(){
  int n,x;
  cin>>n;
  for(int i=1;i<=n;i++){
    cin>>x;
    insertBST(x);
  }
  printLevelOrder();
  printInOrder(root);
  cout<<endl;
   printPreOrder(root);
  cout<<endl;
   printPostOrder(root);
  cout<<endl;
  cout<<"height of BST is: "<<getHeight(root)<<endl;
}