#include<stdio.h>

void test1()
{
   auto int k;
    printf("k = %d\n", k);
                                  // stack area
    k = 20;
    printf("k = %d\n", k);
}

void test()
{
    auto int var;
    printf("var = %d\n", var);     // heap area
    var++;
    printf("var = %d\n", var);
}

int main()
{
    test1();
    test();

    return 0;
}

/* Four different type of storage classes :
1. auto (the scope of auto variable is local)
2. static
3. extern
4. register;

####

1. scope (Scope defines the block from which the variable is accessible)
2. life time (LT is how long the variable remain allocated in primary memory)
3. initial value; (IV is the value that the variable assigned immediately after allocation)
*/
