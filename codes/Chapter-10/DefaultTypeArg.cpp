#include <iostream>

using std::endl;
using std::cout;

template <typename T=char, int N=100>
class Stack{
private:
    T elements[N];
    unsigned int size{0};
public:
    bool empty();
    T pop();
    void push(T value);
    int getSize();
    Stack();
};

// 加上模板前缀与泛型表示
template <typename T, int N>
Stack<T, N>::Stack(){
    for(auto& i : elements){
        i = 0;
    }
}

template <typename T, int N>
bool Stack<T, N>::empty(){
    return size == 0 ? true : false;
}

template <typename T, int N>
int Stack<T, N>::getSize(){
    return size;
}

template <typename T, int N>
void Stack<T, N>::push(T value){
    elements[size] = value;
    size += 1;
}

template <typename T, int N>
T Stack<T, N>::pop(){
    T tmp = elements[size - 1];
    elements[size-1] = 0;
    size -= 1;
    return tmp;
}

int main(){

    std::string s{R"(hello world)"};

    Stack<char, 20> c;

    for (auto i : s){
        c.push(i);
    }

    while (c.empty() != true){
        cout << c.pop();
    }

    return 0;
}