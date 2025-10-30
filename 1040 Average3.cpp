#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double n1, n2, n3, n4;
    cin >> n1 >> n2 >> n3 >> n4;

    double average = (n1 * 2 + n2 * 3 + n3 * 4 + n4 * 1) / 10.0;

    cout << fixed << setprecision(1);
    cout << "Media: " << average << endl;

    if (average >= 7.0) {
        cout << "Aluno aprovado." << endl;
    } else if (average < 5.0) {
        cout << "Aluno reprovado." << endl;
    } else {
        cout << "Aluno em exame." << endl;

        double exam_score;
        cin >> exam_score;
        cout << "Nota do exame: " << exam_score << endl;

        double final_average = (average + exam_score) / 2.0;

        if (final_average >= 5.0) {
            cout << "Aluno aprovado." << endl;
        } else {
            cout << "Aluno reprovado." << endl;
        }
        cout << "Media final: " << final_average << endl;
    }

    return 0;
}
