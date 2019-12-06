//declarando diretiva 'if not define' para ui.h (para nao duplicar a chamada ui.h) (como se fosse um if para o compilador)
#ifndef _FOGEFOGE_H_
#define _FOGEFOGE_H_

#define CIMA 'w'
#define BAIXO 's'
#define ESQUERDA 'a'
#define DIREITA 'd'
#define BOMBA 'b'

void move(char direcao);
int acabou();
int ehdirecao(char direcao);
void fantasmas();
int praondefantasmavai(int xatual, int yatual, int* xdestino, int*ydestino);
void explodepilula2(int x, int y, int somax, int somay, int qtd);
void explodepilula();

#endif