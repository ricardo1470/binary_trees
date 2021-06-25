<a href="Binary Trees image"><img src="https://miro.medium.com/max/16000/1*CMGFtehu01ZEBgzHG71sMg.png" align="middle" width="800" height="400"></a>
---

> # 0x1D. C - Binary trees
---

> ## Table of Contents

* [Description](#description)
* [Requirements](#requirements)
* [Installation](#installation)
* [Compilation](#Compilation)
---


## Description
---
In computer science, a binary tree is a tree data structure in which each node has at most two children, which are referred to as the left child and the right child. A recursive definition using just set theory notions is that a (non-empty) binary tree is a tuple (L, S, R), where L and R are binary trees or the empty set and S is a singleton set containing the root. Some authors allow the binary tree to be the empty set as well

## Requirements
---
simple_shell is designed to run in the `Ubuntu 14.04 LTS` linux environment and to be compiled using the GNU compiler collection v. `gcc 4.8.4` with flags`-Wall, -Werror, -Wextra, and -pedantic.`

## Installation
---
Clone this repository: `"https://github.com/ricardo1470/binary_trees"`
   * Change directories into the repository: `binary_trees`
   * Compile: see installation instructions later

## Compilation
---
* Compile: In the following examples, the `main.c` files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own `main.c`.
`gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c X-main.c binary_tree_file.c -o 0-node`
* Our main files will include your main header file (`binary_trees.h`): `#include binary_trees.h`

## Example of usage
---
* function that goes through a binary tree using pre-order traversal
```c
./6-pre
       .-------(098)-------.
  .--(012)--.         .--(402)--.
(006)     (056)     (256)     (512)
98
12
6
56
402
256
512
```

*  function that measures the depth of a node in a binary tree
```c
./10-depth
  .-------(098)--.
(012)--.       (128)--.
     (054)          (402)
Depth of 98: 0
Depth of 128: 1
Depth of 54: 2
```

* function that checks if a binary tree is perfect.
```c
./16-perfect
       .-------(098)-------.
  .--(012)--.         .--(128)--.
(010)     (054)     (010)     (402)
Perfect: 1

       .-------(098)-------.
  .--(012)--.         .--(128)-------.
(010)     (054)     (010)       .--(402)
                              (010)
Perfect: 0

       .-------(098)-------.
  .--(012)--.         .--(128)-------.
(010)     (054)     (010)       .--(402)--.
                              (010)     (010)
Perfect: 0
```
---
| **Filename** | **Description** |
|---|---|
| [0. New node](./0-binary_tree_node.c) | function that creates a binary tree node  |
| [1. Insert left](./1-binary_tree_insert_left.c) | function that inserts a node as the left-child of another node  |
| [2. Insert right](./2-binary_tree_insert_right.c) | function that inserts a node as the right-child of another node  |
| [3. Delete](./3-binary_tree_delete.c) | function that deletes an entire binary tree  |
| [4. Is leaf](./4-binary_tree_is_leaf.c) | function that checks if a node is a leaf  |
| [5. Is root](./5-binary_tree_is_root.c) | function that checks if a given node is a root  |
| [6. Pre-order traversal](./6-binary_tree_preorder.c) | function that goes through a binary tree using pre-order traversal  |
| [7. In-order traversal](./7-binary_tree_inorder.c) | function that goes through a binary tree using in-order traversal  |
| [8. Post-order traversal](./8-binary_tree_postorder.c) | function that goes through a binary tree using post-order traversal  |
| [9. Height](./9-binary_tree_height.c) | function that measures the height of a binary tree  |
| [10. Depth](./10-binary_tree_depth.c) | function that measures the depth of a node in a binary tree  |
| [11. Size](./11-binary_tree_size.c) | function that measures the size of a binary tree  |
| [12. Leaves](./12-binary_tree_leaves.c) | function that counts the leaves in a binary tree  |
| [13. Nodes](./13-binary_tree_nodes.c) | function that counts the nodes with at least 1 child in a binary tree  |
| [14. Balance factor](./14-binary_tree_balance.c) | function that measures the balance factor of a binary tree  |
| [15. Is full](./15-binary_tree_is_full.c) | function that checks if a binary tree is full  |
| [16. Is perfect](./16-binary_tree_is_perfect.c) | function that checks if a binary tree is perfect  |
| [17. Sibling](./17-binary_tree_sibling.c) | function that finds the sibling of a node  |
| [18. Uncle](./18-binary_tree_uncle.c) | function that finds the uncle of a node  |

---
> ## Contact 💬
> Ricardo Camayo
### | [twitter](https://twitter.com/RICARDO1470) | [linkedin](https://www.linkedin.com/in/ricardo-alfonso-camayo/) | [mail](1466@holbertonschool.com) | [github](https://github.com/ricardo1470/README/blob/master/README.md) |

> Victor Paz
### | [twitter](https://twitter.com/VictorP1312) | [linkedin](https://www.linkedin.com/in/victor-paz-11b56b84/) | [mail](1555@holbertonschool.com) | [github](https://github.com/VMP1312) |
---
## License
*`Binary trees` is open source and therefore free to download and use without permission.*

<a href="url"><img src="https://www.holbertonschool.com/holberton-logo.png" align="middle" width="100" height="30"></a>

---
