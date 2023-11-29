vector<Node *> path1,path2;
    if(findPath(root,path1,n1) == false || findPath(root,path2,n2) == false){return NULL;}
    for (int i = 0; i < path1.size()-1 && i<path2.size() - 1; i++)
    {
        return path1[i];
    }
    return NULL;