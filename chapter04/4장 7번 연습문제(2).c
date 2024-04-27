#include <stdio.h>
#include <stdlib.h>

#define MAX_VERTICES 100

struct Node {
    char data;
    struct Node* next;
};

typedef struct Node Node;

Node* createNode(char data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

void addEdge(Node* graph[], char src, char dest) {
    int srcIndex = src - 'A';
    int destIndex = dest - 'A';
    Node* newNode = createNode(dest);
    newNode->next = graph[srcIndex];
    graph[srcIndex] = newNode;
}

void dfs(int node, Node* graph[], int visited[], int stack[], int* top) {
    visited[node] = 1;
    Node* curr = graph[node];
    while (curr != NULL) {
        int neighbor = curr->data - 'A';
        if (!visited[neighbor]) {
            dfs(neighbor, graph, visited, stack, top);
        }
        curr = curr->next;
    }
    stack[++(*top)] = node;
}

void topologicalSort(Node* graph[], int vertices) {
    int visited[MAX_VERTICES] = { 0 };
    int stack[MAX_VERTICES];
    int top = -1;

    for (int i = 0; i < vertices; i++) {
        if (!visited[i]) {
            dfs(i, graph, visited, stack, &top);
        }
    }

    printf("위상 정렬 순서: ");
    while (top >= 0) {
        printf("%c ", stack[top--] + 'A');
    }
}

int main() {
    int vertices = 2;
    Node* graph[MAX_VERTICES] = { NULL };

    addEdge(graph, 'A', 'B');

    topologicalSort(graph, vertices);

    return 0;
}