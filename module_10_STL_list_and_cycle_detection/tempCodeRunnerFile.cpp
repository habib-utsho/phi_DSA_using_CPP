
    {
        if (
            firstNodePointer == lastNodePointer || firstNodePointer->next == lastNodePointer)
        {
            break;
        }
        swap(firstNodePointer->val, lastNodePointer->val);
        firstNodePointer = firstNodePointer->next;
        lastNodePointer = lastNodePointer->prev;
    }