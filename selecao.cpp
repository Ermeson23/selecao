//Questão 2

#include <iostream>

using namespace std;

int main()
{
    int num, a = 0, b = 1, c;

    cout << "Digite um numero: ";
    cin >> num;

    while (a <= num) {
        if (a == num) {
            cout << num << " pertence a sequencia de Fibonacci." << endl;
            return 0;
        }
        c = a + b;
        a = b;
        b = c;
    }

    cout << num << " nao pertence a sequencia de Fibonacci." << endl;

    return 0;
}


//Questão 3

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<float> faturamento = { 1200.50, 800.20, 1500.00, 1000.70, 950.30, 1300.80, 1800.10, 700.90, 1100.60, 1400.40, 1700.10, 900.20, 950.30, 1800.00, 1000.80, 1250.50, 1350.10, 1400.70, 1150.90, 1300.30, 900.50, 1600.20, 1750.90, 1100.40, 1400.80, 1200.10, 1500.30, 1700.60, 800.70, 1100.20 };
    float soma = 0, media;
    int dias_acima_media = 0;

    // Calcula o menor valor de faturamento diário
    float menor = *min_element(faturamento.begin(), faturamento.end());

    // Calcula o maior valor de faturamento diário
    float maior = *max_element(faturamento.begin(), faturamento.end());

    // Calcula a média mensal de faturamento diário
    for (int i = 0; i < faturamento.size(); i++) {
        soma += faturamento[i];
    }
    media = soma / faturamento.size();

    // Calcula o número de dias em que o faturamento diário foi superior à média mensal
    for (int i = 0; i < faturamento.size(); i++) {
        if (faturamento[i] > media) {
            dias_acima_media++;
        }
    }

    cout << "O menor valor de faturamento diario e: " << menor << endl;
    cout << "O maior valor de faturamento diario e: " << maior << endl;
    cout << "O numero de dias em que o faturamento diario foi superior a media mensal e: " << dias_acima_media << endl;

    return 0;
}


//Questão 4

#include <iostream>

using namespace std;

int main()
{
    float total_mensal = 201759.98;
    float sp = 67836.43, rj = 36678.66, mg = 29229.88, es = 27165.48, outros = 19849.53;

    cout <<"SP: " << ((sp/total_mensal)* 100) << " %" <<endl;
    cout <<"RJ: " << ((rj/total_mensal)* 100) << " %" <<endl;
    cout <<"MG: " << ((mg/total_mensal)* 100) << " %" <<endl;
    cout <<"ES: " << ((es/total_mensal)* 100) << " %" <<endl;
    cout <<"Outros: " << ((outros/total_mensal)* 100) << " %" <<endl;

}

//Questão 5

#include <iostream>

using namespace std;

int main()
{
    string palavra, palavraInvertida="";
    cin >> palavra;
    for(int i=0; i < palavra.length(); i++)
        palavraInvertida = palavra[i] + palavraInvertida;
    cout << palavraInvertida << endl;

    return 0;

}

