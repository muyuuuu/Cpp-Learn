#include <iostream>

using std::endl;
using std::cout;

template <typename T>
class Stack{
private:
    T elements[1000];
    unsigned int size{0};
public:
    bool empty();
    T pop();
    void push(T value);
    int getSize();
    Stack();
};

// 加上模板前缀与泛型表示
template <typename T>
Stack<T>::Stack(){
    for(auto& i : elements){
        i = 0;
    }
}

template <typename T>
bool Stack<T>::empty(){
    return size == 0 ? true : false;
}

template <typename T>
int Stack<T>::getSize(){
    return size;
}

template <typename T>
void Stack<T>::push(T value){
    elements[size] = value;
    size += 1;
}

template <typename T>
T Stack<T>::pop(){
    T tmp = elements[size - 1];
    elements[size-1] = 0;
    size -= 1;
    return tmp;
}

int main(){

    std::string s{R"(hello world)"};

    Stack<char> c;

    for (auto i : s){
        c.push(i);
    }

    while (c.empty() != true){
        cout << c.pop();
    }

    return 0;
}