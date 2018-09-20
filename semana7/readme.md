Ejercicio 1:

En la semana 7 solo tuvimos que hacer un ejercicio. Este programa es una practica de todo lo que hemos visto hasta ahora, se utilizan ciclos, condicionales, y variables tipo FILE para modificar archivos. El ejercicio consiste en evaluar una funcion x elevada a un numero p, en un intervalo definido por el usuario con un numero de veces, todo esto leido desde un archivo, y ademas calcular la integral de la funcion utilizando el metodo del trapecio, desde el valor minimo dado por el usuario hasta el valor de la funcion en ese momento. Lo primero que se hace es leer las variables del archivo, una vez leidas se hace el calculo del espaciado entre cada valor de x. Despues de inicia un ciclo for, comenzando por el valor minimo de x, sumando el espaciado calculado previamente, y asi determinar cada valor de x. Depues utilizando la funcion pow se eleva el valor de x en ese momento, que para comodidad lo vamos a igual al contador del for 'i', al exponente p, para determinar el valor de la funcion. Despues, para calcular la integral del valor minimo, hasta el valor de x en ese momento, se tiene que hacer una serie de operaciones. Las operaciones las podemos separar en tres partes: la obtencion del valor de h, la obtencion de la sumatoria, y la obtencion del valor de la division. Para h, es facil, solo restas el valor del contador en ese momento menos el valor minimmo de x y lo divides entre el total de partes en las cuales dividiras la integral. Despues para la suma, tienes que usar un ciclo for, el cual lo haces desde uno, hasta el total de partes k, de (a + k * h) elevado a la p, donde a es el valor minimo, k el valor del contador del for y h el valor ya calculado. Y finalmente el valor de la division es el valor de x minima elevado a la p mas el valor de x elevado a la p entre dos. Por ultimo se calcula el valor de la integral y se imprime en el archivo, junto con los valores de x y de f(x). Se repite el ciclo el numero de veces que el usuario determine y listo.




















 da
