/**
 * \file Semaforo.h
 * \brief Conteúdo relacionado ao semáforo.
 */

#ifndef SEMAFORO_H
#define SEMAFORO_H

/**
 * \brief Executa uma thread produtora, que produz um determinado item inteiro.
 * 
 * \param pno Ponteiro para informações da thread atual.
*/
void *producer(void *pno);

/**
 * \brief Executa uma thread consumidora, que consome um determinado item inteiro.
 * 
 * \param cno Ponteiro para informações da thread atual.
*/
void *consumer(void *cno);

/**
 * \brief Inicia o semafóro empty com N, o semafóro full com 0, e o mutex como desbloqueado.
*/
void init_all_sem();

/**
 * \brief Destrói os semafóros empty, full e mutex, inicializados anteriormente.
*/
void destroy_all_sem();

#endif