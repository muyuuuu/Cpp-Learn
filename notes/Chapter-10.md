# 元编程与泛型编程

一种编程范式。

- 编程：写一个程序去处理数据
- 元编程：写个程序去处理程序，C++用模板去实现，写一段或生成一段程序去处理另一段程序。编译器在编译时根据模板生成模板实例，类生成类实例，函数生成函数实例，也就是程序。
- 泛型编程：写个程序去处理数据，只对数据的结构做最小假设，是程序能重用去处理广泛的数据类型。C++的泛型编程即编译时多态(另一种是函数重载)，又元编程实现，也就是由模板生成代码，模板代码处理多类型数据，生成的每个代码只能处理一种类型的数据。

## 初始模板

返回两个数的最大值，可能是整型、可能是浮点、可能是字符。C语言要写三个函数，C++可以函数重载，三个相同的函数体写三遍，冗余且易出错。

# 函数模板

带有泛型的函数模板，和`generic type`关联在一起。所有模板带有模板前缀：
```C++
// 多个类型参数用逗号分隔。
template <typename T, typename S>
```
`T`是类型参数，函数的参数中出现次数不少于一次，指明函数参数的类型。可以作用于：返回值类型(可以是`auto`)，参数类型，局部变量的类型。

声明类型参数：`<typename T>`或`<class T>`，前者描述性强。

编译器根据函数调用的实参，生成模板函数的实例：`add(1, 2,0)`，推断两者类型。用函数模板的参数进行类型匹配，将函数模板生成具体的函数。

# 函数模板实例化

函数模板不是类型不是函数，这只是一个蓝图。编译器扫描代码，遇见模板定义不立即产生代码。确定模板实参后，编译器生成实际函数代码。两种实例化方法：显式实例化与隐式实例化。

模板多态，实际是编译时多态，也就是静态联编，和函数重载是同一层面的东西。

## 显式实例化

强制某些函数实例化，出现在模板定义后的任何位置。示例：
```C++
template <typename T>
void f(T s){}

template void f<double>(double); // 实例化，函数模板的一个实例就是一段函数代码
template void f<>(char);
template void f(int); // int函数形参，作为模板 T 的实参
```

## 隐式实例化

编译器查看函数调用，推断模板实参，实现隐式实例化。示例：
```C++
template <typename T>
void f(T s){}

int main(){
    f<double>(1); // 实例化调用 f<double>(double)，有优先
    f<>('a'); // f<char><char>
    f(7); // f<int><int>
    // 函数指针 指向 f
    void (*ptr)(std::string) = f; // f<string>(string)
}
```

## 实例函数实例类

由函数模板实例化得到的函数叫实例函数，由类模板实例化得到的类叫实例类。不叫模板函数或模板类，不正规。

# 将一个函数泛型化

1. 编写一个非泛型函数
2. 测试该函数
3. 将非泛型函数转换为泛型函数

泛型步骤：
1. 非泛型处理的数据类型
2. 将涉及数据的类型转换为类型参数

# 类模板

类中的某些类型变为泛型，从而定义一个模板。类成员的泛型：
- 数据域成员
- 函数成员，返回值类型，参数类型，局部变量类型

## 类模板的实例化

只要是对类模版进行实例化，编译器就会生成一个类

- 显式实例化：`template class Stack<int>`，实例化为`int`类型。但实例化后的类的名字不在叫`Stack`，因为类的名字无法重载，编译器会对其改名，如`intStack`。
- 隐式实例化：定义类对象的时候进行实例化。

C++17，模板类型参数根据初始化语句自动推导。

# 默认类型参数和非类型参数

## 默认类型参数

模板可以有默认类型参数，和函数的默认参数一样，给模板的类型参数指定一个默认的类型。
```C++
template<typename T = int>
Class S{};
S<> s1; // 隐式实例化，调用默认类型参数
```

只局限于类模板使用，函数模板不能使用。

## 非类型参数

定义模板时，还可以加入普通参数，模板参数中，可以全部都是非类型参数。
```C++
template<typename T, int capcity>
class s{};
s<char, 100> s; // 和 array vector类似
```

# 模板与继承

模板不是一个类。

1. 一个非模板类，能从类模板的实例中继承下来，类模板实例化后就是类了
2. 模板可以从普通类继承下来
3. 类模板可以继承类模板
4. 类不能继承模板

# 何时使用模板

1. 用别人写好的模板库，`array, string, vector`
2. 对不同类型的数据做类似的处理，算法、容器、遍历等
3. 适当使用，不要过量使用
4. 强调性能而不是可维护性
5. 模板程序不能在真实世界的编译器上编译过去
6. C++中泛型经常使用，可以取代OOP，C++中较少使用继承和运行时多态