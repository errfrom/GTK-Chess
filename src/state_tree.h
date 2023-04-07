#ifndef STATE_TREE_H
#define STATE_TREE_H
#include "typedecl.h"
extern state_tree* tree;

state_tree* init_tree(game_state*);
void destroy_tree(state_tree*);
tnode * addnode(game_state*, tnode*, char* last_move);
void destroy_tnodes(tnode*);
void get_label(tnode* ,char*);

#endif