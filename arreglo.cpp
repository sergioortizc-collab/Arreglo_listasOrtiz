#include <iostream>
using namespace std;

struct Nodo{
    int dato;
    Nodo* siguiente;
};
 class Pila{
private:
    Nodo* top;

public:
    Pila(){
        top = NULL;
    }

    bool estaVacia(){
        return top == NULL;
    }
    void push(int valor){
        Nodo* nuevo = new Nodo();

        nuevo->dato = valor;
        nuevo->siguiente = top;

        top = nuevo;

        cout << "se agrego: " << valor << endl;
    }

    int pop(){
        if(estavacia()){
            cout << "Error" << endl;
            return -1;
        }
        Nodo* auxiliar = top;
        int valor = auxiliar->dato;
        top = top->siguiente;
        delete = auxiliar,
        return valor;
    }

    int peek(){
        if(estaVacia()){
            cout << "La pila esta vacia" << endl;
            return -1;
        }
        return top->dato;
    }

    ~Pila(){
        while(!estaVacia()){
            pop();
        }
    }
};

int main(){
    Pila pila;

    pila.push(100);
    pila.push(200);
    pila.push(300);

    cout << "Elemento superior: " << pila.peek() << endl;
    cout << "Elemento eliminado: " << pila.pop() << endl;
    cout << "Elemento superior: " << pila.peek() << endl;

    return 0;
}