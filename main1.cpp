#include <iostream>
#include <string>
#include <iomanip>

int main() {
    int categoria, curso;
    std::string nomeCurso;
    double valorCurso = 0;

    std::cout << std::fixed << std::setprecision(2);

    std::cout << "===== CATEGORIAS =====" << std::endl;
    std::cout << "1 - Cursos Tecnicos" << std::endl;
    std::cout << "2 - Cursos EAD" << std::endl;
    std::cout << "3 - Cursos Livres" << std::endl;
    std::cout << "4 - Idiomas" << std::endl;

    std::cout << "\nSelecione uma categoria: ";
    std::cin >> categoria;

    if (categoria == 1) {
        std::cout << "\n===== CURSOS TECNICOS =====" << std::endl;
        std::cout << "1 - Desenvolvimento de Sistemas - R$ 14405.49" << std::endl;
        std::cout << "2 - Enfermagem - R$ 15278.00" << std::endl;
        std::cout << "3 - Modelagem do Vestuario - R$ 14844.79" << std::endl;

        std::cout << "Escolha o curso: ";
        std::cin >> curso;

        if (curso == 1) {
            nomeCurso = "Desenvolvimento de Sistemas";
            valorCurso = 14405.49;
        } else if (curso == 2) {
            nomeCurso = "Enfermagem";
            valorCurso = 15278.00;
        } else if (curso == 3) {
            nomeCurso = "Modelagem do Vestuario";
            valorCurso = 14844.79;
        } else {
            std::cout << "Curso invalido!" << std::endl;
            return 0;
        }

    } else if (categoria == 2) {
        std::cout << "\n===== CURSOS EAD =====" << std::endl;
        std::cout << "1 - RH - R$ 3355.00" << std::endl;
        std::cout << "2 - Logistica - R$ 3751.00" << std::endl;
        std::cout << "3 - Contabilidade - R$ 3355.00" << std::endl;
        std::cout << "4 - Transacoes Imobiliarias - R$ 3157.00" << std::endl;

        std::cout << "Escolha o curso: ";
        std::cin >> curso;

        if (curso == 1) {
            nomeCurso = "RH";
            valorCurso = 3355.00;
        } else if (curso == 2) {
            nomeCurso = "Logistica";
            valorCurso = 3751.00;
        } else if (curso == 3) {
            nomeCurso = "Contabilidade";
            valorCurso = 3355.00;
        } else if (curso == 4) {
            nomeCurso = "Transacoes Imobiliarias";
            valorCurso = 3157.00;
        } else {
            std::cout << "Curso invalido!" << std::endl;
            return 0;
        }

    } else if (categoria == 3) {
        std::cout << "\n===== CURSOS LIVRES =====" << std::endl;
        std::cout << "1 - Tecnica de Costura" << std::endl;
        std::cout << "2 - Consultoria de Estilo" << std::endl;
        std::cout << "3 - Fotografia Digital" << std::endl;
        std::cout << "4 - Cuidados aos Idosos" << std::endl;
        std::cout << "5 - Primeiros Socorros" << std::endl;
        std::cout << "6 - Informatica Fundamental" << std::endl;
        std::cout << "7 - Excel" << std::endl;
        std::cout << "8 - Power BI" << std::endl;

        std::cout << "Escolha o curso: ";
        std::cin >> curso;

        if (curso == 1) {
            nomeCurso = "Tecnica de Costura";
        } else if (curso == 2) {
            nomeCurso = "Consultoria de Estilo";
        } else if (curso == 3) {
            nomeCurso = "Fotografia Digital";
        } else if (curso == 4) {
            nomeCurso = "Cuidados aos Idosos";
        } else if (curso == 5) {
            nomeCurso = "Primeiros Socorros";
        } else if (curso == 6) {
            nomeCurso = "Informatica Fundamental";
        } else if (curso == 7) {
            nomeCurso = "Excel";
        } else if (curso == 8) {
            nomeCurso = "Power BI";
        } else {
            std::cout << "Curso invalido!" << std::endl;
            return 0;
        }

        std::cout << "Digite o valor do curso livre: R$ ";
        std::cin >> valorCurso;

    } else if (categoria == 4) {
        std::cout << "\n===== IDIOMAS =====" << std::endl;
        std::cout << "1 - Libras - R$ 1757.00" << std::endl;

        std::cout << "Escolha o curso: ";
        std::cin >> curso;

        if (curso == 1) {
            nomeCurso = "Libras";
            valorCurso = 1757.00;
        } else {
            std::cout << "Curso invalido!" << std::endl;
            return 0;
        }

    } else {
        std::cout << "Categoria invalida!" << std::endl;
        return 0;
    }

    std::cout << "\n===== CURSO SELECIONADO =====" << std::endl;
    std::cout << "Curso: " << nomeCurso << std::endl;
    std::cout << "Valor: R$ " << valorCurso << std::endl;

    return 0;
}