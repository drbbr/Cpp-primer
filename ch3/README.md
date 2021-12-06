- p81 string对象相加时，必须确保每个加法运算符（+）的两侧的运算对象至少有一个是string
    eg: string s3 = "hello" + "," +s2;      //
- p98 C++11中引入了cbegin和cend，类似于begin和end，这两个函数也返回指示容器第一个元素和最后元素下一个位置的迭代器，但是返回的是const_iterator。
- p105
    ```
    int ia[] = {0,1,2,3};
    auto ia2(ia);                   //ia2是一个整形指针，指向ia的第一个元素
    decltype(ia) ia3={0,1,2,3};     //decltype(ia)返回的类型是由四个整数构成的数组
    ```
- P106 C++11中引入了begin和end，用法为
    begin(ia)       //指向ia首元素的指针
    end(ia)         //指向ia尾元素的下一个位置的指针
- 内置的下标运算符可以处理负值，与string和vector不一样。
