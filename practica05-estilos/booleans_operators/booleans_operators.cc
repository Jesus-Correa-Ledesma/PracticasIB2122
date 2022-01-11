#include <iostream>
 
int main() {
  bool p,q;
  std::cout << "p " << " q " << " p and q "<< " p or q " << " not p " << " not q " << std::endl;
  std::cout << "--" << "---" << "---------"<< "--------" << "-------" << "-------" << std::endl;
  p = {false}, q = {false};
  std::cout << p << "  " << q << "   " << "  " << (p&&q) << "   " << "    " << (p||q) << "   " << "    " << !p << "   " << "   " << !q << std::endl;
  p = {false}, q = {true};
  std::cout << p << "  " << q << "   " << "  " << (p&&q) << "   " << "    " << (p||q) << "   " << "    " << !p << "   " << "   " << !q << std::endl;
  p = {true}, q = {false};
  std::cout << p << "  " << q << "   " << "  " << (p&&q) << "   " << "    " << (p||q) << "   " << "    " << !p << "   " << "   " << !q << std::endl;
  p = {true}, q = {true};
  std::cout << p << "  " << q << "   " << "  " << (p&&q) << "   " << "    " << (p||q) << "   " << "    " << !p << "   " << "   " << !q << std::endl;
  return 0;
}
