#include "TDAconjunto.h"

int main(void) {  

    conjunto* c = crea_conjunto(5);
    agregar_elemento(c ,1);
    agregar_elemento(c, 2);
    agregar_elemento(c, 3);
    //agregar_elemento(c, 4);
    agregar_elemento(c, 5);
    agregar_elemento(c, 6);

    imprime_conjunto(c);

    eliminar_elemento(c, 2);
    imprime_conjunto(c);


    return 0;
    }