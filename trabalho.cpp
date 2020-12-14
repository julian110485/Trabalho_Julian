#include <iostream>
#include <time.h>

struct rgAgora {
  int dia, mes, ano;
  int h, m, s;
};

int main() {
  
  int diaCadastro = 0;
  int mesCadastro = 0;
  int anoCadastro = 0;
  float valor = 0;
  
  
  char ds[7][4] = {"dom", "seg", "ter", "qua", "qui", "sex", "sab"};

  struct tm tempo;
  time_t tempoSeg;

  time(&tempoSeg);
  tempo = *localtime(&tempoSeg);

  struct rgAgora agora;

  agora.dia = tempo.tm_mday;
  agora.mes = tempo.tm_mon + 1;
  agora.ano = tempo.tm_year + 1900;
  agora.h = tempo.tm_hour;
  agora.m = tempo.tm_min;
  agora.s = tempo.tm_sec;

	printf("Hoje eh %02d/%02d/%d (%s) as %02d:%02d:%02d horas.\n\n",
	agora.dia, agora.mes, agora.ano, ds[tempo.tm_wday], agora.h, agora.m, agora.s);

	std::cout << "Digite abaixo os dados" << std::endl;

	std::cout << "Informe o dia:" << std::endl;
	std::cin >> diaCadastro;

	std::cout << "Informe o mes:" << std::endl;
	std::cin >> mesCadastro;

	std::cout << "Informe o ano:" << std::endl;
	std::cin >> anoCadastro;

	std::cout << "Digite o Valor:" << std::endl;
	std::cin >> valor;

	std::cout << diaCadastro << "/" << mesCadastro << "/" << anoCadastro << ": " << valor << std::endl;

  return(0);
}
