# 常量表达式

在编译的时候就能计算结果的一个表达式，由编译器执行得到结果。`const` 是运行期的常量，不是编译期的常量。没办法作为数组的大小去定义数组：

```C++
const int a;
a++;   // 错误 a 只能读
std::array<int, a> a1;

int a;
a = 3;
sta::array<int, a> a2;  // 错误，a不是常量表达式
```

`const`可以定义编译期常量，也可以定义运行期常量：

```C++
const int a = 1; // 编译期常量
const int a = n; // 运行期常量
```

使用编译期常量的原因是，让编译期优化代码提升性能。