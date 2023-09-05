#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    float y, a, x, b, p;
    // y = ax + b; onde a != 0;
    float xi; //valor inicial
    float xf; //valor final
    // p = (xf - xi) / 10;

    printf(" O programa constitui-se em uma função de primeiro grau 'y = ax + b'.\n Digite o valor de a, b, xi, xf - Com o mesmo padrão do exemplo, em 1 input separados por vírgula\n sendo; 'xi' = valor inicial e 'xf' = valor final\n");
    printf(" Digite os valores a, b, xi, xf : ");
    scanf("%f %f %f %f", &a, &b, &xi, &xf);


    if( a == 0 || a == 0.0 ){
        printf(" \nOs valores não serão possíveis para o cálculo pois a = 0, por favor, tente novamente");
        return 1;
    }else;

    printf(" \n Os valores escolhidos são: a = %.2f | b = %.2f | xi = %.2f | xf = %.2f |\n", a, b , xi, xf);

    p = (xf - xi) / 10;
    printf(" |  x     |   y\n");

    for(float i = xi; i <= xf; i += p){
        y = a * i + b;

        printf(" | %5.2f  | %5.2f\n", i, y);
    }
    return 0;
}

