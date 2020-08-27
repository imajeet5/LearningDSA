## Problem

A person has three coins:

1. 20\$
2. 10\$
3. 5\$

He has to give a person 35\$ with minimum number of coins.

Idea: At each iteration, add coin of largest value that does not take us past the amount to be paid (35\$ here).

## Greedy Algorithm:

An algorithmic paradigm that follows the problem solving approach of making the **locally optimal** choice at each stage with the hope of finding a **global optimum**.

Pros: simple, easy to implement, run fast.  
Cons: Very often they don't provide a globally optimum solution.

## When to use?

Problems on which greedy approach work has two properties -

1. Greedy - choice property: making the best choice at a moment leading to global optimum.
2. Optimal Substructure: An optimal solution to the problem contains an optimal solution to subproblems.

In contract to dynamic programming, the greedy algorithm never reconsider its choices.

## Applications

1. Activity Selection Problem
2. Huffman Coding
3. Job Sequencing Problem
4. Fractional Knapsack Problem
5. Prim's Minimum Spanning Tree
