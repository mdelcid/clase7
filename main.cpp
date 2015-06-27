#include <iostream>
#include <queue>
#include <stack>
#include <set>
#include <vector>
#include <list>
#include <map>

//stl standar template library
using namespace std;

class Ejemplo
{
public:
    string str;
    int num;
    Ejemplo(string str, int num)
    {
        this->str = str;
        this->num = num;
    }
    Ejemplo(string str)
    {
        this->str = str;
    }
};

int main()
{

    ////MAP/MULTIMAP
//    map<string,int>mi_mapa;//map es para asignar un numero a la letra
//    mi_mapa["A"]=10;
//    mi_mapa["B"]=20;
//    mi_mapa["C"]=30;
//    cout<<mi_mapa["A"]<<endl;
//    cout<<mi_mapa["B"]<<endl;
//    cout<<mi_mapa["C"]<<endl;

    cout<<"Map"<<endl;
    map<float,bool>mi_mapa;//map es para asignar un numero a la letra, y reemplaza los valores
    mi_mapa[32.1]=true;
    mi_mapa[43.23]=false;
    mi_mapa[43.23]=true;//este valor reemplaza el primer valor de 43.23
    mi_mapa[53.1]=false;
    cout<<mi_mapa[32.1]<<endl;
    cout<<mi_mapa[43.23]<<endl;
    cout<<mi_mapa[53.1]<<endl;

    cout<<"Multimap"<<endl;//multimap siempre repite los valores
    multimap<string,int>mi_multimapa;
    mi_multimapa.insert(pair<string,int>("A",10));
    mi_multimapa.insert(pair<string,int>("B",20));
    mi_multimapa.insert(pair<string,int>("C",30));
    mi_multimapa.insert(pair<string,int>("A",40));

    for(multimap<string,int>::iterator i = mi_multimapa.begin();
    i!=mi_multimapa.end();
    i++)
    cout<<(*i).first<<","<<(*i).second<<endl;



//    ////VECTOR
//    cout<<"Vector"<<endl;
//    vector<int>mi_vector;
//    mi_vector.push_back(10);
//    mi_vector.push_back(20);
//    mi_vector.push_back(30);
//    for(int i=0;i<mi_vector.size();i++)
//    {
//        cout<<mi_vector[i]<<endl; //aqui se usa [] porque usamos formulas
//    }
//
//    cout<<"List"<<endl;
//    list<string>mi_lista;
//    mi_lista.push_back("A");//back es para ponerlo atras del primer valor
//    mi_lista.push_back("B");
//    mi_lista.push_back("C");
//    mi_lista.push_front("X");//front para ponerlo enfrente
//    mi_lista.insert(mi_lista.begin(),"Y");//se pone al principio de la lista
////    list<string>::iterator i_temp=mi_lista.begin();
////    i_temp++;
////    i_temp++;//temp++ es para agregar el valor en cierto nivel o reglon
////    mi_lista.insert(i_temp, "Y");
//
//    for(list<string>::iterator i=mi_lista.begin();//se usa iterator porque tiene que ir uno por uno
//        i!=mi_lista.end();
//        i++)
//        cout<<*i<<endl;

    ////SET/MULTISET
//    multiset<int>mi_set;//multiset pone todo en orden, el set solo imprime 1 valor de cada uno siempre en orden
//    mi_set.insert(10);
//    mi_set.insert(30);
//    mi_set.insert(20);
//    mi_set.insert(30);
//    mi_set.insert(10);
//    mi_set.insert(30);
//
//
//if(mi_set.find(10)!=mi_set.end());//el find se usa para buscar l oque se pide
//cout<<"El 10 existe"<<endl;
//
//if(mi_set.find(30)!=mi_set.end());
//cout<<"El 30 existe"<<endl;
//
//if(mi_set.find(40)!=mi_set.end());
//cout<<"El 40 existe"<<endl;
//
//    for(multiset<int>::iterator i=mi_set.begin();  //este se pone sin usar find
//    i!=mi_set.end();
//    i++)
//
//
//    {
//        cout<<*i<<endl;
//    }


    ////QUEUE
//    queue<string> mi_cola;//string es para poner letras, e int para poner numeros
//    mi_cola.push("juan");
//    mi_cola.push("maria");
//    mi_cola.push("pedro");
//
//    while(!mi_cola.empty())
//    {
//        cout<<mi_cola.front()<<endl;
//        mi_cola.pop();
//    }

//queue<Ejemplo*>mi_cola;   //esto se hace con lo primero que tengo arriba del main
//mi_cola.push(new Ejemplo("A", 10));
//mi_cola.push(new Ejemplo("B", 20));
//mi_cola.push(new Ejemplo("C", 30));
//mi_cola.push(new Ejemplo("D"));
//
//while(!mi_cola.empty())
//    {
//        cout<<mi_cola.front()->str<<endl;
//         cout<<mi_cola.front()->num<<endl;
//        mi_cola.pop();
//    }


    ////STACK
//stack<int>mi_stack;//en el stack se lee primero el ultimo que entra hasta llegar al primero que entra
//mi_stack.push(10);
//mi_stack.push(20);
//mi_stack.push(30);
//
//while(!mi_stack.empty())
//{
//    cout<<mi_stack.top()<<endl;
//    mi_stack.pop();
//}


//stack<char>mi_stack;
//mi_stack.push('a');
//mi_stack.push('b');
//mi_stack.push('c');
//
//int tam=mi_stack.size();
//
//for(int i=0;i<tam;i++)
//{
//    cout<<mi_stack.top()<<endl;
//    mi_stack.pop();
//}
    return 0;
}
