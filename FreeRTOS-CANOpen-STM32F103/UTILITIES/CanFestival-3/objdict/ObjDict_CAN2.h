
/* File generated by gen_cfile.py. Should not be modified. */

#ifndef OBJDICT_CAN2_H
#define OBJDICT_CAN2_H

#include "data.h"

/* Prototypes of function provided by object dictionnary */
UNS32 ObjDict_CAN2_valueRangeTest (UNS8 typeValue, void * value);
const indextable * ObjDict_CAN2_scanIndexOD (UNS16 wIndex, UNS32 * errorCode, ODCallback_t **callbacks);

/* Master node data struct */
extern CO_Data ObjDict_CAN2_Data;

#endif // OBJDICT_CAN2_H
