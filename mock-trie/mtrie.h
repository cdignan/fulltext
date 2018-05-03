// Sprint 2 Mock Trie Implementation
// Ruolin Zheng


// minimal C implementation of a mock trie

#ifndef __TRIE_H__
#define __TRIE_H__
 
// Alphabet size (# of symbols)
#define ALPHABET_SIZE (26)
 
typedef struct trie_t
{
    struct trie_t *children[ALPHABET_SIZE];
} trie_t;

// Returns new trie node (initialized to NULLs)
trie_t *trie_new(void);

// If not present, inserts key into trie
// If the key is prefix of trie node, just marks leaf node
trie_t *trie_insert(trie_t *trie, const char *key);

bool is_word(trie_t *trie, const char *key);

// Returns true if key presents in trie, else false
bool trie_search(trie_t *trie, const char *key);

// Returns number of prefix matches
int num_matches(trie_t *trie, const char *key)

// Prints out content of trie
void trie_show(trie_t *trie)

#endif  /* __TRIE_H__  */
 