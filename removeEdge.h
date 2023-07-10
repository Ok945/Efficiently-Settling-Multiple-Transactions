


void removeEdge(struct Graph *graph, int src, int dest)
{
    struct Node *current = graph->adj_list[src];
    struct Node *prev = NULL;

    // Find the edge to be removed
    while (current != NULL && current->destination != dest)
    {
        prev = current;
        current = current->next;
    }

    // If the edge is found, remove it
    if (current != NULL)
    {
        if (prev != NULL)
        {
            prev->next = current->next;
        }
        else
        {
            graph->adj_list[src] = current->next;
        }
        free(current);
    }
}