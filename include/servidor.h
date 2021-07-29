#ifndef SERVIDOR_H
#define SERVIDOR_H
#include "canaltexto.h"

/*
CP1 classe servidor 50%
Como você não fez qualquer método ou usou qualquer coisa da classe vou considerar 50%
*/
class Servidor{
	int usuarioDonold;
	std::string nome, descricao, codigoConvite;
	std::vector< CanalTexto > canaisTexto;
	std::vector< int > participantesIDs;
};

#endif
