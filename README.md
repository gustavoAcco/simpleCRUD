# Introdução

Esse é um projeto para cadastro e manipulação de alarmes relacionados a equipamentos.

Os dados são persistidos em arquivos de texto e a interface com o usuário é feita pelo terminal.

# Para rodar o programa:
Para rodar é necessário ter instalado um compilador para a linguagem C++ e ter instalado o software CMake para a sua plataforma. Para contribuir com uma nova parte da documentação é necessário ter o Doxygen instalado.

# Detalhes

Foi utilizado a linguagem C++, a ferramenta CMake para compilação e linkagem dos arquivos e o Doxygen para a documentação.

# Estrutura

A pasta *data* contém os arquivos TXT, cada um sendo uma "tabela" do banco de dados.

A pasta *docs* contém a documentação feita com o Doxygen.

*src* possui as classes da aplicação. Cada subpasta possui uma interface (arquivo .h) e a implementação em si (arquivo .cpp)

*tools* contém os scripts para configurar, construir e rodar a aplicação (assim como está explícito nos nomes dos arquivos).

