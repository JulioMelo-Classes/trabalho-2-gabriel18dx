#ifndef SERVIDOR_H
#define SERVIDOR_H
#include "canaltexto.h"

class Servidor{
	int usuarioDonold;
	string nome, descricao, codigoConvite;
	vector< CanalTexto > canaisTexto;
	vector< int > participantesIDs;
};

#endif
