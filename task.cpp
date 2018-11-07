#include<iostream>

class MyVector{
public:
  MyVector()
  {

  }

  MyVector(int l)
  {
    length = l;
    A = (double *)malloc(length*sizeof(double));
  }

  MyVector(const MyVector &t)
  {
    length = t.length;

  }

  int get()
  {
    return length;
  }


private:
  int length;
  double *A;
};

int main() {
  int a;
  std::cout << "enter length :" << '\n';std::cin >> a;
  MyVector obj1(a);
  MyVector obj2(obj1);
  std::cout << "object 1 :" << obj1.get() << '\n';
  std::cout << "object 2 :" << obj2.get() << '\n';

  return 0;
}
