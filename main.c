#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct
{
    int x, y;
} ponto;

ponto le();
int quadrante(ponto z);
float distancia(ponto z, ponto w);

int main()
{

    ponto p1, p2;
    int quadrap1;
    int quadrap2;
    float dist;

    p1 = le();

    quadrap1 = quadrante(p1);

    if (quadrap1 == 1)
    {
        printf("Primeiro quadrante.\n");
    }
    else if (quadrap1 == 2)
    {
        printf("segundo quadrante.\n");
    }
    else if (quadrap1 == 3)
    {
        printf("Terceiro quadrante.\n");
    }
    else if (quadrap1 == 4)
    {
        printf("Quarto quadrante.\n");
    }
    else
    {
        printf("invalido.");
    }

    p2 = le();

    quadrap2 = quadrante(p2);

    if (quadrap2 == 1)
    {
        printf("Primeiro quadrante.\n");
    }
    else if (quadrap2 == 2)
    {
        printf("segundo quadrante.\n");
    }
    else if (quadrap2 == 3)
    {
        printf("Terceiro quadrante.\n");
    }
    else if (quadrap2 == 4)
    {
        printf("Quarto quadrante.\n");
    }
    else
    {
        printf("\ninvalido.");
    }

    dist = distancia(p1, p2);
    printf("A distancia entre os dois pontos sao %f\n", dist);
    printf("--------------------------------------------------------------\n");

    p1 = le();
    p2 = le();

    dist = distancia(p1, p2);
    printf("A distancia entre os dois pontos sao %f\n", dist);

    int maior = maiorponto(p1);

    if (maior == 1)
    {
        printf("o maior valor e o x.\n");
    }
    else
    {
        printf("o maior valor e o y.\n");
    }

    maior = maiorponto(p2);
    if (maior == 1)
    {
        printf("o maior valor e o x.\n");
    }
    else
    {
        printf("o maior valor e o y.\n");
    }

    return 0;
}

ponto le()
{
    ponto z;
    printf("ponto x e y:");
    scanf("%d %d", &z.x, &z.y);
    return z;
}

int quadrante(ponto z)
{
    if (z.x > 0 && z.y > 0)
    {
        return 1; // primeiro quadrante
    }
    else if (z.x < 0 && z.y > 0)
    {
        return 2; // segundo quadrante
    }
    else if (z.x < 0 && z.y < 0)
    {
        return 3; // terceiro quadrante
    }
    else if (z.x > 0 && z.y < 0)
    {
        return 4; // quarto quadrante
    }
    else
    {
        return 0;
    }
}

float distancia(ponto z, ponto w)
{
    int d = ((w.x - z.x) * (w.x - z.x)) + ((w.y - z.y) * (w.y - z.y));
    float res = sqrt(d);
    return res;
}

int maiorponto(ponto z)
{
    if (z.x > z.y)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

