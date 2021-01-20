#include "iter.hpp"
//#include "Awesome.hpp"


//int main() {
//
//    int tab[] = { 0, 1, 2, 3, 4 }; // <--- J'ai jamais compris pourquoi on peut pas ecrire int[] tab. Ca aurait plus de sens vous trouvez pas ?
//    Awesome tab2[5];
//
//    iter( tab, 5, print );
//    iter( tab2, 5, print );
//
//    return 0;
//}
//

int main()
{
    int *a = new int[10];
    int i = 0;
    int j = 10;
    while(i < j)
    {
        a[i] = i;
        disp(a[i]);
        i++;
    }
    std::cout << std::endl;
    iter(a, 10, disp);
    std::cout << std::endl;

    char *b = new char[10];
    i = 0;
    char c = 'a';
    while(i < j)
    {
        b[i] = c++;
        disp(b[i]);
        i++;
    }
    std::cout << std::endl;
    iter(b, 10, disp);

    return 0;
}