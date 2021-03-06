/**
* @file 		searchs.h
* @brief 		Funções de busca
* @details 		Contém a declaração das funções que fazem buscas do tipo sequencial, binária e ternárias, 
*            	nas suas respectivas formas iterativa e recursiva.
* @author		David Cardoso
* @since		10/09/2016
* @date			13/09/2016
* @copyright 	2016 - All rights reserveds
* @sa 			https://github.com/davidcardoso-ti/search-algorithms/blob/master/searchs.h
*/

#ifndef 	_SEARCHS_H_
#define 	_SEARCHS_H_
#pragma		once

#include "aux.h" 	// funcoes e recursos auxiliares

using namespace std;


/**
 * @brief			Função busca SEQUENCIAL na forma ITERATIVA
 * @details			Esse tipo de busca testa cada elemento do vetor até encontrar a chave ou atingir o final do vetor.
 *            		O vetor não precisa estar ordenado.
 * @param  chave   	valor a ser encontrado no vetor
 * @param  vetor   	vetor a ser percorrido
 * @param  left		nao usado
 * @param  tamanho 	tamanho do vetor
 * @return         	retorna o indice da posição que se encontra a chave ou -1, caso não encontre
 */
int busca_sequencial_ite	(int chave, int* vetor, int left, int tamanho);

/**
 * @brief			Função busca SEQUENCIAL na forma RECURSIVA
 * @details			Esse tipo de busca testa cada elemento do vetor até encontrar a chave ou atingir o final do vetor.
 *            		O vetor não precisa estar ordenado.
 * @param  chave   	valor a ser encontrado no vetor
 * @param  vetor   	vetor a ser percorrido
 * @param  left		nao usado
 * @param  tamanho 	tamanho do vetor
 * @return         	retorna o indice da posição que se encontra a chave ou -1, caso não encontre
 */
int busca_sequencial_rec	(int chave, int* vetor, int left, int tamanho);

/**
 * @brief			Função busca BINÁRIA na forma ITERATIVA
 * @details			Esse tipo de busca utiliza a idea de 'dividir para conquistar'.
 *            		O vetor é dividido gradativamente em duas partes e vai sendo testado em qual parte deve estar a chave 
 *            		até encontrá-la ou atingir um subvetor unitário.
 *            		O vetor precisa estar ordenado.
 * @param  chave   	valor a ser encontrado no vetor
 * @param  vetor   	vetor a ser percorrido
 * @param  left		inicio do trecho a ser testado
 * @param  right 	fim do trecho a ser testado
 * @return         	retorna o indice da posição que se encontra a chave ou -1, caso não encontre
 */
int busca_binaria_ite		(int chave, int* vetor, int left, int right);

/**
 * @brief			Função busca BINÁRIA na forma RECURSIVA
 * @details			Esse tipo de busca utiliza a idea de 'dividir para conquistar'.
 *            		O vetor é dividido gradativamente em duas partes e vai sendo testado em qual parte deve estar a chave 
 *            		até encontrá-la ou atingir um subvetor unitário.
 *            		O vetor precisa estar ordenado.
 * @param  chave   	valor a ser encontrado no vetor
 * @param  vetor   	vetor a ser percorrido
 * @param  left 	inicio do trecho a ser testado
 * @param  right 	fim do trecho a ser testado
 * @return         	retorna o indice da posição que se encontra a chave ou -1, caso não encontre
 */
int busca_binaria_rec		(int chave, int* vetor, int left, int right);

/**
 * @brief			Função busca TERNÁRIA na forma ITERATIVA
 * @details			Esse tipo de busca utiliza a idea de 'dividir para conquistar'.
 *            		O vetor é dividido gradativamente em três partes e vai sendo testado em qual parte deve estar a chave 
 *            		até encontrá-la ou atingir um subvetor unitário.
 *            		O vetor precisa estar ordenado.
 * @param  chave   	valor a ser encontrado no vetor
 * @param  vetor   	vetor a ser percorrido
 * @param  left		inicio do trecho a ser testado
 * @param  right 	fim do trecho a ser testado
 * @return         	retorna o indice da posição que se encontra a chave ou -1, caso não encontre
 */
int busca_ternaria_ite		(int chave, int* vetor, int left, int right);

/**
 * @brief			Função busca TERNÁRIA na forma RECURSIVA
 * @details			Esse tipo de busca utiliza a idea de 'dividir para conquistar'.
 *            		O vetor é dividido gradativamente em três partes e vai sendo testado em qual parte deve estar a chave 
 *            		até encontrá-la ou atingir um subvetor unitário.
 *            		O vetor precisa estar ordenado.
 * @param  chave   	valor a ser encontrado no vetor
 * @param  vetor   	vetor a ser percorrido
 * @param  left		inicio do trecho a ser testado
 * @param  right 	fim do trecho a ser testado
 * @return         	retorna o indice da posição que se encontra a chave ou -1, caso não encontre
 */
int busca_ternaria_rec		(int chave, int* vetor, int left, int right);


#endif