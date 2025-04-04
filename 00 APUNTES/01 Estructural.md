 <a id="top"></a>
 # **PROGRAMACIÓN ESTRUCTURAL EN LENGUAJE C.**


<!-- Url de imagen -->

<!-- <img width="288" alt="image" src=""> --> 

<!-- Tamaño por default -->

<!-- ![Texto alternativo](./Image/Estructural/01%20imagen%20c.jpg) -->      

<!-- TAMAÑO PERSONALIZADO -->

<!-- <img src="./Image/Estructural/01 imagen c.jpg" width="200"> -->        

<!-- CENTRADO HORIZONTAL -->

<img src="./Image/Estructural/01 imagen c.jpg" alt="Logo" width="200" style="display: block; margin: auto;"> 

<!-- CENTRADO CON TEXTO DEBAJO -->

<!-- <div style="text-align: center;">
  <img src="./Image/Estructural/01 imagen c.jpg" alt="Logo" width="200">
  <p>Texto centrado debajo de la imagen</p>
</div>
 -->



# **ÍNDICE**
<details>
<summary>🔍 Índice Rápido</summary>

- [1. Conceptos Fundamentales de programación](#conceptos-fundamentales-de-programación) 
- [2. Lenguaje en C](#lenguaje-en-c)
- [3. Tipos de Operadores en C](#tipos-de-operadores-en-c-estándar)
</details>

```text

```

## **Conceptos Fundamentales de programación**

`PROGRAMACIÓN:` 

```text
Es el proceso de escritura o codificación de un programa.
```

`SOFTWARE:` 
```text
Es un conjunto de instrucciones de programa detalladas que controlan 
y coordinan los componentes del hardware de una computadora,
además controlan las operaciones de un sistema informático.
```


`SISTEMA OPERATIVO:` Es el software de sistema que controla, gestiona o administra los recursos de la computadora.

`LENGUAJE DE PROGRAMACIÓN:` Es un programa destinado a la construcción de otras programas informáticos, comprende un lenguaje formal que está diseñado para organizar algoritmos y procesos lógicos.

Compuesto de:  
- 1. Sintaxis
- 2. Símbolos
- 3. Reglas semánticas y sintácticas 


`CÓDIGO FUENTE:` Es un algoritmo escrito en un lenguaje de programación. (Pieza de software terminado).

`ALGORITMO:` Es una secuencia Definida, Ordenada, Finita y Completa de instrucciones que nos llevan a resolver un problema.

`FUNCIÓN O MÓDULO:` Sirve para implementar determinadas tareas de forma independiente lo que se define como "abstracción procedimental".

### `INTÉRPRETE VS COMPILADOR`

| **Característica**  | **Intérprete**                          | **Compilador**                         |
|---------------------|-----------------------------------------|----------------------------------------|
| Traducción          | Simultánea (línea por línea)            | Completa (todo el código)              |
| Archivos generados  | No genera .obj ni .exe                  | Genera .obj y .exe                     |
| Portabilidad        | Alta (ejecuta en múltiples plataformas) | Requiere recompilación por plataforma  |
|

`INTÉRPRETE:` Es un traductor de "alto nivel" a un lenguaje de "bajo nivel".

Alto Nivel / lenguaje humano  → Bajo Nivel / Lenguaje máquina 

FASES: 
- Realiza de forma simultánea e inmediata la traducción y ejecución (ambas).
- Traduce cada instrucción y a continuación se ejecuta.
- Intérprete NO genera programas "objeto" (ya traducido) ni programas "ejecutables" (Conjunto de instrucciones para un fin específico), (los programas objeto da los programas ejecutables). 
      
CARACTERÍSTICAS:
- Portabilidad o transportabilidad
- Lista para trabajar en otra plataforma
              
              
`COMPILADOR:`

Los compiladores requieren forzosamente un Intérprete.

- Son traductores empleados para lenguajes de ALTO NIVEL, en los cuales cada instrucción escrita corresponde a varias instrucciones en lenguaje MÁQUINA.
- Programa escrito en el compilador → Programa fuente (código fuente)
- Compilador → genera programa traducido (prog. objeto) → programa ejecutable

## Cronología de Lenguajes de Programación
 <a id="Cronologia"></a>

| Periodo            | Generación/Lenguaje   | Detalle                          |
|--------------------|-----------------------|----------------------------------|
| **1940**           | `1ª Generación`       | Lenguaje máquina                 |
|                    | `2ª Generación`       | Lenguajes ensambladores          |
| **1950-1970**      | `3ª Generación`       | Lenguajes de alto nivel:         |
| **1950**           |  `FORTRAN`            | Primer lenguaje científico       |
| **1958**           | `COBOL`               | Para negocios                    |
| **1964**           |  `BASIC`              | Educativo                        |
| **1972**           |  `C`                  | Base para sistemas               |
| **1983**           |  `C++`                | Orientado a objetos              |
|

# **LENGUAJE EN C.**
 <a id="LenguajeEnC"></a>


`AMBIENTE INTEGRAL EN C:`
1. Estructuras de control SECUENCIALES 
2. Estructuras de control ALTERNATIVAS
3. Estructuras de control REPETITIVAS

## TIPOS DE OPERADORES EN C ESTÁNDAR.

### ► OPERADORES ARITMÉTICOS

| Operación       | Símbolo(s) | Sintaxis de ejemplo          |
|-----------------|------------|------------------------------|
| Suma            | `+`        | `R = A + B`                  |
| Resta           | `-`        | `R = A - B`                  |
| Multiplicación  | `*`        | `R = A * B`                  |
| División        | `/`        | `R = A / B`                  |
| Módulo          | `%`        | `R = A % B` , `R = A mod B`  |
|

### ► OPERADORES RELACIONALES.

 Sirven para realizar comparaciones entre distintos valores con el objetivo de tomar decisiones.
<br>Se establece una relación entre los datos y pueden tener como resultados dos valores: <br> *verdadero (1)  o falso (0)*

| Símbolo | Descripción          | Ejemplo   |
|---------|----------------------|-----------|
| `>`     | Mayor que            | `A > B`   |
| `<`     | Menor que            | `A < B`   |
| `>=`    | Mayor o igual que    | `A >= B`  |
| `<=`    | Menor o igual que    | `A <= B`  |
| `==`    | Igual que            | `A == B`  |
| `!=`    | Diferente que        | `A != B`  |
|

### ► OPERADORES LÓGICOS.

| Símbolo   | Descripción     | Ejemplo           
|-----------|-----------------|-------------------

    &&       AND          (A < B) && (A < C)
    ||       OR           (A < B) || (A < C) 
    !        NOT          !(A < B)        
---

### ► OPERADORES DE INCREMENTO ++ / DECREMENTO --.

| Operador                       | Valores Iniciales  | Proceso                                        | Resultado      |
|--------------------------------|--------------------|------------------------------------------------|----------------|
| *Post-incremento*<br>`x++`     | `x=6`<br> `y=x++`  | 1. Asigna `x` a `y`<br>2. Incrementa `x`       | `x=7`<br>`y=6` |
| *Pre-incremento*<br>`++x`      | `x=6`<br> `y=++x`  | 1. Incrementa `x`<br>2. Asigna nuevo `x` a `y` | `x=7`<br>`y=7` |
| *Post-decremento*<br>`x--`     | `x=6`<br> `y=x--`  | 1. Asigna `x` a `y`<br>2. Decrementa `x`       | `x=5`<br>`y=6` |
| *Pre-decremento*<br>`--x`      | `x=6`<br> `y=--x`  | 1. Decrementa `x`<br>2. Asigna nuevo `x` a `y` | `x=5`<br>`y=5` |
|


### ► OPERADORES DE ASIGNACIÓN. = , →

Bloque de asignación:
<br>La ASIGNACIÓN "=" es una operación destructiva. <br>Ejemplos:

```c
int a1, a2;
a1 = 10;
a2 = a1+5;            
a2 = 0;
```
Resultados: `a1 es 10 y a2 es 0`

**📝 Operadores de Asignación Compuesta en C**

| Operador | Ejemplo | Equivalencia | Descripción         | Cambio en `a` (si a=10 inicial)   |
|----------|---------|--------------|---------------------|-----------------------------------|
| `+=`     | `a += 2`| `a = a + 2`  | Suma y asigna       |10 → 12                            |
| `-=`     | `a -= 3`| `a = a - 3`  | Resta y asigna      |10 → 7                             |
| `*=`     | `a *= 4`| `a = a * 4`  | Multiplica y asigna |10 → 40                            |
| `/=`     | `a /= 2`| `a = a / 2`  | Divide y asigna     |10 → 5                             |
| `%=`     | `a %= 3`| `a = a % 3`  | Módulo y asigna     |10 → 1                             |
|


Prioridades de los operadores:

    1. ()
    2. !, ++, -- negación, incremente, decremento
    3. * , /, %
    4. +, -
    5. == , !=,<, >, <= , >= operadores relacionales
    6. && , || operadores lógicos
    7. , coma 

    coma 

    y=7;
    x=(y=2, 10);

    x=9
    x=10

▲ SINTAXIS DE DATOS Y OPERADORES EN LENGUAJE C.

Unidades de información.
     
     - Bit: es la unidad mínima de información. (binary digit).
     - Byte: unidad fundamental de la información. 8 bits = octeto.
     - Nibble: representa un 1/2 byte = 4 bits= cuarteto.
     - Palabra en programación = conjunto de bytes.

Unidades de medida de memoria.
     - Celda de memoria: cada celda tiene una única dirección que indica su posición relativa en la memoria.
     - Byte = posición de memoria de 8 bits.
     - Dirección: a cada byte se asocia un número denominado dirección. El CONTENIDO es la información almacenada en una posición.




    ► TIPOS DE DATOS Y OPERADORES EN LENGUAJE C.

    DATO. Es la representación de su estado más simple por sí mismo no comunica algo (hasta asociarse).


      • TIPO DE DATO.
        
        El COMPILADOR declara los tipos de datos y los lee de la memoria principal.

        ¿Qué es un TIPO DE DATO? (Es la representación de mis variables).

          - Un tipo de DATO expresa una característica o atributo de almacenamiento en memoria que puede describir a todo un conjunto de variables utilizadas en la programación.

          - Los tipos de DATOS sirven para "declarar" variables de SALIDA / ENTRADA (S/E), es decir, darlos a conocer al compilador y que este pueda utilizarlas.

      
      • DECLARACIÓN DE VARIABLES.

      Variable: Es un espacio reservado en memoria, definido por un tipo de dato y un nombre asignado, en el cual se puede guardar un valor y se puede modificar.
      (el valor cambiará durante la ejecución de su programa).


        Declaración de variable. Es una instanciación o alojamiento de una variable o un dato, que significa asignar un espacio en la memoria principal.

        *instanciación: es el proceso de leer o especificar información, como los valores y el tipo de almacenamiento de un campo de datos

    ## 📊 Tabla de Tipos de Datos en C

| Tipo de Dato   | Palabra Clave | Tamaño (bytes) | Descripción                                                                 |
|----------------|---------------|----------------|-----------------------------------------------------------------------------|
| **Carácter**   | `char`        | 1              | Almacena caracteres del abecedario, dígitos y símbolos especiales.          |
| **Entero**     | `int`         | 2              | Números enteros con signo (positivos y negativos).                          |
| **Flotante**   | `float`       | 4              | Números reales con parte entera y decimal (positivos y negativos).          |
| **Doble**      | `double`      | 8              | Números reales con mayor precisión que `float` (más capacidad de memoria).  |

## 📊 Tabla de Tipos de Datos en C

| Tipo          | Keyword    | Tamaño | Descripción                                                                 |
|---------------|------------|--------|-----------------------------------------------------------------------------|
| 🔤 Carácter   | `char`     | 1 byte | Almacena `A-Z`, `0-9` y símbolos como `!@#`.                               |
| 🔢 Entero     | `int`      | 2 bytes| Ej: `-32768` a `32767` (con signo).                                        |
| ⚖️ Flotante  | `float`    | 4 bytes| Ej: `3.1416`, `-45.78` (6-7 dígitos decimales).                            |
| 🎯 Doble     | `double`   | 8 bytes| Ej: `1.7976931348623157e+308` (15 dígitos decimales de precisión).         |

▲ SINTAXIS - DECLARACIÓN DE LAS VARIABLES C.

      • DECLARAR: 
      Es la instrucción en la cual se incluye el tipo de dato de la variable y dicha variable se utiliza en el desarrollo del programa. 

     Tipo_de_dato NOMBRE_VARIABLE/ES;
                                        char PUERTA, LETRA, A;
                                        int A, X1, B_2;
                                        float ALTURA, PROMEDIO, AUMENTO_SALDO;
                                        double VELOCIDAD, PI_FACTORIAL, LOGARITMO;  


▲ ESTRUCTURA GENERAL DE UN PROGRAMA EN LENGUAJE C.

    • SECCIÓN 1 - DIRECTIVOS PARA EL PREPROCESADOR.
       
       -El preprocesador son las instrucciones que se le va a dar al compilador a lenguajes de bajo nivel.
       -Son los archivos "include" que contiene las librerias o bibliotecas de funciones, en esta sección se pueden definir las constantes.

       #include <libreria>
       #define NOMBRE_DE_CONSTANTE VALOR

```c                                 
#include <stdio.h>
#include <conio.h>
#include <math.h>
#define PI 3.1416
```

                                        

    • SECCIÓN 2 - DECLARACIONES GLOBALES.
       
       Se definen los 

        -Tipos de datos           
        -Variables de E/S                float RADIO, AREA, B;
        -Prototipo de función            float AREA_CILINDRO (int, float, double);

    • SECCIÓN 3 - PROGRAMA PRINCIPAL.

       En esta sección se escribe cada una de las instrucciones del programa y expresiones que se van a ejecutar.

       Función principal  "main"        
                                       void main()
                                       {
                                        /* sentencias o instrucciones ejecutables

                                        printf("");        para que lea que debe ingresar estradas el usuario 
                                        scantf("%i", &A);  
                                        
                                        D=(B*B)-(4*A*C);   proceso
                                        
                                        printf(" %i", A);  imprime la variable de salida*/     

                                        getch();
}
                                        
    • SECCIÓN 4 - DEFINICIONES PARA LAS FUNCIONES DE USUARIO.

       En esta sección se escribe cada una de las subrutinas diseñadas por el programador, se especifican todas las instrucciones que incluye las sentencias de E/S, procesos, estructuras de control e incluso otras subrutinas (si existe más de 1 subrutina se escribe una después de la otra).

▲ MODIFICADORES DE TIPO DE DATO. (Se usan en funciones de E/S con printf("%  ",  );)

                                     i , d  →  ENTEROS
                                       f    →  FLOTANTES
                                       c    →  CARACTER O CHARACTER
                                       lf   →  DOUBLE (long float)
                                       s    →  CARACTERES EN CADENA "STRING" 

▲ FUNCIONES DE E/S EN LENGUAJE C.
  
  Esta función puede imprimir en pantalla las 
  
  -variables de E/S

 ```c
  printf("El resultado es: %tipo_de_dato", NUEVO_SALARIO);
```
                                              
                             % - localidad de memoria
                             tipo_de_dato - modificador de tipo de dato
                             NUEVO_SALARIO - nombre de variable de salida


  -mensajes o anuncios del programador para comunicarse con el usuario.
                     
 ```c
 printf("Hola, soy ESIMIO");
 ```

▲ FUNCIÓN DE ENTRADA ESTÁNDAR.

  Esta función sirve para leer desde el teclado las variables de entrada. Si incluye más de 1 se escribirá una instrucción de entrada por cada variable.

```c
scantf("%modificador_de_tipo_de_dato", &nombre_de_variable_de_entrada);

scantf("%i", &A);
scantf("%f", &AREA);
```


▲ SUBRUTINAS. 
  
    Es un programa más pequeño que contiene especificaciones de propósito específico, generalmente en un proceso, que forma parte de la solución de un problema. (Dividir un problema).

    • Ventajas de las subrutinas:
      
      1. Resolver más rápido un problema.
      2. Soluciones más entendibles y mejor estructuradas.
      3. Mejor mantenimiento y corección de errores.
      4. Implementación más eficiente.

    *El nombre de una subrutina NUNCA debe ser igual al nombre de las variables definidas o declaradas en el programa.

    ► FUNCIONAMIENTO DE SUBRUTINAS:

      5. La subrutina debe escribirse en el programa principal, ya que este es el único que la puede ejecutar.

      6. La subrutina obtiene las variables de entrada para realizar el proceso mediante el programa principal y la salida o resultado se calcula dentro de su estructura.

      7. La subrutina tiene que DEVOLVER la variable de salida obtenida al programa principal, para que este lo imprima, manipula o realice cualquier otra acción con este dato.

      8. Una subrutina sólo puede DEVOLVER UNA 1 VARIABLE DE SALIDA al programa principal, si existen más de una, la subrutina tendrá que imprmirla dentro de su estructura.


▲ FUNCIONES DE USUARIO.
    
  Las "funciones de usuario" representa las "SUBRUTINAS", una función de usuario sólo se puede ejecutar desde la función principal.

  ► PARTES DE LAS FUNCIONES DE USUARIO:
    
    1. PROTOTIPO DE FUNCIÓN.

       Es la declaración de la función de usuario y se escribe en la sección - 2 del programa principa.

        Clase_función Tipo_dato_variable_salida NOMBRE_FUNCIÓN(tipo_dato_variable_entrada1,...);

                            clase_función → ámbito de llamada de función/visibilidad
                                            -visibilidad (*queda en blanco en el código)
                                                         extern - visible/pública
                                                         static - invisible/privada

                            Tipo_dato_variable_salida NOMBRE_FUNCIÓN(tipo_dato_variable_entrada1,...);
                                            -Los dos partes constituyen los "ARGUMENTOS FORMALES"
                                            -Las variables de entradas son LOCALES y se escriben en minúscula

                                            void SUMA_COMPLEJO(int a, float b, double c);

    2. LLAMADA DE FUNCIÓN.

       Para ejecutar una función se LLAMA, se INVOCA o se REFERENCIA desde el programa principal main(), que es la sección - 3, utilizando su identificador o nombre y sus argumentos.

       La llamada "afunción" utiliza las variables de E/S que define el programa principal, las cuales se conocen como "ARGUMENTOS ACTUALES O REALES" y se escriben en mayúsculas.
       
       • Existen dos formas de LLAMAR a las funciones:
         
         a) Cuando la función devuelve la variable de salida. (forzosamente 1 variable de S).
            
                                NOMBRE_VARIABLE_SALIDA=NOMBRE_FUNCIÓN(NOMBRE_VARIABLE_ENTRADA1,...);

                                P=PROMEDIO(C1,C2,C3);

         b) Cuando la función NO devuelve variable de salida. (Si la variable de salida fuera un mensaje no devuelve la variable de S o si fuese más de 1 variable de S no se puede devolver al programa principal).
            
                               NOMBRE_FUNCIÓN(NOMBRE_VARIABLE_ENTRADA1,...);

                               SALUDO();
                               SUMA_COMPLEJO(A,B,C);

    3. DEFINICIÓN DE LA FUNCIÓN.
       
       Cuando se define la función se constituye de dos partes: cabecera de función y cuerpo de función, se escribe en la sección - 4 del programa.

       • Cabecera de función.
         Es similar al prototipo de función sólo que se agregan los nombres de las variables de entrada con minúsculas y al final no lleva ";".

                          tipo_dato_variable_salida NOMBRE_FUNCIÓN (tipo_entrada_entrada1,...)

                          int CUBO(int a, int b, int c)

       • Cuerpo de función.
         Contiene las declaraciones LOCALES de la función, que es/son las variables de S, si existen otras variables auxiliares se declaran en esta misma sección, además contiene el proceso que es la operación aritmética. Finalmente, la instrucción "return" que devuelve la variable de S.
                          
                          {
                            int cub;
                            cub=a*b*c;
                            return cub;
                          }

    


         
▲ PASO DE ARGUMENTOS DE ENTRADA A LAS FUNCIONES DE USUARIO.
    
    1. PASO POR VALOR.
       Sucede cuando se escribe únicamente el nomnbre de la variable de Eentrada o su tipo de dato en el prototipo o cabecera de función, en este caso el compilador crea copias de las variables originales (variables actuales) y las almacena en memoria, de esta manera existe una protección de datos.

        -Prototipo  int SUMA(int, int);

        -Cabecera   int SUMA(int a, int b)

    2. PASO POR REFERENCIA. (Ubicación de memoria).
       El paso por referencia sólo se permite en C++ y consiste en declarar en la lista de los argumentos formales un "alias" para las variables de E, de manera que variables actuales y las variables formales se referencien con la misma dirección de memoria, el compilador ahora identifica a la variable por una dirección donde se encuentra almacenada.

       Para declarar el "alias" se utiliza el operador & "ampersand" aunado a los argumentos formales.

        -Prototipo  int SUMA(int &, int &);

        -Cabecera   int SUMA(int &a, int &b)

Recursividad.
      
      La recursividad es un concepto en programación en el que una función se llama a sí misma dentro de su propio cuerpo. Es una técnica muy útil para resolver problemas que requieren la repetición de un proceso hasta que se cumpla una condición de parada.

  
▲ ESTRUCTURAS DE DECISIÓN.

     ► CARACTERÍSTICAS.

       -Se utilizan cuando en el desarrollo de la solución de un problema se debe tomar una decisión, lo que resulta en una "bifurcación" en el flujo de ejecución del programa.

       -La "bifurcación" marca más de un camino a seguir en el flujo de la ejecución del programa.

       -La decisión se expresa con una condición que define una operación relacional, en la cual intervienen los operadores relacionales.

       -La decisión puede contener y evaluar una o más condiciones.  

     ► TIPOS DE ESTRUCTURAS DE DECISIÓN.


       • SIMPLE - si...entonces (if)

                -Sólo tiene una línea de ejecución, en la cual definen las operaciones o instrucciones que tienen que realizar.

                -Permite que el flujo de ejecución siga por un camino específico siempre que se cumpla una condición o bien varias condiciones.

                                if(condición con operadores relacionales)
                                {
                                  sentencia 1;
                                  sentencia 2;
                                  sentencia etc;
                                }


                                if(x>=0)
                                {
                                  printf("%d es un numero postivo", x);
                                }




       • DOBLE - si...sino (if...else)

                -Indica dos líneas de ejecución, en las cuales se definen cada una de las operaciones o instrucciones para realizar dependiendo de la evaluación de la condición.

                -Permite que el flujo de ejecución pueda seguir por cualquiera de los DOS caminos especificados (verdadero o falso). 
                
                -En este caso el problema sugiere que si la condición no se cumple, es decir, se obtiene un falso en la evaluación de la condición, el programa puede realizar otras operaciones.
                                
                                if(condición con operadores relacionales)
                                {
                                    sentencia1; /* evaluación=verdadero */
                                }
                                else{
                                    sentencia2; /* evaluación=falso */
                                }


                                if(n%2==0)
                                {
                                    printf("El numero es par: ");
                                }
                                else{
                                    printf("El numero es impar: ");
                                }

          

       • MÚLTIPLES - si…sino si…sino si…sino (if...else if...else if...else)

                -Contiene más de dos líneas de ejecución que se construyen con más de una estructura de decisión.

                -Es una estructura de decisión if/else que permite llevar dentro de sí misma otra estructura de tipo if/else, de esta manera se pueden anidar varias estructuras del mismo tipo, cada una con sus respectivas condiciones. 
                
                -Esta estructura siempre termina con la condición final else, que sucede cuando no se cumple ninguna de las condición anteriores.


                                 if(condición con operadores relacionales)
                                 {
                                    sentencia1;
                                 }
                                 else if(condición2)
                                     {
                                        sentencia2;
                                     }
                                     else if(condición3)
                                         {
                                            sentencia3;
                                         }
                                         else
                                             {
                                                sentencia4;
                                             }



                                if(x>y)
                                {
                                    printf("%i es el mayor", x);
                                }
                                else if(y>x)
                                    {
                                        printf("%i es el mayor", y);
                                    }
                                    else
                                        {
                                            printf("Los numeros son iguales");
                                        }



▲ ESTRUCTURA SELECTORA - SWICH / CASE
  
  Se denomina estructura de tipo "swich/case" ya que en lugar de tomar una decisión el usuario elige o selecciona un camino de ejecución dentro del programa, esta selección se realiza en función de un dato de E que define de manera precisa el camino a ejecutar.

  Esta variable es como "VARIABLE SELECTORA" y puede definir cualquiera de los datos o valores posibles de las opciones de ejecución. La variable selectora sólo puede ser de tipo numérica entera o de tipo caracter, sin permitir cadenas. 

                                 swich(nombre_variable_selectora)
                                 {
                                    case opcion1:sentencia1;break;  /* case opcionN;sentenciaN;break; */
                                    case opcion2:sentencia2;break;
                                    case opcion3:sentencia3;break;  

                                    default:sentencia_error;break;  /* sentencia de error o incorrecta */
                                 }

                                 /* break rompe el flujo de ejecución de una instrucción */


                                 swich(c1)
                                 {
                                    case 12:cos=min*5.75;break;
                                    case 23:cos=min*7.25;break;
                                    case 25:cos=min*6.50;break;
                                    case 34:cos=min*9.20;break;

                                    default:printf("clave incorrecta");break;
                                 }


                                 switch(d)
                                 {
                                    case 1:if(m>=2500)
                                             {
                                             m=m(m*0.15);
                                             };break;


                                    case 2:if(m>=3000)
                                             {
                                             m=m-(m*0.20);
                                             };break;

                                    case 3:if(m>=4500)
                                             {
                                             m=m-(m*0.20);
                                             };break;

                                    case 4:if(m>=1500)
                                             {
                                             m=m-(m*0.25);
                                             };break;

                                    default:printf("\n departamento incorrecto");break;
                                 }




▲ ESTRUCTURA DE REPETICIÓN O ITERACIÓN.

  -Son estructuras de control que permiten ejecutar de manera repetitiva una sentencia o un conjunto de ellas para resolver los problemas; estas estructuras están formadas por una decisión (condición) y el cuerpo del bucle que contiene las setencias que se repetirán.

  -Estas setencias se repiten un número determinado de veces, mientras que la condición/es se cumplan, la ruptura o término del bucle, se debe producir cuando la condición dé un resultado falso.

  -Las estructuras de repitición tienen como principal ventaja la automatización de procesos y ejecuciones más rápidas, siempre que el diseño y la lógica de desarrollo sean correctas.

  -Las estructuras de repetición se pueden definir como "bucles precondicionales" (antes de las sentencias) y "bucles poscondicionales" (después de las sentencias), esto en relación al momento en que se lleva a cabo la evaluación de la condición.

            Precondicional - cuando la condición se evalua ANTES del cuerpo del bucle
            Poscondicional - cuando la condición se evalua DESPUÉS del cuerpo del bucle 

  • Controladores de ruptura de bucle.
    Los bucles tienen un conjunto de elementos de control de ruptura que les ayuda a terminar con las repeticiones, sirven para identificar el tipo de condición que debe llevar la estructura.
     
     Estos elementos son:
        
        a) EVENTOS
           
           Son condiciones que provienen de variables externas que se actualizan dentro del cuerpo de bucle, los eventos pueden contener más de una condición para definir la ruptura del bucle.

                                            x<1000 && x>1000

                                            A>=10

                                            B==5

        
        b) VARIABLES DE TIPO CENTINELA
           
           Son variables que contienen un valor predefinido o valor esperado, en el cual se evalua en la condición para determinar una repetición.

                                            R='s'
                                            C!=0
                                            ¿Quieres repetir el ciclo? -Sí
        
        c) CONTADORES
           
           Son variables especiales que tienen como objetivos contar las repeticiones permitidas al bucle, por lo tanto, es necesario conocer por anticipado cuantas veces se repetirá.

           N → longitud o límite del número de veces en el bucle
                                            
                                            CON<N 
                                            CON1<N 

► CONTADORES Y ACUMULADORES.
  
  • CONTADORES:
    
    -Son variables de "tipo entero" que se incrementa o decrementa de manera constante cada vez que se realiza una repetición en el bucle.

    1) Todo contador debe INICIALIZARSE antes de ser usado, los valores iniciales pueden ser 0 o 1 o el valor máximo de repeticiones.

    2) Todo contador debe ACTUALIZARSE dentro del cuerpo del bucle, mediante las operaciones aritméticas + y -

    3) Todo contador interviene en la condición de la estructura de repitición.

  • ACUMULADORES:
    
    -Son variables de "tipo decimal" que se incrementan o decrementan de forma variable durante las repeticiones dentro del bucle.

    -Los acumuladores se encargan de acumular valores que provienen de cálculos generados por el bucle.

    -Los acumuladores deben INICIALIZARSE antes de ser usados de acuerdo con los siguientes casos

    caso 1: cuando el acumulador varía por sumas decisivas, se INICIALIZA en 0.
    caso 2: cuando el acumulador varía por productos sucesivos, se INICIALIZA en 0.
    caso 3: cuando el acumulador varía por restas/divisiones sucesivas, se INICIALIZA en cualquier valor mayor a 0.


    
▲ ESTRUCTURA DE REPETICIÓN POSCONDICIONAL - DO WHILE (hacer-mientras)
  
  En esta estructura de repitición poscondicional se evalua al final o después del cuerpo del bucle, esto implica que el ciclo SE DEBE EJECUTAR POR LO MENOS UNA VEZ.

  La estructura de control "do while" es adecuada cuando no sabemos el número de veces que se debe repetir un ciclo, pero conocemos que se debe ejecutar por lo menos una vez. Es decir, se ejecuta el conjunto de instrucciones una vez y luego cada vez que corresponde se inicia nuevamente el ciclo se evaluan las condiciones, siempre al final del conjunto de instrucciones. Si el resultado es verdadero (diferente de 0) se continua con la ejecución, de otra manera se detiene.

  La estructura "do while" puede utilizarse de manera eficiente para verificar los datos de E de un programa.

                   do                 
                   {
                    sentencias;
                    .
                    .
                    .
                    } while (condición / evaluación de la respuesta de usuario); /* variable de tipo CENTINELA */


                    do
                    {
                      printf("Ingresa el sueldo: ");
                      scantf("%f", &suel);
                      num=num+suel;
                      printf("¿Tienes otro sueldo?");
                      scantf("%s", &resp);
                    } 
                    while (resp=='S'||resp=='s');   /* ";" es la única estructura de rep que lo utiliza */
                                 


▲ ESTRUCTURA DE REPETICIÓN PRECONDICIONAL - WHILE (mientras)

  La estructura de control "while" es precondicional porque la condición de ruptura de bucle se evalua antes de realizar las sentencias de repetición, por lo tanto, la estructura while requiere de datos predefinidos o requeridos con anticipación para poder evaluarlos. 

  La estructura while en relación en que es precondicional puede no ejecutarse durante su desarrollo, los elementos que controlan la ruptura de bucle while pueden ser EVENTOS, variables de tipo CENTINELA Y CONTADORES.

     -DEPENDE DE LA CONDICIÓN.
     -PUEDE QUE NUNCA SE EJECUTE.

                   while (condición/es)   /* "sin ;" */
                   {
                    sentencias;
                    .
                    .
                    .
                   }
                                    


▲ ESTRUCTURA DE REPETICIÓN PRECONDICIONAL - FOR (por)

  La estructura de control "for" es un bucle de propósito general controlado únicamente por un CONTADOR, para simplificar su escritura y mejorar su velocidad de ejecución.

  La setencia for se utiliza en problemas cuando el número de repeticiones se conoce por anticipado ya sea por una "constante" o la variable "N".

    -Ventajas de la estructura for:
      Es que permite que en la cabecera de construcción se defina de manera completa los elementos de control de bucle.

                     for(expresión1;...)    /* sin ";" , se ocupa el cont - contador*/
                     {
                      sentencia;
                      .                     /* cuerpo del bucle */
                      .
                      .
                     }


                     for(cont=1;cont<=n;cont=cont+1)   /* cont=cont+1 → cont++ */
                     {
                      printf("%i", cont);
                     }



▲ ESTRUCTURA FOR ANIDADA.
  
  La estructura for puede contenerse dentro de sí misma otra estructura for, en las cuales pueden ser controladas por un mismo o diversos CONTADORES, y de esta manera generar aplicaciones de propósito específico, como por ejemplo el uso de matrices o arreglos bidimensionales.

                     for(expresión1;...)
                     {
                      for(expresión;...)
                         {
                          sentencia;
                          .
                          .
                          .
                         }
                      sentencia;
                     }  



                                        ESTRUCTURAS DE DATOS ESTÁTICOS.

  ▲ ARREGLOS UNIDIMENSIONALES.
    
    • ARREGLO:
                Es un conjunto de variables del mismo tipo que tienen el mismo nombre y se diferencian en el índice.

        -Características:
                1. Finita    - definida 
                2. Homogénea - Son del mismo tipo 
                3. Ordenada  - Índice

        -Tipos de datos que pueden almacenar:
                1. Enteros
                2. Decimales
                3. Caracteres

   • USO DE ARREGLOS EN LENGUAJE C.
     Un arreglo debe declararse antes de usarse como cualquier variable en lenguaje C.

                 #define VARIABLE VALOR

                 tipo_dato NOMBRE_ARREGLO[longitud_arreglo];  →  int VECTOR[100];

                 tipo_dato int, float, double, char
                 longitud_arreglo - Número total de elementos o dimensión del arreglo 


                 #define N 30

                 int VECTOR[N];

*NOTA: No hay que confundirse. En la declaración del array el número entre corchetes es el número de elementos,en cambio cuando ya usamos la matriz el número entre corchetes es el índice. 

  • ACCESO Y PROCESAMIENTO DE UN ARREGLO.
    La manipulación de los arreglos se pueden hacer de dos formas principales:

    1. INDIVIDUALES:
                    Los elementos se pueden procesar de manera separada e independiente, con la restricción de especificar de manera precisa la posición o el índice del elemento particular.


    2. CONJUNTO o AUTOMÁTICO:
                   Cuando se desea procesar a todos los elementos del arreglo a la vez, se utiliza una estructura repetitiva para automatizar el proceso, de manera estricta con una estructura de tipo for.

                   Se utilizan dos subrutinas básicas que de manera independiente manipulan cada faceta de operación con el arreglo, como por ejemplo: la creación, la impresión y cualquier otro procesamiento de los datos.


► DECLARACIÓN DE UN ARRAY.  
                      
                      tipo_dato NOMBRE_ARREGLO[longitud_arreglo];  →  int VECTOR[100];

► SOBRE LA DIMENSIÓN DE UN ARRAY.
  
  • Definir en la sección - 1, donde se escriben las bibliotecas
    
    #define ELEMENTOS 24
    
  •

  •

  •

► INICIALIZAR UN ARRAY.
  Se pueden inicializar los arrays al declararlos igual que hacíamos con las variables.

  int horas=24;

  *NOTA: Fíjate que para recorrer del elemento 0 al 23 (24 elementos) hacemos: for(hora=0; hora<24; hora++). La condición es que hora sea menos de 24. También podíamos haber hecho que hora != 24. 

  -Método alternativo - más elementos en el arreglo
   int TEMPERATURAS[]={11,...};

          Ahora vamos a ver el caso contrario, metemos más datos de los reservados. Vamos a meter 25 en vez de 24. Si hacemos esto dependiendo del compilador obtendremos un error o al menos un warning (aviso). En unos compiladores el programa se creará y en otros no, pero aún así nos avisa del fallo. Debe indicarse que estamos intentando guardar un dato de más, no hemos reservado memoria para él.

  -Método alternativo "SIZEOF"

          Dividir el tamaño de la matriz entre el tamaño de sus ELEMENTOS y tenemos números el número de elementos.
  
   elementos=sizeof temperaturas / sizeof (int);

► RECORRER UN ARRAY.
  
  int temperaturas[24]={11,...};
  for(hora=0; hora<24; hora++)
  
          Vemos que a partir del elemento 24 (incluído) tenemos resultados extraños. Esto es porque nos hemos salido de los límites del array e intenta acceder al elemento temperaturas[25] y sucesivos que no existen. Así que nos muestra el contenido de la memoria que está justo detrás de temperaturas[23] (esto es lo más probable) que puede ser cualquiera. Al contrario que otros lenguajes C no comprueba los límites de los array, nos deja saltárnoslos a la torera. Este programa no da error al compilar ni al ejecutar, tan sólo devuelve resultados extraños. Tampoco bloqueará el sistema porque no estamos escribiendo en la memoria sino leyendo de ella.
          Otra cosa muy diferente es meter datos en elementos que no existen. El sistema se BLOQUEA.


  ► ARREGLOS unidimensional - NUMÉRICOS.



  ► ARREGLOS unidimensional DE CARACTERES.

for (size_t i = 0; i < count; i++)
{
    /* code */
}

if (/* condition */)
{
  /* code */
}else
{
  /* code */
}


do
{
  /* code */
} while (/* condition */);


while (/* condition */)
{
  /* code */
}

switch (expression)
{
case /* constant-expression */:
  /* code */
  break;

default:
  break;
}


▲ ARREGLOS BIDIMENSIONALES.

  En los lenguajes de programación están implementados los arreglos de dos dimensiones o bidimensionales conocidos como matrices.

              tipo_dato NOMBRE_MATRIZ[longitud_renglones][longitud_columnas];

              int MATRIZ[R][C];  /* F y C están previamente definidas #define */

              float MAT[5][5];
              double M[20][30];


         * NOTA: Al igual que los arreglos unidimensionales se pueden definir las constantes de longitud máxima para las filas y las columnas.
  
  Una matriz puede utilizar cualquiera de las operaciones definidas por el diagrama de flujo, como son: entrada, salida, proceso y evaluación de condición. 
   
  La sintaxis para definirla se establece a través del manejo de sus indices en el siguiente orden, primero la fila representada por el indice [ i ] y despues la columna representada por el indice [ j ].
            
              [i] - RENGLONES o FILAS
              [j] - COLUMNAS


  • ACCESO A LAS MATRICES DE FORMA INDIVIDUAL O DIRECTO A UN SOLO ELEMENTO.
    
    NOMBRE_ MATRIZ[renglones][columna];
    MAT[0][3];

    Ejemplos:

    printf(“El elemento es: %f”,mat[0][3]); //Imprime el dato que se encuentra en la posición de la fila 0 y la columna 3.
    A=matriz[0][1]*B; //Calcula la multiplicación del dato en la posicion fila 0, columna 1 por el valor de la variable B y se almacena en la variable A.
    scanf(“%d”, &m[3][4]); //Almacena un valor en el elemento de la matriz que está en la posición fila 3 y columna4.

  • ACCESO A LAS MATRICES DE FORMA AUTOMATICA O EN CONJUNTO.
    
    El acceso se realiza mediante el recorrido a través de las filas o las culumnas de la matriz, utilizando la estructura for anidada, el recorrido básico siempre es a través de las filas.


  ► PROCESAMIENTO DE LA MATRIZ POR RENGLONES O FILAS.  
    
FUNCION: CREAR_MATRIZ().

void CREAR_MATRIZ(int mat[][C],int &n, int &m)
{
int i,j;
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
printf(“Ingresa el dato: ”);
scanf(“%d”,&mat[i][j]);
}
}
}


-FUNCION: IMPRIMIR_MATRIZ().

void IMPRIMIR_MATRIZ(int mat[][C],int &n, int &m)
{
int i,j;
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
printf(“ %d ”,mat[i][j]);
}
printf(“\n”);
}
}

 ► PROCESAMIENTO DE LA MATRIZ POR COLUMNAS.

 -FUNCION: CREAR_MATRIZ().


void CREAR_MATRIZ(int mat[][C],int &n, int &m)
{
int i,j;
for(j=0;j<m;j++)
{
for(i=0;i<n;i++)
{
printf(“Ingresa el dato: ”);
scanf(“%d”,&mat[i][j]);
}
}
}


-FUNCION: IMPRIMIR_MATRIZ().


void IMPRIMIR_MATRIZ(int mat[][C],int &n, int &m)
{
int i,j;
for(i=0;i<n;j++)
{
for(j=0;j<m;i++)
{
printf(“ %d ”,mat[i][j]);
}
printf(“\n”);
}
}

EJEMPLO DE PROGRAMA PRINCIPAL.

#include <conio.h>
#include <stdio.h>
#define F 20
#define C 20

void CREAR_MATRIZ(int [][C],int &, int &);
void IMPRIMIR_MATRIZ(int [][C],int &, int &);

void main()
{
int N,M,MATRIZ[F][C];
printf(“Cuantas filas: ");
scanf("%d",&N);
printf(“Cuantas columnas: ");
scanf("%d",&M);
CREAR_MATRIZ(MATRIZ,N,M);
IMPRIMIR_MATRIZ(MATRIZ,N,M);
getch();
}

   • EJEMPLO EJERCICIO.
     Desarrollar la codificación de un programa que contiene las calificaciones de las 3 evaluaciones departamentales de N alumnos, el programa calcula el promedio grupal por departamental y tambien indica cuál es la calificación más alta y la más baja de los tres departamentales.

     *El almacenamiento se realiza por columna debido a que cada columna representa cada uno de los tres departamentales y las filas representan a cada uno de los N alumnos evaluados.
     
     *Para calcular la calificación mas alta se realiza un recorrido por toda la matriz comparando las calificaciones entre sí, se utiliza la variable CALTA para almacenar la calificación alta que se tenga en ese instante, para evaluar esta condición, CALTA necesita un valor inicial en este caso es 0 debido a que la primera calificación que se evalue será la mas alta y se tendrá como referencia para la siguiente evaluación, que decidirá si esa es la califiación mayor o se sutituye por la actual, así se ira evaluando hasta terminar el recorrido de la matriz y entonces CALTA tendrá la calificación mas alta que se devolverá al programa principal.
     
     *El mismo proceso se realiza para encontrar la calificación baja, sólo que esta vez la variable CBAJA se inicializa con 10 debido a que de esta manera la primera calificación que se evalue cumpla con la condición de ser la primera calificación baja y pueda tomarse como referencia para las siguientes evaluaciones.

      *Se realiza el proceso para calcular el promedio por cada uno de los departamentales, en este caso, se procesa por cada una de las columnas de la matriz, considerando que la columna 0 corresponde al primer departamental, la columna 1 al segundo y la columna 2 al tercero. 
      
      *Observar que por esta razón el procesamiento es como si fuera un vector, utilizando solo una estructura for y dejando fijo el valor de la columna en el procesamiento.

     *El procesamiento se realiza como si fuera un vector y por columna, por esa razón sólo se define una estructura FOR y observe que el índice de la columna permanece fijo para cada estructura FOR; ésto indica que sólo se sumarán los elementos de esa columna que corresponden a ese departamental. Cada estructura FOR realiza el proceso por separado para cada columna, al final se calculan los promedios con la suma de cada departamental dividido entre los N alumnos.


#include <conio.h>
#include <stdio.h>
#define F 50
#define C 3

void CREAR_MATRIZ(float [][C],int &,int &);
void IMPRIMIR_MATRIZ(float [][C],int &,int &);
float CALIFICACION_ALTA(float [][C],int &,int &);
float CALIFICACION_BAJA(float [][C],int &,int &);
void PROMEDIO_DEPART(float [][C],int &);

void main()
{
int N;
float CALIF[F][C],CALTA,CBAJA;
printf("Cuantos alumnos: ");
scanf("%d",&N);
CREAR_MATRIZ(CALIF,N,C);
IMPRIMIR_MATRIZ(CALIF,N,C);
CALTA=CALIFICACION_ALTA(CALIF,N,C);
printf("\nLa calificacion mas alta es: %0.1f",CALTA);
CBAJA=CALIFICACION_BAJA(CALIF,N,C);
printf("\nLa calificacion mas baja es: %0.1f",CBAJA);
PROMEDIO_DEPART(CALIF,N);
getch();
}

void CREAR_MATRIZ(float calif[][C],int &n,int &c)
{
int i,j;
for(j=0;j<c;j++)
{
printf("\nDepartamenal %d:\n",j+1);
for(i=0;i<n;i++)
{
printf("Ingresa la calificacion: ");
scanf("%f",&calif[i][j]);
}
}
}

void IMPRIMIR_MATRIZ(float calif[][C],int &n,int &c)
{
int i,j;
printf("\n1Dep\t2Dep\t3Dep\n");
for(i=0;i<n;i++)
{
for(j=0;j<c;j++)
{
printf("%0.1f\t",calif[i][j]);
}
printf("\n");
}
}

float CALIFICACION_ALTA(float calif[][C],int &n,int &c)
{
int i,j;
float calta;
calta=0.0;
for(i=0;i<n;i++)
{
for(j=0;j<c;j++)
{
if(calif[i][j]>=calta)
{
calta=calif[i][j];
}
else
{
calta=calta;
}
}
}
return calta;
}

float CALIFICACION_BAJA(float calif[][C],int &n,int &c)
{
int i,j;
float cbaja;
cbaja=10.0;
for(i=0;i<n;i++)
{
for(j=0;j<c;j++)
{
if(calif[i][j]<=cbaja)
{
cbaja=calif[i][j];
}
else
{
cbaja=cbaja;
}
}
}
return cbaja;
}

void PROMEDIO_DEPART(float calif[][C],int &n)
{
float sum1,sum2,sum3,prom1,prom2,prom3;
int i;
sum1=0;
sum2=0;
sum3=0;
for(i=0;i<n;i++)
{
sum1=sum1+calif[i][0];
}
for(i=0;i<n;i++)
{
sum2=sum2+calif[i][1];
}
for(i=0;i<n;i++)
{
sum3=sum3+calif[i][2];
}

prom1=sum1/n;
prom2=sum2/n;
prom3=sum3/n;
printf("\nEl promedio del primer departamental es: %0.1f",prom1);
printf("\nEl promedio del segundo departamental es: %0.1f",prom2);
printf("\nEl promedio del tercer departamental es: %0.1f",prom3);
}


    • EJERCICIO.
       Desarrollar la codificación de un programa que crea e imprime una matriz de numeros enteros de longitud NxM. El programa cuenta cuantos numeros pares e impares contiene y tambien cuantos negativos y positivos.

#include <conio.h>
#include <stdio.h>
#define F 20
#define C 20

void CREAR_MATRIZ(int [][C],int &,int &);
void VER_MATRIZ(int [][C],int &,int &);
void CONTAR_DATOS(int [][C],int &,int &);

void main()
{
int MATRIZ[F][C],N,M;
printf("Cuantas filas: ");
scanf("%d",&N);
printf("Cuantas columnas: ");
scanf("%d",&M);
CREAR_MATRIZ(MATRIZ,N,M);
VER_MATRIZ(MATRIZ,N,M);
CONTAR_DATOS(MATRIZ,N,M);
getch();
}

void CREAR_MATRIZ(int matriz[][C],int &n,int &m)
{
int i,j;
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
printf("Ingresa el dato: ");
scanf("%d",&matriz[i][j]);
}
}
}
void VER_MATRIZ(int matriz[][C],int &n,int &m)
{
int i,j;
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
printf(" %d",matriz[i][j]);
}
printf("\n");
}
}

void CONTAR_DATOS(int matriz[][C],int &n,int &m)
{
int i,j;
int contP,contI,contNeg,contPos;
contP=0;
contI=0;
contNeg=0;
contPos=0;
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
if(matriz[i][j]%2==0)
{contP=contP+1;}
else
{contI=contI+1;}
if(matriz[i][j]<0)
{contNeg++;}
else
{contPos++;}
}
}
printf("\n\nLa matriz tiene %d numeros pares.",contP);
printf("\nLa matriz tiene %d numeros impares.",contI);
printf("\nLa matriz tiene %d numeros positivos.",contPos);
printf("\nLa matriz tiene %d numeros negativos.",contNeg);
}


  ► ARREGLOS unidimensional - NUMÉRICOS.



  ► ARREGLOS unidimensional DE CARACTERES.
    
    Son conocidos como cadenas de caracteres y es un tipo especial de arreglos, pues se trata de 
un conjunto de datos tipo char, que termina con un caracter nulo(“\0”), los elementos de un 
arreglo de tipo carácter se almacenan en forma contigua y subsecuente en la memoria de la 
computadora y el índice del primer elemento es cero. Sin embargo, al ingresar los datos al 
arreglo no se utiliza el índice, ni la estructura for, en su lugar la función de entrada maneja el 
modificador de datos de cadenas “%s”.
Lenguaje C provee una librería que contiene el conjunto de funciones utilizadas para 
procesamiento de cadenas de caracteres, esta es la librería string.h
Los identificadores de las cadenas de caracter se definen de acuerdo con lo que almacenan, 
por que los elementos del arreglo no se procesan de forma individual o independiente como 
lo hacen los arreglos numéricos, por ejemplo, se puede definir la cadena NOMBRE, 
PALABRA, DIRECCION, APELLIDO, PRODUCTO, etc

   SINTAXIS DE DECLARACIÓN EN LENGUAJE C
Un arreglo de caracteres también tiene que declararse antes de ser utilizado en un programa 
y de la misma forma que los arreglos numéricos se puede definir una constante de longitud 
máxima para el arreglo, esta constante se define en las directivas del procesador con la 
instrucción #define.
 char nombre_cadena[longitud_de_cadena];
Ejemplos:
char nombre[30];
char apellido[MAX];
char palabra[MAX];
char frase[50];

INSTRUCCIONES DE ENTRADA Y SALIDA PARA MANEJO DE CADENAS DE 
CARACTERES
ENTRADA: Una cadena de caracteres se lee o se recibe como entrada con la función de 
entrada de datos scanf(), utilizando el modificador de tipo de dato “%s”, donde el 
modificador “s” significa string (cadena).
Sintaxis general:
scanf(“%s”,&nombre_cadena);
OBSERVAR: Aunque se trata de un arreglo las cadenas NO utilizan los corchetes con índice, 
debido a que su procesamiento es conjunto. Únicamente se escribe el nombre de la cadena 
que se quiere leer.
Ejemplo:
scanf(“%s”,&nombre); //Se recibe una cadena llamada nombre como entrada.
scanf(“%s”,&palabra); //Se lee una cadena llamada palabra que es introducida por el usuario.
SALIDA: Una cadena de caracteres se escribe o imprime como salida con la función de salida 
de datos printf(), utilizando el modificador de tipo de dato “%s”, donde el modificador “s”
significa string (cadena).
Sintaxis general:
printf(“La cadena es: %s”,nombre_cadena);
OBSERVAR: Aunque se trata de un arreglo las cadenas NO utilizan los corchetes con índice, 
debido a que su procesamiento es conjunto. Únicamente se escribe el nombre de la cadena 
que se quiere imprimir.
Ejemplo:
printf(“La cadena es: %s”,nombre); //Se imprime una cadena llamada nombre.
printf(“La cadena es: %s”,palabra); //Se imprime una cadena llamada palabra que fue 
introducida anteriormente.

OBSERVAR: El arreglo de caracteres o cadena se pasa como argumento de entrada a una 
función igual que los arreglos numéricos, sólo se agregan los corchetes vacíos.

Cuando se ejecuta el programa, este sólo aceptará los nombres que consten de una sola 
palabra, es decir scanf() no podrá almacenar nombres como ANA MARIA, JOSE LUIS, 
etc., debido a que el procesamiento de cadenas de caracteres contempla el espacio (barra 
espaciadora) entre las palabras como el carácter nulo, lo que indicará que es el fin de la 
cadena y el segundo nombre ya no podrá guardarse.
Solución: Podemos sustituir el uso de la función scanf() con la función de entrada de 
cadena gets(), que significa get string(obtener cadena), la cual permite leer la barra 
espaciadora como un carácter blanco y no como el carácter nulo.
Función de entrada modificada:
void LEE_NOMBRE(char nombre[ ])
{
printf(“Ingresa el nombre:”);
gets(nombre);
}


► ARREGLOS DE CADENAS DE CARACTERES
En algunos problemas es necesario el manejo de más de una cadena de caracteres, las 
cuales representan información que genera una estructura de datos más grande, como por 
ejemplo: la lista de nombres de un grupo de alumnos, los nombres de un conjunto de 
trabajadores, el menú de platillos de un restaurante, la lista de productos de un negocio, etc. 
La solución podría ser definir tantos arreglos de cadenas como se requieran, sin embrago 
esto no es eficiente en el momento de la programación, además de que no siempre se puede 
saber por anticipado el numero de cadenas requeridas.
Existe en la programación el concepto de arreglos de cadenas de caracteres, es decir, un 
arreglo de arreglos, y debido a que las cadenas de caracteres son procesadas de manera 
conjunta, no existe complejidad en su representación y sobre todo en su implementación.
Estos arreglos se representan como si fueran una matriz de caracteres, que contienen el 
conjunto de los arreglos de caracteres o cadenas, que definen la misma información, sin 
embargo, NO se procesan como matrices. 

Para manejar estos datos se utiliza el indice de control que es i, el cual sólo controla las 
filas de esta matriz, debido a que las cadenas se almacenan y se procesan de forma 
contigua, como se mostró en el tema anterior.

SINTAXIS DE DECLARACIÓN DEL ARREGLO DE CADENAS EN LENGUAJE C
#define F 30 //Se define el máximo de filas (F), es decir, cuantas cadenas (nombres, 
//palabras, frases, etc.) se desean guardar. En este caso son 30 cadenas.
#define C 30 //Se define el máximo de columna (C), es decir, la longitud máxima de la 
//cadena (cuantas letras o caracteres tendrán). En este caso sólo cadenas de hasta 30 
//caracteres.
char nombre_arreglo[MAXIMO_FILAS][MAXIMO_ COLUMNAS];
OBSERVAR que al ser un arreglo de arreglos se representa como una matriz, por lo tanto 
se utilizan los corchetes con la variable de FILAS y los corchetes con la variable de 
COLUMNAS.
Ejemplos:
char nombres[F][C];
char apellidos[30][30];
char productos[MAXF][MAXC];
char cedula[F][C];

OBSERVAR: Ahora se utiliza la estructura repetitiva for para poder crear cada una de las 
cadenas.
En el símbolo de entrada se define la variable NOMBRES que es el arreglo de cadenas y se 
agregan los corchetes y la variable índice i para indicar la posición de cada cadena en la 
estructura.

OBSERVAR: La integración de la función fflush(stdin); que se utiliza para limpiar el 
buffer de entrada cada vez que se ingresa una nueva cadena.

PASO DEL ARREGLO DE CADENAS COMO ARGUMENTO A LA FUNCIÓN
Se define con la siguiente sintaxis, para el prototipo de función y para la definición de 
función, en la llamada a la función se realiza de la misma forma que con los arreglos antes 
vistos, sólo se escribe el identificador del arreglo.
Prototipo de función: 
….nombre_funcion(…, char [][C]);
Definición de función:
…nombre_funcion(…,char nombre_arreglo[][C]){ … } 
Observar: Esta declaración está en las funciones CREAR_ARREGLO e 
IMPRIMIR_ARREGLO arriba descritas

ARREGLOS PARALELOS.

Son arreglos que representan distintos tipos de información con distintos tipos de datos, 
cuyos elementos correspondientes están relacionados de manera semántica entre ellos, es 
decir, su relación y significado son directamente dependientes. Por lo tanto su 
procesamiento y análisis se realiza de forma lineal y ligada en relación al índice que le 
corresponde, por ejemplo, el dato en la posición i del primer arreglo, está relacionado con el 
dato en la posición i del siguiente arreglo y así sucesivamente.


Los arreglos paralelos deben tener la misma longitud en el número de filas para su 
procesamiento. 
Los arreglos paralelos se procesan mediante una estructura de tipo iterativa o bucle, 
generalmente la estructura FOR.
Dependiendo de su proposito los arreglos paralelos pueden utilizar, arreglos numéricos o de 
tipo carácter y arreglos unidimensionales o bidemensionales.



▲ APUNTADORES.




  
<a id="seccion1"></a>
## OPERADORES EN C


<a id="fin"></a>
## Fin  
[Volver arriba](#mi-documento)
  
<!-- 
<a id="top"></a>
# PROGRAMACIÓN ESTRUCTURAL EN LENGUAJE C -->
<!-- 
[//]: # (Contenido del documento aquí...)

## Al final de tu archivo o en cualquier sección: -->
[↑ Volver al inicio](#top)










