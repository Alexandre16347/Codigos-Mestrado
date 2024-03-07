#include <iostream>

using namespace std;

int calcularSomatorio(int n) {
    int somaTotal = 0;
    for (int i = 1; i <= n; ++i) {
        int somaParcial = 0;
        cout << "i = " << i << endl;

        for (int j = i + 1; j <= n; ++j) {
            somaParcial += 2 * j; // Calcula a soma parcial para cada valor de j
            cout << "\tj = " << j << "\t valor = " << 2*j << endl;
        }
        somaTotal += somaParcial; // Adiciona a soma parcial à soma total

        cout << "soma parcial = " << somaParcial << endl << endl;

        // cout << "soma de i = " << somaTotal << "\t soma parcial de j = " << somaParcial << endl;
    }
    return somaTotal;
}

int main() {
    int n;
    cout << "Digite um número inteiro positivo n: ";
    cin >> n;

    int resultado = calcularSomatorio(n);

    cout << endl << endl << "O somatório da expressão para os valores de i=1 até " << n << " é: " << resultado << endl;

    return 0;
}
