/**
* @file 		aux.h
* @brief 		Funções, registros, enumerações e outros recursos auxiliares.
* @details 		Contém a declaração de funções, registros, enumerações e outros recursos auxiliares.
* @author		David Cardoso
* @since		10/09/2016
* @date			13/09/2016
* @copyright 	2016 - All rights reserveds
* @sa 			https://github.com/davidcardoso-ti/search-algorithms/blob/master/aux.h
*/

#ifndef 	_AUX_H_
#define 	_AUX_H_
#pragma		once

#include <iostream>         // iostream - in|out streams
#include <string>           // classe string
#include <cstring>          // manipulação de strings
#include "searchs.h"		// funcoes de busca

using namespace std;

// Ponteiro para função de busca
using pSearch = int (*)(int, int*, int, int);

/**
 * Enumeração Searchs com os tipos de busca permitidos
 */
enum Searchs {
	BSI,	/**< Busca Sequencial Iterativa */
	BSR,	/**< Busca Sequencial Recursiva */
	BBI,	/**< Busca Binária Iterativa */
	BBR,	/**< Busca Binária Recursiva */
	BTI,	/**< Busca Ternária Iterativa */
	BTR,	/**< Busca Ternária Recursiva */
	NA  	/**< Nao se Aplica */
};

/**
 * @brief 			Função para selecionar o tipo de busca
 * @details		 	Trata o tipo de busca e define o ponteiro de busca para apontar para a função de busca corretamente
 * @param  opcao 	enumeração tipo de busca
 * @param  p_search ponteiro de funcao para busca
 * @return       	true ou false'
 */
bool seleciona_busca(Searchs opcao, pSearch* p_search);

/**
 * @brief             Função workloadFill
 * @details           Preenche o vetor a ser usado como workload
 * @param v           ponteiro para o vetor
 * @param size_vector tamanho do vetor
 */
void workloadFill(int* v, int size_vector);


#endif