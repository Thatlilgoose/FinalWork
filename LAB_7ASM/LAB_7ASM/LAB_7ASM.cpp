#include <stdio.h>
#include <locale.h>
int main() {
    setlocale(LC_ALL, "rus");
    int a, b, c, d, e, y;
    printf("Введите a, b, c, d, e: ");
    scanf_s("%d %d %d %d %d", &a, &b, &c, &d, &e);
    __asm {
        mov eax, b      
        imul c         
        idiv d          
        mov ebx, a      
        sub ebx, eax    
        mov ecx, e      
        add ebx, ecx    
        mov y, ebx      
    }

    printf("y = %d", y);

    return 0;
}