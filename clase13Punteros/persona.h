#ifndef PERSONA_H_INCLUDED
#define PERSONA_H_INCLUDED

typedef struct
{
    char nombre[50];
    int edad;
    int estado;

}ePersona;

/** \brief
 *
 * \param ePersona[]
 * \param len int
 * \return int
 *
 */
int damePersona(ePersona[], int len);

/** \brief
 *
 * \param ePersona[]
 * \param len int
 * \return int
 *
 */
int mostarPersona(ePersona[], int len);




#endif // PERSONA_H_INCLUDED
