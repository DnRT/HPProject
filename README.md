# HPProject

Implementacion de algoritmo A* de bajo los paradigmas de alto desempeño vectorial y paralelismo. Este proyecto personal es meramente para estudio.

Hardware a utilizar es el siguiente:
```
    PC1:
        Procesador = AMD FX 9830P (4C / 4T)  3.0GHz
        RAM = 12GB DDR4 2133MHz
        OS = Arch Linux kernel version (6.3.2-arch1-1)
    PC2:
        Procesador = Intel Xeon E5-2680v4 (14C / 28T) 2.4GHz
        RAM = 16GB DDR4 2133MHz
        OS = Arch Linux kernel version (6.3.2-arch1-1)
    Servidor:
        Procesador = 2x Intel Xeon E5-2407 (4C / 4H) 2.2GHz
        RAM = 32GB DDR3 1066MHz
        OS= Ubuntu 20.04.6 LTS (GNU/Linux 5.4.0-144-generic)
```

Cabe recalcar que se consideraran como mas relevantes los experimentos realizados en el ```Servidor``` esto debido por conveniencia y tener un punto de comparacion dentro mas fidedigno.

Como detalles se utilizara la heuristica de la distancia de Manhattan la cual tiene la siguiente formula:

```
Nodo A (a,b), Nodo B (c,d)
Distancia = |A| + |B| = |(a-c)+(b-d)|
```

