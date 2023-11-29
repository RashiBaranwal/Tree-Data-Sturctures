// #include <bits/stdc++.h>

// using namespace std;

// struct Node  
// { 
//   int key; 
//   struct Node *left; 
//   struct Node *right; 
//   Node(int k){
//       key=k;
//       left=right=NULL;
//   }
// };

// void iterativeInorder(Node root){
//     Stack<Node *> st;
//     Node *curr = root;
//     while (curr != NULL || st.empty() == false)
//     {
//         while (curr != NULL)
//         {
//             st.push(curr);
//             curr = curr->left;
//         }
//         curr = st.top(); st.pop();
//         cout<<curr->key<<" ";
//         curr = curr->right;
//     }
    
// }

// int main(){
    
//     return 0;
// }