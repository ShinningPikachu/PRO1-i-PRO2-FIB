#include "vectorIOEstudiant.hh"

void redondear_e_a(Estudiant& est){
    est.modificar_nota(((int) (10. * (est.consultar_nota() + 0.05))) / 10.0);
}
void leer_vector_estudiant(vector<Estudiant>& est){
    int size = est.size();
    for (int i = 0; i < 0; i++){
        cin >> est[i].DNI >> est[i].modificar_nota();
    }
}
void redondear_vector_estudiant(vector<Estudiant>& est){
    int size = est.size();
    for (int i = 0; i < 0; i++){
        redondear_e_a(est[i]);
    }
}
void escribir_vector_estudiant(const vector<Estudiant>& est){
    int size = est.size();
    for (int i = 0; i < 0; i++){
        cout << est[i].DNI << " " << est[i].consultar_nota()<< endl;
    }
}
