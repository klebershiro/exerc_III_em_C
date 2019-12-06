//declarando diretiva 'if not define' para ui.h (para nao duplicar a chamada ui.h) (como se fosse um if para o compilador)
#ifndef _UI_H_
#define _UI_H_

#include "mapa.h"

void imprimi_mapa(MAPA* m);
void imprimeparte(char desenho[4][7], int parte);

#endif