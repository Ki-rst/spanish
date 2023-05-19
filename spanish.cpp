#include <stdlib.h>

#include <iostream>
#include <string>
#include <vector>
using namespace std;

string giveQuestion() {
  srand(time(0));
  int qNum;
  vector<string> questions{
      "¿Qué estudias? ¿Dónde?",
      "¿Cómo se llama tu madre?",
      "¿Tienes hermanos?",
      "¿A qué se dedican tus padres?",
      "¿Cuál es tu color favorito? ¿Por qué?",
      "¿Cuál es tu libro favorito? ¿Por qué?",
      "¿A qué hora te levantas normalmente durante la semana?",
      "¿Qué haces el fin de semana?",
      "¿Te gusta levantarte temprano?",
      "¿A qué hora tienes clase?",
      "¿Cuál es tu bebida favorita? ¿Por qué?",
      "¿Cuál es tu comida favorita? ¿Por qué?",
      "¿Cocinas? ¿Cuál es tu especialidad?",
      "¿Cómo tomas el café?",
      "¿Qué desayunas normalmente?",
      "¿Dónde vives?",
      "¿Qué ciudades del mundo hispano quieres visitar? ¿Por qué?",
      "¿Prefieres la playa o la montaña? ¿?",
      "En tu opinión, ¿cuál es el mejor clima para viajar?",
      "¿A dónde vas a ir en tus próximas vacaciones?"};
  qNum = rand() % 20;
  return questions.at(qNum);
}

int main(void) {
  cout << giveQuestion() << endl;
  return 0;
}