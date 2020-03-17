#include <iostream>
// Subsistemas controlados por la fachada
// SubSistema 1
class SubSistema1
{
public:
	void Metodo1(){ std::cout << "SubSistema 1" << std::endl; };
};

// SubSistema 2
class SubSiestema2
{
public:
	void Metodo2(){ std::cout << "SubSistema 2" << std::endl; };
};

// SubSistema 3 
class SubSistema3
{
public:
	void Metodo3(){ std::cout << "SubSistema 3" << std::endl; }
};


// Fachada
class Fachada
{
public:
    Fachada()
    {
	pUno = new SubSistema1();
	pDos = new SubSiestema2();
	pTres = new SubSistema3();
    }

    void MetodoA()
    {
	std::cout << "MetodoA Fachada" << std::endl;
	pUno->Metodo1();
	pDos->Metodo2();
    }

    void MethodB()
    {
	std::cout << "MetodoB Fachada" << std::endl;
	pDos->Metodo2();
	pTres->Metodo3();
    }

private:
    SubSistema1 *pUno;
    SubSiestema2 *pDos;
    SubSistema3 *pTres;
};

int main()
{
    Fachada *pFachada = new Fachada();

    pFachada->MetodoA();
    pFachada->MethodB();

    return 0;
}