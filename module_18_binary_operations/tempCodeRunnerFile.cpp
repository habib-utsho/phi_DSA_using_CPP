int count_nodes_using_level_order(Node *root)
// {
//     int count = 0;
//     if (root == NULL)
//     {
//         cout << "No tree";
//         return;
//     }
//     queue<Node *> q;
//     q.push(root);

//     while (!q.empty())
//     {

//         // Step 1: Node k ber kore ana
//         Node *front = q.front();
//         q.pop();

//         // Step 2: Oi node k niye kaj
//         count++;

//         // Step 3: oi node er children push
//         if (front->left)
//             q.push(front->left);
//         if (front->right)
//             q.push(front->right);
//     }

//     return count;
// }
