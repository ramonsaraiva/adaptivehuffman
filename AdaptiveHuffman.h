#include "Node.h"
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

class AdaptiveHuffman
{
	private:
		Node* nyt;
		Node* root;
		vector<Node*> nodes;
		vector<char> knownsym;
		string tempcode;
		string buffer;

	public:
		AdaptiveHuffman();

		void insert(char sym);
		string encode();
		void decode();
		bool is_known(char sym);
		Node* find_node(char sym);
		Node* find_bignode(int freq);
		void swap_node(Node* src, Node* tgt);
		string get_code(char sym);
		void get_code_by_tree(Node* node, string sym, string code);
		string to_binary(char sym);
		string get_by_asc(int index);

		void load_buffer(string data);
		void load_buffer_from_file(string path);

		//debug
		Node* get_nyt();
		vector<Node*> get_nodes();
		void print_nodes();
};