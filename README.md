# Libft

*Este proyecto ha sido creado como parte del currículo de 42 por vicsanch.*

## Descripción
Libft es una librería en C que reimplementa funciones de la libc, añade funciones
adicionales y utilidades para manejar listas enlazadas. Su objetivo es comprender el funcionamiento interno de estas funciones.


## Instrucciones

Compilar la librería:

	make

Esto genera `libft.a` en la raíz del repositorio.

Otras reglas disponibles:

	make clean    # elimina los archivos objeto
	make fclean   # elimina los objetos y libft.a
	make re       # recompila desde cero

Para usarla, incluye `libft.h` y enlaza con `libft.a`.

## Recursos
- Manuales de C (comandos `man` en terminal) para entender el comportamiento exacto de las funciones de `libc`.
- Documentación sobre el uso de punteros genéricos (`void *`) y doble punteros en C.
- Herramientas de IA utilizadas de forma consultiva para aclarar conceptos teóricos sobre la iteración de nodos y la gestión de punteros dobles