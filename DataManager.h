#ifndef DATAMANAGER_H_INCLUDED
#define DATAMANAGER_H_INCLUDED

/** \brief Genera un archivo de texto con la informacion de una lista
 *
 * \param lista con el contenido
 * \param
 * \return 0 OK / -1 error de apertura del archivo
 *
 */


int dm_dumpEmployeeList(ArrayList* list);

/** \brief Lee datos de un archivo, los valida y los agrega a un arrayList
 *
 * \param puntero a lista Arraylist
 * \param
 * \return 0 OK / -1 puntero error de lectura
 *
 */

int dm_readAll ( ArrayList* listaEmpleados);

#endif // DATAMANAGER_H_INCLUDED
