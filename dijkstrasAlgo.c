#include <stdio.h>
#include <stdlib.h>

typedef struct edge {
    int adjacentName;
    int cost;
    struct edge *next;
} edge;


int main(int argc, char **argv) {

    FILE *fptr;
    char buffer[50];
    int vertexCount;
    

    if(argc != 2){
        printf("Correct use: \"./<exec_name> <filename>.txt\"\n");
    }

    fptr = fopen(argv[1], "r");
    if (fptr == NULL) {
        perror("The file was not opened");
    }

    vertexCount = atoi(fgets(buffer, 50, fptr));
    if(vertexCount == 0){
        printf("Invalid number of vertices. Please check your input file. \n");
        return -1;
    }
    printf("%d", vertexCount);

    int weights[vertexCount];
    weights[0] = 0;
    for(int i = 1; i < vertexCount; i++){
        weights[i] = -1;
    }

    int origin[vertexCount];
    for(int i = 0; i < vertexCount; i++){
        origin[i] = -1;
    }

    edge* edges[vertexCount];
    
    

    
    return 0;
}