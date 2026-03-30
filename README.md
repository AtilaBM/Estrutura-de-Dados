# Estrutura de Dados em C

Este repositório foi criado para armazenar e organizar as **atividades desenvolvidas na disciplina de Estrutura de Dados**, utilizando a linguagem **C**.

O objetivo é manter um registro das implementações realizadas durante a disciplina, facilitando a consulta, revisão de conteúdo e estudo dos conceitos abordados.

---

### Conteúdo

As atividades estão organizadas em diretórios conforme os temas ou propostas desenvolvidas ao longo da disciplina.

Cada pasta contém os arquivos `.c` correspondentes às implementações realizadas.

Exemplo de organização:

* **Example1/**

  * `Example1.c`
  * `teste.c`

* **Example2/**

  * `main.c`
  * `estrutura.c`

* **Example3/**

  * `lista.c`
  * `pilha.c`

---

### Tecnologias utilizadas

* Linguagem **C**
* Compilador **GCC**

---

### Como compilar e executar

Para compilar e executar os programas, você pode utilizar um compilador C como o **GCC**.

Comando básico:

```bash
gcc nome_do_arquivo.c -o nome_do_executavel
./nome_do_executavel
```

Exemplo:

```bash
gcc main.c -o programa
./programa
```

---

### Observações

Algumas atividades podem utilizar bibliotecas padrão da linguagem C, como:

* `stdio.h`
* `stdlib.h`
* `string.h`
* `math.h`

Caso seja utilizada a biblioteca `math.h`, pode ser necessário adicionar a flag `-lm` durante a compilação:

```bash
gcc nome_do_arquivo.c -o nome_do_executavel -lm
./nome_do_executavel
```

---

### Objetivo do repositório

Este repositório tem como finalidade:

* Registrar as atividades desenvolvidas na disciplina
* Servir como material de estudo
* Facilitar consultas futuras sobre implementações em **Estrutura de Dados**
* Acompanhar a evolução no aprendizado da linguagem **C**
