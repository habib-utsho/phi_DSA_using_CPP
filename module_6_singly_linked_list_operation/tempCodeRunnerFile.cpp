ode *temp = head;
    while (temp != NULL)
    {
        // Last node
        if (temp->next == NULL)
        {
            Node *newNode = new Node(val);
            newNode->next = NULL;
            temp->next = newNode;
            break;
        }
        temp = temp->next;
    }