#ifndef _EMPLOYEE_H
#define _EMPLOYEE_H

#define EMPLOYEE_TYPE_ARCHITECT    0
#define EMPLOYEE_TYPE_MANAGER      1
#define EMPLOYEE_TYPE_DESIGNER     2
#define EMPLOYEE_TYPE_JUNIOR       3
#define EMPLOYEE_TYPE_PROGRAMMER   4

struct
{
    int id;
    char name[51];
    char lastName[51];
    int age;
    int type;
}typedef Employee;


/** \brief crea de forma dinamica un nuevo elemento de la entidad
 *
 * \param campos de la entidad
 * \param
 * \return puntero al elemto creado
 *
 */
Employee* emp_new(char* name, char* lastName, int age, int type, int id);

/** \brief libera de manera dinamica un elemento de la entidad
 *
 * \param puntero a elemento a elimiar
 * \param
 * \return 0 OK
 *
 */
int emp_delete(Employee* this);

/** \brief setea un campo del elemento de la entidad
 *
 * \param puntero al elemento
 * \param el campo (char)
 * \return 0 OK
 *
 */
int emp_setName(Employee* this,char* name);

/** \brief obtiene un campo del elemento de la entidad
 *
 * \param puntero al elemento
 * \param el campo (char)
 * \return 0 OK
 *
 */
char* emp_getName(Employee* this);

/** \brief setea un campo del elemento de la entidad
 *
 * \param puntero al elemento
 * \param el campo (char)
 * \return 0 OK
 *
 */
int emp_setLastName(Employee* this,char* lastName);

/** \brief obtiene un campo del elemento de la entidad
 *
 * \param puntero al elemento
 * \param el campo (char)
 * \return 0 OK
 *
 */
char* emp_getLastName(Employee* this);

/** \brief setea un campo del elemento de la entidad
 *
 * \param puntero al elemento
 * \param el campo (int)
 * \return 0 OK
 *
 */
int emp_setId(Employee* this,int id);

/** \brief obtiene un campo del elemento de la entidad
 *
 * \param puntero al elemento
 * \param el campo (int)
 * \return 0 OK
 *
 */
int emp_getId(Employee* this);

/** \brief setea un campo del elemento de la entidad
 *
 * \param puntero al elemento
 * \param el campo (int)
 * \return 0 OK
 *
 */
int emp_setAge(Employee* this,int age);

/** \brief obtiene un campo del elemento de la entidad
 *
 * \param puntero al elemento
 * \param el campo (int)
 * \return 0 OK
 *
 */
int emp_getAge(Employee* this);

/** \brief setea un campo del elemento de la entidad
 *
 * \param puntero al elemento
 * \param el campo (int)
 * \return 0 OK
 *
 */
int emp_setType(Employee* this,int type);

/** \brief obtiene un campo del elemento de la entidad
 *
 * \param puntero al elemento
 * \param el campo (int)
 * \return 0 OK
 *
 */
int emp_getType(Employee* this);


/** \brief Analiza si el elemento cumple con dos condiciones - mayor 30 años - tipo = 4
 *
 * \param puntero al elemento de la entidad
 * \param
 * \return 1 cumple con las condiciones / 0 no cumple con la condiciones
 *
 */
int employee_filterEmployee(void* item);

/** \brief Imprime los campos de un elemento de la entidad
 *
 * \param el puntero al elemento
 * \param
 * \return
 *
 */
void employee_print(Employee* this);

#endif // _EMPLOYEE_H



