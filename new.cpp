#include <iostream>

using namespace std;
void swap(int *&pa)
{
    int a = 155;
    pa = &a;    
    return ;
}

int main()
{
    int *pa = NULL;
    swap(pa);
    cout << pa;
}