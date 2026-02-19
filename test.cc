// Joel Rejive
// 883464604
// joelrejive@csu.fullerton.edu
// @rejivejoel

#include <iostream>
#include <string>

template <typename T, typename U> class box {
private:
    T item_;
    U other_item_;

public:
    box(T item, U other_item)
        : item_(item), other_item_(other_item) {}

    void Print() {
        std::cout << "The first item is " << item_ << "\n"
                  << "The second item is " << other_item_ << "\n";
    }
};

template <typename T> class Stack {
    private:
    T* data;
    int capacity;
    int top;

    public:
      Stack(int size) {
          capacity = size;
          top = -1;
          data = new T[capacity];
      }

      ~Stack() {
        delete [] data;
      } 
      void push(const T& value) {
          data[++top] = value;
      }

      T pop(){
        return data[top--]
      }

};
int main() {
    std::cout << "this is a test" << "\n";

    box<int, double> b_pair(5, 5.5);
    b_pair.Print();

    return 0;
}
