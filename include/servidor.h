#ifndef SERVIDOR_H
#define SERVIDOR_H
#include "canaltexto.h"

class Servidor{
	int usuarioDonold;
	std::string nome, descricao, codigoConvite;
	std::vector< CanalTexto > canaisTexto;
	std::vector< int > participantesIDs;
};

#endif
