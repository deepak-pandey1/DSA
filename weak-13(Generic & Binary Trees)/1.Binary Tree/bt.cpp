//------------------------------------------------------->implement binary tree
// #include <iostream>
// using namespace std;

// class Node{
//   public:
// 	int data;
// 	Node* left;
// 	Node* right;

// 	Node(int val) {
// 	  this->data = val;
// 	  this->left = NULL;
// 	  this->right = NULL;
// 	}
// };


// //it returns root node of the created tree
// Node* createTree() {
//     cout << "enter the value for Node: " << endl;
//     int data;
//     cin >> data;

//     if(data == -1) {    //-1 point to null, means i,m not intersed to create child node
// 	return NULL;
//     }
//     //Step1: create Node
//     Node* root = new Node(data);
//     //Step2: Create left subtree
//     cout << "left of Node: " << root->data << endl;
//     root->left = createTree();
//     //Step3: Craete right subtree
//     cout << "right of Node: " << root->data << endl;
//     root->right = createTree();
//     return root;
// }


// int main() {
//     Node* root = createTree();
// 	cout << root->data << endl;
//     return 0;
// }



//------------------------------------------------------->preorder or postoder or inorder traversel in B.T
// #include <iostream>
// using namespace std;

// class Node{
//   public:
// 	int data;
// 	Node* left;
// 	Node* right;

// 	Node(int val) {
// 	  this->data = val;
// 	  this->left = NULL;
// 	  this->right = NULL;
// 	}
// };

// //it returns root node of the created tree
// Node* createTree() {
//     cout << "enter the value for Node: " << endl;
//     int data;
//     cin >> data;
//     if(data == -1) {    //-1 point to null, means i,m not intersed to create child node
// 	return NULL;
//     }
//     //Step1: create Node
//     Node* root = new Node(data);
//     //Step2: Create left subtree
//     cout << "left of Node: " << root->data << endl;
//     root->left = createTree();
//     //Step3: Craete right subtree
//     cout << "right of Node: " << root->data << endl;
//     root->right = createTree();
//     return root;
// }


// void preOrderTraversal(Node* root) {
// 	//base case
// 	if(root == NULL) {
// 		return;
// 	}
// 	// N L R
// 	//N 
// 	cout << root->data << " ";
// 	// L
// 	preOrderTraversal(root->left);
// 	// R
// 	preOrderTraversal(root->right);
// }


// void inorderTraversal(Node* root) {
// 	//LNR
// 	//base case
// 	if(root == NULL) {
// 		return;
// 	}
// 	//L
// 	inorderTraversal(root->left);
// 	// N
// 	cout << root->data << " ";
// 	// R
// 	inorderTraversal(root->right);
// }

// void postOrderTraversal(Node* root) {
// 	//LRN
// 	//base case
// 	if(root == NULL) {
// 		return;
// 	}
// 	//L
// 	postOrderTraversal(root->left);
// 	//R
// 	postOrderTraversal(root->right);
// 	//N
// 	cout << root->data << " ";
// }

// int main() {
//     //10 20 40 -1 -1 -1 30 50 -1 -1 60 -1 -1, this take i/p collectively with space bcz this ans hai mairai pass for chack code is right or not
// 	Node* root = createTree();
	
// 	cout << "Printing Preorder: ";
// 	preOrderTraversal(root);
// 	cout << endl;

// 	cout << "Printing Inorder: ";
// 	inorderTraversal(root);
// 	cout << endl;

// 	cout << "Printing PostOrder: ";
// 	postOrderTraversal(root);
// 	cout << endl;
    
//     return 0;
// }



//------------------------------------------------------->Level order traversel or B.F.S traversal in B.T
// #include <iostream>
// #include<queue>
// using namespace std;

// class Node{
//   public:
// 	int data;
// 	Node* left;
// 	Node* right;
// 	Node(int val) {
// 	  this->data = val;
// 	  this->left = NULL;
// 	  this->right = NULL;
// 	}
// };


// //it returns root node of the created tree
// Node* createTree() {
//     cout << "enter the value for Node: " << endl;
//     int data;
//     cin >> data;
//     if(data == -1) {    //-1 point to null, means i,m not intersed to create child node
// 	return NULL;
//     }
//     //Step1: create Node
//     Node* root = new Node(data);
//     //Step2: Create left subtree
//     cout << "left of Node: " << root->data << endl;
//     root->left = createTree();
//     //Step3: Craete right subtree
//     cout << "right of Node: " << root->data << endl;
//     root->right = createTree();
//     return root;
// }


// void levelOrderTraversal(Node* root) {
// 	queue<Node*> q;
// 	q.push(root);
// 	q.push(NULL); //here null work like marker, for level complete or not

// 	//asli traversal start krete h 
// 	while(!q.empty()) {
// 		Node* front = q.front();
// 		q.pop();

// 		if(front == NULL) {  //if null found means level complete shift to new line 
// 			cout << endl;
// 			if(!q.empty()) {  //for stop infinite loop 
// 				q.push(NULL);
// 			}
// 		}
// 		else {
// 			//valid node wala case
// 			cout << front->data << " ";

// 			if(front->left != NULL) {
// 				q.push(front->left);
// 			}
// 			if(front->right != NULL) {
// 				q.push(front->right);
// 			}
// 		}
// 	}
// }

// int main() {
//     //10 20 40 -1 -1 -1 30 50 -1 -1 60 -1 -1, this take i/p collectively with space bcz this ans hai mairai pass for chack code is right or not
// 	Node* root = createTree();
	
// 	cout << "Level Order : ";
// 	levelOrderTraversal(root);
// 	cout << endl;
    
//     return 0;
// }


//------------------------------------------------------->Height of tree
// 104. Maximum Depth of Binary Tree


//------------------------------------------------------->543. Diameter of Binary Tree
