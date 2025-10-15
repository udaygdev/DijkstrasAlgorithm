# DijkstrasAlgorithm
A project inspired by CS344: DESIGN AND ANALYSIS OF COMPUTER ALGORITHMS and MATH428: GRAPH THEORY at Rutgers University.

This project will be in C for manual memory allocation and deallocation. The goal of this project is for the program to be able to take in a text file with details about a graph and find the cheapest path from a single source to all other vertices. For simplicity, I will assume that this graph is directed. It will output all weights for each vertex and the cheapest paths from the source to every other vertex.

The text file would have this structure:
n vertices
number of edges incident to vertex 1, the names of the endpoints (adjacent vertex), and the cost of each edge
number of edges incident to vertex 2, the names of the endpoints (adjacent vertex), and the cost of each edge
number of edges incident to vertex 3, the names of the endpoints (adjacent vertex), and the cost of each edge
...
number of edges incident to vertex n, the names of the endpoints (adjacent vertex), and the cost of each edge
