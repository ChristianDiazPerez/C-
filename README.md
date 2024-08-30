
# Manual personal de C++
## Instalación
Necesitamos instalar la extension de C/C++ de VScode
![](img/extension.png)
Si utilizamos windows necesitamos instalar el compilador.

Comprobar si tenemos instalado el compilador y que versión.
![](img/cmd_compilador1.png)
El compilador que tenemos que instlar es: **MinGW-w64**
Nos dirigimos a la página oficial. 
[https://www.mingw-w64.org/](https://www.mingw-w64.org/) 
Descargas. 

Tenemos que instalr el programa MSYS2.

Seleccionamos la opción: MSYS2
Descargamos el instalador y lo ejecutamos.

Se nos acaba de instalar un entorno unix junto con el compilador gcc
En la terminal que acabamos de instalar. 

Vamos a instalar el compilador gcc.
copiando el siguiente comando:

`
pacman -S mingw-w64-ucrt-x86_64-gcc
`
![](img/terminal1.png)
Ya lo tendriamos instalado.
![](img/fin_instalacion_gcc.png)

Acontinuación tenemos que actualizar los paquetes. 
Cerramos esta terminal y abrimos la terminal MSYS2 MSYS buscandola en el menu de windows.

Introducimos el comando: 

`
pacman -Suy
`

Seguido del comando: 

`
pacman -S --needed base-devel mingw-w64-x86_64-toolchain
`

Nos da la opctión de seleccionar que queremos instalar. 
En nuestro caso vamos a seleccionar todos introduciendo enter.
![](img/terminal2.png)

Ya hemos terminado de instalr todo.

Cerramos la terminal y la volvemos a abrir.

Comprobamos la versión instalada.
![](img/terminal3.png)

Esto no significa que no esté instalado. Si no que no está añadido al path. Es decir, no sabe donde está este programa. 

Nos dirijimos en el explorador de archivos a: Este esquipo / Windows (C:) / msys64  / mingw64 / bin 

Aqui se encuentra g++

Copiamos esta ruta: C:\msys64\mingw64\bin

En el buscador de windows ponemos: path

Abrimos: Editar las varibles de entorno del sistema

Opciones avanzadas -> varibles de entorno

En path editamos

![](img/path1.png)
Pulsamos en nuevo
![](img/path2.png)
Pegamos la ruta anterior y aceptar. 
![](img/path3.png)
Al comprobar de nuevo la versión.
![](img/terminal_fin.png)
Con esto ya hemos finalizado completamente la instalación del compilador gcc.

## Primer progrma

Escribimos un Hola mundo.
![](img/progrma11.png)

Pulsamos F1 y escribimos: integrated terminal 
![](img/ejercicio12.png)

Nos dirigimos a la dirección donde se encuentra nuestro archivo .cpp en la terminal y escribimos:

`
c++ nombre_del_archivo.cpp -o hola_mundo.exe
`

-o significa asignarle una salida.

![](img/compilacion1.png)

Acontinuación ejecutamos el ejecutable que se nos ha creado. Introduciendo: 

`
/hola_mundo.exe
`

![](img/compilacion2.png)

De esta forma hemos creado, compilado y ejecutado nuestro primer progrma.

### Extensión code runner 

Vamos a instalar una extensión a Visual Studio Code para compilar y ejecutar directamente nuestro código apretando un botón.

![](img/code_runner1.png)

Apretando este boton el ejecuta las órdenes de la terminal por nosotros.

![](img/code_runner2.png)




