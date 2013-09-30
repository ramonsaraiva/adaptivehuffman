#include "AdaptiveHuffman.h"

int main()
{
	AdaptiveHuffman* tree = new AdaptiveHuffman();

	string encoded = tree->encode();

	tree->print_nodes();

	cout << endl << endl << encoded << endl << endl;

	cout << endl << encoded.size() << endl << encoded.size() / 8 << endl;

	AdaptiveHuffman* other_tree = new AdaptiveHuffman();
	other_tree->load_buffer(encoded);
	other_tree->decode();
	other_tree->print_nodes();

	return 0;
}