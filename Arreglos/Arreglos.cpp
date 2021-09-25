#include <iostream>
#include<array>
#define LEN 3
using namespace std;

void ImprimeArreglo(array<float, LEN> arreglo);
array<float, LEN> LlenaArreglo(void);
array<float, LEN> MultiplicaArreglo(array<float, LEN> arreglo, float multiplo);
array<float, LEN> SumaArreglo(array<float, LEN> arreglo11, array<float, LEN> arreglo22);

int main()
{
    char decision;
    array<float, LEN> arreglo1 = { 0 };
    array<float, LEN> arreglo2 = { 0 };
    array<float, LEN> arreglo3 = { 0 };
    arreglo1 = LlenaArreglo();
    cout << "Operar: ";
    cin >> decision;
    while (decision != '+' && decision != '*')
    {
        cout << "Operar: ";
        cin >> decision;
    }
    if (decision == '*') {
        float factor;
        cout << "Factor: ";
        cin >> factor;
        arreglo3 = MultiplicaArreglo(arreglo3, factor);
        cout << "Resultado: ";
        ImprimeArreglo(arreglo3);
    }
    else if (decision == '+') {
        array<float, LEN> arreglo2 = {0};
        arreglo2 = LlenaArreglo();
        arreglo1 = SumaArreglo(arreglo3, arreglo2);

        cout << "Resultado: ";
        ImprimeArreglo(arreglo2);
    }
    return 0;
}
void ImprimeArreglo(array<float, LEN> arreglo)
{
    for (int i = 0; i < LEN; i++)
        cout << arreglo[i] << ' ';
    cout << '\n';
}
array<float, LEN> LlenaArreglo()
{
    array<float, LEN> arre= {0};
    for(int i=0; i<LEN; i++){
        cout<< "Valor Elemento ["<<i<<"]:";
        cin>>arre[i];
    }
    return arre;
}
array<float, LEN> MultiplicaArreglo(array<float, LEN> arr, float factor)
{
    array<float, LEN> multiplicacion= {0};
    for(int i=0; i<LEN; i++){
        multiplicacion[i]= arr[i]*factor;

    }
    return multiplicacion;
}
array<float, LEN> SumaArreglo(array<float, LEN> arreglo11, array<float, LEN> arreglo22)
{
    array<float, LEN> suma= {0};
    for(int i=0; i<LEN; i++){
        suma[i]= arreglo11[i]+ arreglo22[i];
    }
    return suma;
}
