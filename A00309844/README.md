so-workshop2
## Taller 2
Universidad ICESI  
**Curso:** Sistemas Operativos  
**Nombre:** David Felipe Cobo Plazas
**Código:** A00309844 
**Tema:** Llamadas al sistema  

## Descripción:  
Las llamadas del sistema que hice fueron las siguientes: creat, write, close y gettimeofday.

### **Función creat**  
La función creat permite crear un archivo de texto.

creat(const char *pathname, mode_t mode);
-El parámetro *pathname es el nombre y la extensión del archivo que se va a crear; por ejemplo, prueba.txt.
-El parámetro mode se refiere a los permisos que va a tener ese archivo creado; por ejemplo, O_RDONLY para solo lectura o O_WRONLY para solo escritura.
Retorna -1 en caso de error  

### **Función write**  
La función write se encarga de escribir en el archivo. 
 
write (int archivo,void buffer, unsigned tamaño_de_la_cadena);  
-El parámetro archivo es un descriptor del archivo creado con anterioridad y abierto.
-El parámetro buffer se refiere al area de memoria donde se va a afectuar la trasferencia.  
-El tamaño de la cadena fue dada por la función strlen(); pero ese tamaño especifica el número de bytes que va a trasferir.  
Retorna -1 en caso de error  

### **Función close**
La función close se utiliza para cerrar un fichero abierto.

close ( int fichero );
-El fichero es el descriptor de un fichero ya abierto.
Retorna -1 en caso de error.  

### **Función gettimeofday**
La función gettimeofday obtiene la  fecha  y  hora  actual del sistema a través del kernel quien consulta a el RTC (real time clock) de  la  máquina.

gettimeofday(struct timeval *tv, struct timezone *tz);
-El parámetro se refiere a la hora actual.
-El parámetro se refiere a la zona horaria a consultar la hora.
Retorna -1 en caso de error.
