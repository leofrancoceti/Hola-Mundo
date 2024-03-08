#include <iostream>
using namespace std;

class Personaje
{
private:
    
public:
  Personaje(){}
  ~Personaje(){}
  void Hablar(){
    

  }
};
class Duende :
{
private:
    
public:
  Personaje(){}
  ~Personaje(){}
  void Hablar(){
    

  }
};
class Enano
{
private:
    float altura;
    int edad;

public:
  Enano(){}
  ~Enano(){}
  void Inicializar(){
    this-> vida= 10;
    this->altura = 2;
    this->edad = 150;
   

  }
};
int main(int argc, char const *argv[])
{
    int i = 5;
    bool b = true;
    float f = 0.1;
    double d = 0.1;
    char c = 'a';
    Enano e;

    cout << "Tamaño int:" << sizeof(int) << "bytes." << endl;
    cout << "Tamaño bool:" << sizeof(bool) << "bytes." << endl;
    cout << "Tamaño float:" << sizeof(float) << "bytes." << endl;
    cout << "Tamaño double:" << sizeof(double) << "bytes." << endl;
    cout << "Tamaño char:" << sizeof(char) << "bytes." << endl;

    cout << endl;
    cout << "Mmeoria Estatica c/c++:" << endl;
    cout << "Direccion de int:" << &i << endl;
    cout << "Direccion de bool:" << &b << endl;
    cout << "Direccion de float:" << &f << endl;
    cout << "Direccion de double:" << &d << endl;
    cout << "Direccion de char:" << static_cast<void *>(&c) << endl;
    cout << "Direccion de Enano:" << &e << endl;

    cout << endl;
    cout << "Memoria Dinamica:" << endl;
    cout << "Direccion Dinamica:" << malloc(2) << endl;
    cout << "Direccion Dinamica:" << malloc(sizeof(int)) << endl;
    
    //casteo de punteros en c
    Enano* direccion = (Enano*)malloc(sizeof(Enano));
    
    direccion->Inicializar();
      
    //casteo de punteros en c++
    Enano* instancia = new Enano;

    //operador
    instancia->Comer();
      instancia->Hablar();

      //Polifordismo
      Personaje* p = new Duende();
       Personaje* q = new Enano();

      p->Hablar();
      q->Hablar();
      cout << "Direccion P:" << p << endl;

      //Arreglos
      Duende duendes[10];
      cout<<endl;
      cout<<&duendes[0]<<endl;
      cout<<&duendes[1]<<endl;
      cout<<&duendes[2]<<endl;
      cout<<&duendes[3]<<endl;
      cout<<&duendes[4]<<endl;
      //Conversion de direcciion 
      cout<<endl;
      cout<<&duendes[0]+0<<endl;
      cout<<&duendes[0]+1<<endl;
      cout<<&duendes[0]+2<<endl;
      cout<<&duendes[0]+3<<endl;
      cout<<&duendes[0]+4<<endl;

     cout<<endl;
      cout<<duende+0<<endl;
      cout<<duende+1<<endl;
      cout<<duende+2<<endl;
      cout<<duende+3<<endl;
      cout<<duende+4<<endl;


    return 0;
}