# Trie
- this is also called a prefix trees
- this is a variant of n-ary tree in which characters are stored at each node
- each path down a tree might represent a word and there's * nodes (sometimes called null nodes) are often used to indicate complete words.
- A trie is used to store the entire english language for quick prefix lookups. For example, if we have MA as the prefix, using a tree it will tell us that MA is a prefix for MANY...MAN..etc, but a hashtable can only tell you whether MA is a valid string or not
