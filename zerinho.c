/*
    Problema A
    Zerinho ou Um

    Todos devem conhecer o jogo Zerinho ou Um (em algumas regi˜oes tamb´em 
    conhecido como Dois ou Um), utilizado para determinar um ganhador entre tres
    ou mais jogadores. Para quem n˜ao conhece, o jogo funciona da seguinte
    maneira. Cada jogador escolhe um valor entre zero ou um; a um comando
    (geralmente um dos competidores anuncia em voz alta “Zerinho ou... Um!”),
    todos os participantes mostram o valor escolhido, utilizando uma das maos:
    se o valor escolhido foi um, o competidor mostra o dedo indicador estendido;
    se o valor escolhido foi zero, mostra a m˜ao com todos os dedos fechados.
    O ganhador ´e aquele que tiver escolhido um valor diferente de todos os 
    outros; se n˜ao h´a um jogador com valor diferente de todos os outros
    (por exemplo todos os jogadores escolhem zero, ou um grupo de jogadores 
    escolhe zero e outro grupo escolhe um), n˜ao h´a ganhador.

    Alice, Beto e Clara s˜ao grandes amigos e jogam Zerinho a toda hora: para 
    determinar quem vai comprar a pipoca durante a sess˜ao de cinema, quem vai
    entrar na piscina primeiro, etc. Jogam tanto que resolveram fazem um plugin
    no Facebook para jogar Zerinho. Como n˜ao sabem programar, dividiram as
    tarefas entre amigos que sabem, inclusive vocˆe. Dados os trˆes valores
    escolhidos por Alice, Beto e Clara, cada valor zero ou um, escreva um 
    programa que determina se h´a um ganhador, e nesse caso determina quem
    é o ganhador.

    Solução por Glauber Gonçalves
*/

#include <stdio.h>

void VerificaGanhador(int a, int b, int c)
{
    if(a != b && a != c)
    printf("A");
    
    else
    if(b != a && b != c)
    printf("B");
    
    else
        if(c != a && c != b)
        printf("C");
    else
        printf("*");
}

void main()
{
    int A, B, C;
    
    scanf("%d", &A);
    scanf("%d", &B);
    scanf("%d", &C);
    
    VerificaGanhador(A, B, C);
}