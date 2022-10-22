#include <stdio.h>

void calculator(){
    int a = 0, b =0 ;
    char operateor = NULL; 
    printf("nhap phep toan muon tinh: ");
    scanf("%c", &operateor);

    printf("\n nhap 2 so a va b: ");
    scanf("%d %d", &a, &b);



    if ((operateor == '/' || operateor == '%') && b == 0)
    {
        printf(" loi chia cho 0");
    }
    else if (operateor == '/')
    {
        printf(" ket qua phep chia %f", a /b);
    }
    else if (operateor == '%')
    {
        printf(" ket qua phep chia du %d", a %b);
    }
    else if (operateor == '*')
    {
        printf(" ket qua phep nhan %d", a * b);
    }
    else if (operateor == '+')
    {
        printf(" ket qua phep cong du %d", a + b);
    }
    else if (operateor == '-')
    {
        printf(" ket qua phep tru du %d", a - b);
    }

}