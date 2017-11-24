#include <stdio.h>
#include <stdlib.h>
#include "ArrayList.h"
#include "Employee.h"
#include "DataManager.h"
#include "validar.h"


int dm_readAll ( ArrayList* listaEmpleados)
{
        FILE *pFile;
        Employee* auxEmpleado;
        int retorno=-1;
        char id[51];
        char name[51];
        char lastName[51];
        char age[51];
        char type[51];
        char saltear[40];

        pFile = fopen("data.csv","r");

        if(pFile!=NULL)
        {
            fgets(saltear,40,pFile);
            while(!feof(pFile))
            {
                fscanf(pFile,"%[^,],%[^,],%[^,],%[^,],%[^\n]\n",id,name,lastName,age,type);
                //printf("%s - %s - %s- %s - %s\n",id,name,lastName,age,type);

                if( val_validarUnsignedInt(id)== 0)
                {
                    if(val_validarNombre(name) == 0)
                    {
                        if(val_validarNombre(lastName) == 0)
                        {
                            if(val_validarUnsignedInt(age) == 0)
                            {
                                if(val_validarUnsignedInt(type) == 0)
                                {
                                    auxEmpleado = emp_new(name,lastName,atoi(age),atoi(type),atoi(id));
                                    al_add(listaEmpleados,auxEmpleado);
                                }
                            }
                        }
                    }

                }
            }
            fclose(pFile);
            retorno = 0;
        }
        return retorno;
    }


int dm_dumpEmployeeList(ArrayList* list)
{
    int i;
    int retorno = -1;
    FILE *pFile;
    pFile=fopen("out.csv","w");
    if(pFile == NULL)
    {
        printf("No se pudo abrir el archivo\n");
    }
    else
    {
        fprintf(pFile,"id,first_name,last_name,age,type\n");
        Employee* auxEmpleado;
        for(i=0; i<al_len(list); i++)
        {
            auxEmpleado = al_get(list,i);
            fprintf(pFile,"%d,%s,%s,%d,%d\n", emp_getId(auxEmpleado), emp_getName(auxEmpleado),
                    emp_getLastName(auxEmpleado),emp_getAge(auxEmpleado),emp_getType(auxEmpleado));
        }
        retorno = 0;
    }
    fclose(pFile);
    printf("\nArchivo guardado con exito\n");

    return retorno;
}

