# qsort 快排
## 参数含义  
qsort 包含在<stdlib.h>中，共有**4**个参数  
qsort( 数组名，数组元素个数，元素大小，**比较函数**)  
例如：
```c
qsort(arr, sizeof(arr) / sizeof(int), sizeof(int), compare);
```
## 比较函数
```c
int compare(const void *a, const void *b)
{
    const int *p1 = (const int *)a;
    const int *p2 = (const int *)b;
    int num1 = *p1;
    int num2 = *p2;
    return num1-num2;
}
```
返回正数就把a排b后面，负数同理。  
注意比较函数必须是**int型**  
## 补充
| 类型             | 含义           |
| ---------------- | -------------- |
| const int*       | 指针内容不可变 |
| int* const       | 指针不可变     |
| const int* const | 都不可变       |