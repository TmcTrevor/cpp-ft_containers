#include <iostream>
#include <map>
#include <string>

#include "tools/AVL.hpp"
#include "tools/pair.hpp"
// int main()
// {
//     std::map<std::string, int> map;
//     map["aa"] = 10;
//     map["bb"] = 5;
//     map["cc"] = 1;
//     map["ab"] = 69999;
//     for (std::map<std::string, int>::iterator it = map.begin(); it != map.end();it++)
//         std::cout << it->first << " -------" << it->second << std::endl;

// }



            //aa        // first insert
               // bb    // second insert

        //inserting third requires left rot 
        //
            //bb 
        //aa    //cc


        //bb // third insert
    //aa        //cc 
// unsigned long int next=1; 
// //Random Number Generator in range [0,32767] 
// unsigned long int random1(void) 
// { 
//           next = next*11035 +12345;
//           return (next*65536) % 32768; 
// }

// int seeding(unsigned int seed) 
// { 
//              next=seed;
//              return next;
// }

// int main() 
// { 
// int a = 44999;
// int b = 26;
//    if (a == 1 & b == -9)
//     std::cerr << "adsada";
   
//    a = (a & b);
//    std::cerr << a << " " <<std::endl;
// }
int main()
{
    
    // ft::make_pair(10)
    ft::Node<ft::pair<std::string, int> >::Nodeptr c;
    std::allocator<ft::pair<std::string, int> >::rebind<ft::Node<ft::pair<std::string, int> > >::other  alloc_type;
    c = alloc_type.allocate(1);
    c->data.first = "hello";
    c->data.second = 10;
    ft::Node<ft::pair<std::string, int> >::Nodeptr q;
    q = alloc_type.allocate(1);
    q->data.first = "shit";
    q->data.second = 15;
    ft::AVL<ft::pair<std::string, int>, std::less<std::string> > a;

    a.root = a.insertNode(a.root, c);
    a.insertNode(a.root, c);
    //std::cout << a.root->data.second << std::endl;
     a.print_node(a.root->right);
     

}