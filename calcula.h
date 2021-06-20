
using namespace std;

namespace calc{

 struct tCircuitos{

 float r1;
 float r2;
 float v1;
 float res_serie;
 float res_paralelo;
 float corrente_serie;
 float corrente_paralelo;
 float pot_serie;
 float pot_paralelo;

  void insereValores(float R1, float R2, float V1){
  r1 = R1;
  r2 = R2;
  v1 = V1;
  }
 
  void Calculo(){ // Função calcula resistencia, corrente e potencia. 

  res_serie = r1 + r2;
  cout<<"Resistência em série: " << res_serie <<" ohms" << endl;
  
  res_paralelo = (r1*r2)/(r1+r2);
  cout<<"Resistência em paralelo: " << res_paralelo <<" ohms" << endl;

  corrente_serie = v1/res_serie;
  cout<<"Corrente em série: " << corrente_serie << " A" << endl;
  

  corrente_paralelo = v1/res_paralelo;
  cout<<"Corrente em paralelo: " << corrente_paralelo << " A" << endl;

  
  pot_serie = v1*corrente_serie;
  cout<<"Potencia em série: " << pot_serie << " W" << endl;
  
  pot_paralelo = v1*corrente_paralelo;
  cout<<"Potencia em paralelo: " << pot_paralelo << " W" << endl;
  }

 };

}