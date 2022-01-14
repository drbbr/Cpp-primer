- p187  
    当形参是引用类型时，我们说它对应的实参被**引用传递**或者函数**被传引用调用**。  
    当实参的值被拷贝给形参时，形参和实参是两个相互独立的对象。我们说这样的实参被**值传递**或者函数被**传值调用**。    
- p193
    因为不能拷贝数组，所以我们无法以值传递的方式使用数组参数。
    因为数组会被转换成指针，所以当我们为函数传递一个数组时，实际上传递的是指向数组首元素的指针。
- p195
    ```cpp
    f(int &arr[10])         //数组里是10个引用
    f(int (&arr)[10])       //对有10个整数的数组的引用
    ```
- p208
    - 一个拥有顶层const的形参无法和另一个没有顶层const的形参区分开
    ```cpp
    Record lookup(Phone*);
    Record lookup(Phone* const);    // 重复声明
    ```
    - 如果形参是某种类型的指针或引用，则通过区分其指向的是常量对象还是非常量对象可以实现函数重载（底层const）.
    ```cpp
    Record lookup(Account*);    
    Record lookup(const Account*);
    ```

---
### 6.18
``` cpp
//a 
bool compare(matrix &a, matrix &b);
//b 
vector<int>::iterator change_val(int val, vector<int>::iterator i);
```

### 6.36
``` cpp
string (&func())[10];
```

### 6.37
``` cpp
// a)
using arrStr string[10];
attStr& func();
// b)
auto func() -> string (&)[10];
// c)
string ss[10];
decltype(ss) &func();
```

