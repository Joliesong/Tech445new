#include <iostream>
#include <vector>

using namespace std;

int main ()
{
  int num;
  std::vector<int> v;
  for (int i : {5, 4, 3, 2, 1})
  {
    v.push_back (i);
  }

  for (auto val : v)
  {
    std::cout << val << ' ';
  }

  std::cout << "\nHello, World! My name is Heather." << std::endl;

  cout << "What is 4 + 1? ";
  cin >> num;

if (num == 5){
  cout << "Great job!";
}
if (num < 5){
  cout << "Wrong.";
}
if (num > 5){
  cout << "NOPE!";
}


  return 0;
}
