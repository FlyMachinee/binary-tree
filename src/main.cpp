#include "DynamicBinaryTree.hpp"
#include "StaticBinaryTree.hpp"

#include <sstream>
#include <iostream>
#include <string>

using namespace std;
using namespace BinaryTree;

int main(int argc, const char *argv[])
{
    system("chcp 65001");
    stringstream ss("ABDH##I##E##CF#J###");

    DynamicBinaryTree<char> tree1, tree2;
    tree1.create(ss, '\0', '#');
    ss.str("ABDH##I##E##CF##G##");
    tree2.create(ss, '\0', '#');

    tree1.show(cout);
    cout << "tree1.width() = " << tree1.width() << endl;
    tree2.show(cout);
    cout << "tree2.width() = " << tree2.width() << endl;

    return 0;
}