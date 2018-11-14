Ejercicio Oscilador:

El ejercicio es calcular la funcion del oscilador armonico, para esto se implementa el metodo de Euler en el programa. Lo primero que se hace es inicializar los valores, se toma un numero maximo de iteraciones, un espaciado de tiempo, y una velocidad angular, que se calcula sacando la raiz cuadrada de la gravedad entre la longitud del pendulo.
Se utilizan tres funciones, la primera de nombre 'ite', calcula el numero de iteraciones a realizar, esto se logra dividiendo el tiempo maximo entre el intervalo de tiempo h, el resultado se convierte a entero para despues utilizar este valor en un arreglo.
La segunda funcion 'inicia', inicializa los arreglos que vamos a utilizar, se inician utilizando la funcion "np.zeros", y dandole el tamaño del numero de iteraciones
Despues de esto se inician los arreglos, se utiliza uno para el calculo de la velocidad y otro para el angulo, se utiliza la funcion dos, y para que el valor del pendulo tenga movimiento se tiene que cambiar el primer valor del arreglo de la velocdad, por un termino diferente de 0.
La tercera funcion es la de los calculos. Se implementa el metodo de Euler en un ciclo for, el ciclo va desde i hasta n-1, ya que tambien se cuenta el i=0. Los valores calculados se van guardando en arreglos, y termiado el ciclo terminan los calculos a realizar.
Se imprimen tres graficas, la primera es del angulo en funcion del tiempo, la segunda del angulo en funcion de la velocidad y la tercera de la velocidad en funcion del tiempo y listo. 
