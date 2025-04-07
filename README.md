# KATANA

I present KATANA, the first game created by its developer, entirely crafted in C, as part of an academic project by Rodrigo Martins, a student at the Federal Rural University of Rio de Janeiro (UFRRJ) in the Computer Science program. This interactive fiction game offers a unique immersion into the world of text-based RPGs, where you take on the role of Takeshi, a skilled samurai seeking revenge. The story begins when Takeshi discovers a magical katana, whose blade not only alters his fate but also awakens deep and dark emotions.

Developed with meticulous attention to detail, KATANA provides players with an engaging gameplay experience where every decision can change the course of the narrative. Rodrigo Martins' work reflects not only the dedication and talent of a young programmer but also a passion for creating rich and captivating universes.

Prepare to embark on an epic journey full of tough choices, challenges, and mysteries. This is your invitation to explore a world where every action matters, and vengeance is always within reach of the blade. Join Takeshi and discover how far you would go for justice... or revenge.


## How to Run the Game

### Instructions to Run the Code

If you want to run the KATANA project code, follow the instructions below, depending on your operating system (Windows or Unix/Linux). The code is developed in C and uses ASCII Art ANSI and Unicode UTF-8 characters to create a visual experience.

**Requirements**

Before running the code, it's important that you have a C compiler installed on your system. Here are the installation instructions:

- **Windows:** Install MinGW or TDM-GCC.

- **Linux/Unix:** You will typically already have GCC or Clang installed. If not, you can install it with the following command:

*Ubuntu/Debian:*

    sudo apt-get update
    sudo apt-get install build-essential

*Fedora:*

    sudo dnf groupinstall "Development Tools"

### Configuring the Terminal for UTF-8 Character Support

To ensure that Unicode UTF-8 characters (such as those used in ASCII Art) are displayed correctly in the terminal, you may need to configure the terminal to accept these characters.

**On Windows**

Configuring the terminal for UTF-8: The default Windows terminal may not display UTF-8 characters correctly. To enable UTF-8 support in the terminal, follow these steps:

- Open Command Prompt or PowerShell.

- Run the following command to change the console code page to UTF-8:

      chcp 65001

This will allow the terminal to correctly display Unicode characters.

**On Unix/Linux**

On Unix/Linux, terminals typically already support UTF-8 by default. However, to ensure that the terminal is using UTF-8, you can check or modify the configuration:

- Checking UTF-8 support: Run the following command to ensure that the environment variable LANG is set to UTF-8:

      echo $LANG

If the output is something like en_US.UTF-8 or pt_BR.UTF-8, this means that your terminal is already configured for UTF-8.

- Changing to UTF-8: If it's not configured correctly, you can set the LANG environment variable to use UTF-8. In the terminal, run:

      export LANG=en_US.UTF-8

This should ensure that the terminal displays Unicode characters correctly.

### Running the Code

- Download or clone the repository: If you haven’t done so already, first download or clone the repository:

      git clone https://github.com/Diggo2077/KATANA.git

- Navigate to the code directory: Go to the folder where the katana.c file is located:

      cd KATANA

- Compiling the code: To compile the C code, use the command:

**On Unix/Linux:**

    gcc katana.c -o katana

**On Windows (using MinGW):**

    gcc katana.c -o katana.exe

This command will generate an executable file called katana (or katana.exe on Windows).

### Running the Code:

**On Unix/Linux:**

    ./katana

**On Windows:**

    katana.exe

Now you are ready to run the game and view the ASCII Art graphics and Unicode characters properly in your terminal! Enjoy KATANA!


%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%


# KATANA

Apresento "KATANA", o primeiro jogo de seu desenvolvedor, criado integralmente em C, fruto de um projeto acadêmico realizado por Rodrigo Martins, aluno da Universidade Federal Rural do Rio de Janeiro (UFRRJ), no curso de Ciência da Computação. Este jogo-livro oferece uma imersão única no universo dos RPGs de texto, onde você assume o papel de Takeshi, um habilidoso samurai em busca de vingança. A história começa quando Takeshi encontra uma katana mágica, cuja lâmina não só altera seu destino, mas também desperta emoções profundas e sombrias.

Desenvolvido com atenção minuciosa aos detalhes, "KATANA" a oferece aos jogadores uma experiência de jogo envolvente, onde cada decisão pode alterar o rumo da narrativa. O trabalho de Rodrigo Martins reflete não apenas a dedicação e o talento de um jovem programador, mas também a paixão por criar universos ricos e cativantes.

Prepare-se para embarcar em uma jornada épica repleta de escolhas difíceis, desafios e mistérios. Este é o seu convite para explorar um mundo onde cada ação conta e a vingança está sempre ao alcance da lâmina. Junte-se a Takeshi e descubra até onde você iria por justiça… ou por vingança.


## Como Executar o Jogo


### Instruções para Rodar o Código

Se você deseja rodar o código do projeto KATANA, siga as instruções abaixo, dependendo do seu sistema operacional (Windows ou Unix/Linux). O código é desenvolvido em C e utiliza ASCII Art ANSI e caracteres Unicode UTF-8 para criar uma experiência visual.

**Requisitos**

Antes de rodar o código, é importante que você tenha o compilador C instalado em seu sistema. Aqui estão as instruções para instalação:

- **Windows:** Instale o MinGW ou o TDM-GCC.

- **Linux/Unix:** Normalmente, você já terá o GCC ou Clang instalados. Caso contrário, pode instalar através do comando:

*Ubuntu/Debian:*

    sudo apt-get update
    sudo apt-get install build-essential

*Fedora:*

    sudo dnf groupinstall "Development Tools"

### Configurando o Terminal para Suporte a Caracteres UTF-8

Para garantir que os caracteres Unicode UTF-8 (como os utilizados no ASCII Art) sejam exibidos corretamente no terminal, você pode precisar configurar o terminal para aceitar esses caracteres.

**No Windows**

Configurar o terminal para UTF-8: O terminal padrão do Windows pode não exibir corretamente caracteres UTF-8. Para habilitar o suporte a UTF-8 no terminal, siga os seguintes passos:

- Abra o Prompt de Comando ou PowerShell.

- Execute o seguinte comando para alterar a página de códigos do console para UTF-8:

      chcp 65001

Isso permitirá que o terminal exiba corretamente os caracteres Unicode.

**No Unix/Linux**

No Unix/Linux, os terminais geralmente já possuem suporte a UTF-8 por padrão. Porém, para garantir que o terminal esteja usando UTF-8, você pode verificar ou alterar a configuração:

- Verificando o suporte UTF-8: Execute o comando abaixo para garantir que a variável de ambiente LANG esteja configurada para UTF-8:

      echo $LANG

Se o retorno for algo como en_US.UTF-8 ou pt_BR.UTF-8, isso significa que o seu terminal já está configurado para UTF-8.

- Alterando para UTF-8: Se não estiver configurado corretamente, você pode definir a variável de ambiente LANG para usar UTF-8. No terminal, execute:

      export LANG=en_US.UTF-8

Isso deve permitir que o terminal exiba corretamente os caracteres Unicode.
    
### Rodando o Código

- Baixe ou clone o repositório: Se você ainda não fez isso, primeiro baixe ou clone o repositório:

      git clone https://github.com/Diggo2077/KATANA.git

- Acesse o diretório do código: Navegue até a pasta onde o arquivo katana.c está localizado:

      cd KATANA

- Compilação do código: Para compilar o código em C, use o comando:

**No Unix/Linux:**

    gcc katana.c -o katana

**No Windows (usando MinGW):**

    gcc katana.c -o katana.exe

Esse comando irá gerar um arquivo executável chamado katana (ou katana.exe no Windows).

### Rodando o código:

**No Unix/Linux:**

    ./katana

**No Windows:**

    katana.exe

Agora você está pronto para rodar o jogo e visualizar os gráficos ASCII Art e os caracteres Unicode sem problemas no seu terminal! Divirta-se com KATANA!
