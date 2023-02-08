// 通过对斐波拉契函数的递归实现，来看看constexpr具体怎么修饰函数，同时比较这样使用的好处
#include<iostream> 
#include<time.h>
using namespace std; 
//在这个函数里面，由于constexpr稀释的是fib1这个函数，因此每一次计算的结果都会作为一个常量保存下来
//这个实现的复杂度等同于迭代的方法，基本上为O(n)。
constexpr long int fib1(int n) 
{ 
	return (n <= 1)? n : fib1(n-1) + fib1(n-2); //只能包含一个retrun语句
} 
//熟悉递归函数就不难证明下面这个函数的时间复杂度为O(2^n)
long int fib2(int n){
        return (n <= 1)? n : fib2(n-1) + fib2(n-2); 
}
int main () 
{ 
	// value of res is computed at compile time. 
  	clock_t start, end;
  	start = clock();
	const long int res1 = fib1(30); 
  	end = clock();
  	cout << "Totle Time fib1 : " <<(double)(end - start) / CLOCKS_PER_SEC << "s" << endl;
  	start = clock();
    cout << "Ans = " << res1 << "\n"; 
	const long int res2 = fib2(30); 
  	end = clock();
  	cout << "Totle Time fib2 : " <<(double)(end - start) / CLOCKS_PER_SEC << "s" << endl;
    cout << "Ans = " << res2 << "\n";  
	return 0; 
} 