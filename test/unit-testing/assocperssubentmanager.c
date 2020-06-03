// TODO debugging
#define DWG_TYPE DWG_TYPE_ASSOCPERSSUBENTMANAGER
#include "common.c"

void
api_process (dwg_object *obj)
{
  int error;
  BITCODE_BL class_version;
  BITCODE_BL unknown_3;
  BITCODE_BL unknown_0;
  BITCODE_BL unknown_2;
  BITCODE_BL i, numassocsteps;
  BITCODE_BL numassocsubents;
  BITCODE_BL *assocsteps;
  BITCODE_BL *assocsubents;

  BITCODE_BL unknown_bl6;
  BITCODE_BL unknown_bl6a;
  BITCODE_BL unknown_bl7a;
  BITCODE_BL unknown_bl7;
  BITCODE_BL unknown_bl8;
  BITCODE_BL unknown_bl9;
  BITCODE_BL unknown_bl10;
  BITCODE_BL unknown_bl11;
  BITCODE_BL unknown_bl12;
  BITCODE_BL unknown_bl13;
  BITCODE_BL unknown_bl14;
  BITCODE_BL unknown_bl15;
  BITCODE_BL unknown_bl16;
  BITCODE_BL unknown_bl17;
  BITCODE_BL unknown_bl18;
  BITCODE_BL unknown_bl19;
  BITCODE_BL unknown_bl20;
  BITCODE_BL unknown_bl21;
  BITCODE_BL unknown_bl22;
  BITCODE_BL unknown_bl23;
  BITCODE_BL unknown_bl24;
  BITCODE_BL unknown_bl25;
  BITCODE_BL unknown_bl26;
  BITCODE_BL unknown_bl27;
  BITCODE_BL unknown_bl28;
  BITCODE_BL unknown_bl29;
  BITCODE_BL unknown_bl30;
  BITCODE_BL unknown_bl31;
  BITCODE_BL unknown_bl32;
  BITCODE_BL unknown_bl33;
  BITCODE_BL unknown_bl34;
  BITCODE_BL unknown_bl35;
  BITCODE_BL unknown_bl36;
  BITCODE_B unknown_b37;

#ifdef DEBUG_CLASSES
  dwg_obj_assocperssubentmanager *_obj = dwg_object_to_ASSOCPERSSUBENTMANAGER (obj);
  if (obj->fixedtype == DWG_TYPE_UNKNOWN_OBJ)
    return;
 
  CHK_ENTITY_TYPE (_obj, ASSOCPERSSUBENTMANAGER, class_version, BL);
  CHK_ENTITY_MAX (_obj, ASSOCPERSSUBENTMANAGER, class_version, BL, 3);
  CHK_ENTITY_TYPE (_obj, ASSOCPERSSUBENTMANAGER, unknown_3, BL);
  CHK_ENTITY_TYPE (_obj, ASSOCPERSSUBENTMANAGER, unknown_0, BL);
  CHK_ENTITY_TYPE (_obj, ASSOCPERSSUBENTMANAGER, unknown_2, BL);

  CHK_ENTITY_TYPE (_obj, ASSOCPERSSUBENTMANAGER, numassocsteps, BL);
  CHK_ENTITY_VECTOR_TYPE (_obj, ASSOCPERSSUBENTMANAGER, assocsteps, numassocsteps, BL);
  CHK_ENTITY_TYPE (_obj, ASSOCPERSSUBENTMANAGER, numassocsubents, BL);
  CHK_ENTITY_VECTOR_TYPE (_obj, ASSOCPERSSUBENTMANAGER, assocsubents, numassocsubents, BL);
  
  CHK_ENTITY_TYPE (_obj, ASSOCPERSSUBENTMANAGER, unknown_bl6, BL);
  CHK_ENTITY_TYPE (_obj, ASSOCPERSSUBENTMANAGER, unknown_bl6a, BL);
  CHK_ENTITY_TYPE (_obj, ASSOCPERSSUBENTMANAGER, unknown_bl7a, BL);
  CHK_ENTITY_TYPE (_obj, ASSOCPERSSUBENTMANAGER, unknown_bl7, BL);
  CHK_ENTITY_TYPE (_obj, ASSOCPERSSUBENTMANAGER, unknown_bl8, BL);
  CHK_ENTITY_TYPE (_obj, ASSOCPERSSUBENTMANAGER, unknown_bl9, BL);
  CHK_ENTITY_TYPE (_obj, ASSOCPERSSUBENTMANAGER, unknown_bl10, BL);
  CHK_ENTITY_TYPE (_obj, ASSOCPERSSUBENTMANAGER, unknown_bl11, BL);
  CHK_ENTITY_TYPE (_obj, ASSOCPERSSUBENTMANAGER, unknown_bl12, BL);
  CHK_ENTITY_TYPE (_obj, ASSOCPERSSUBENTMANAGER, unknown_bl13, BL);
  CHK_ENTITY_TYPE (_obj, ASSOCPERSSUBENTMANAGER, unknown_bl14, BL);
  CHK_ENTITY_TYPE (_obj, ASSOCPERSSUBENTMANAGER, unknown_bl15, BL);
  CHK_ENTITY_TYPE (_obj, ASSOCPERSSUBENTMANAGER, unknown_bl16, BL);
  CHK_ENTITY_TYPE (_obj, ASSOCPERSSUBENTMANAGER, unknown_bl17, BL);
  CHK_ENTITY_TYPE (_obj, ASSOCPERSSUBENTMANAGER, unknown_bl18, BL);
  CHK_ENTITY_TYPE (_obj, ASSOCPERSSUBENTMANAGER, unknown_bl19, BL);
  CHK_ENTITY_TYPE (_obj, ASSOCPERSSUBENTMANAGER, unknown_bl20, BL);
  CHK_ENTITY_TYPE (_obj, ASSOCPERSSUBENTMANAGER, unknown_bl21, BL);
  CHK_ENTITY_TYPE (_obj, ASSOCPERSSUBENTMANAGER, unknown_bl22, BL);
  CHK_ENTITY_TYPE (_obj, ASSOCPERSSUBENTMANAGER, unknown_bl23, BL);
  CHK_ENTITY_TYPE (_obj, ASSOCPERSSUBENTMANAGER, unknown_bl24, BL);
  CHK_ENTITY_TYPE (_obj, ASSOCPERSSUBENTMANAGER, unknown_bl25, BL);
  CHK_ENTITY_TYPE (_obj, ASSOCPERSSUBENTMANAGER, unknown_bl26, BL);
  CHK_ENTITY_TYPE (_obj, ASSOCPERSSUBENTMANAGER, unknown_bl27, BL);
  CHK_ENTITY_TYPE (_obj, ASSOCPERSSUBENTMANAGER, unknown_bl28, BL);
  CHK_ENTITY_TYPE (_obj, ASSOCPERSSUBENTMANAGER, unknown_bl29, BL);
  CHK_ENTITY_TYPE (_obj, ASSOCPERSSUBENTMANAGER, unknown_bl30, BL);
  CHK_ENTITY_TYPE (_obj, ASSOCPERSSUBENTMANAGER, unknown_bl31, BL);
  CHK_ENTITY_TYPE (_obj, ASSOCPERSSUBENTMANAGER, unknown_bl32, BL);
  CHK_ENTITY_TYPE (_obj, ASSOCPERSSUBENTMANAGER, unknown_bl33, BL);
  CHK_ENTITY_TYPE (_obj, ASSOCPERSSUBENTMANAGER, unknown_bl34, BL);
  CHK_ENTITY_TYPE (_obj, ASSOCPERSSUBENTMANAGER, unknown_bl35, BL);
  CHK_ENTITY_TYPE (_obj, ASSOCPERSSUBENTMANAGER, unknown_bl36, BL);
  CHK_ENTITY_TYPE (_obj, ASSOCPERSSUBENTMANAGER, unknown_b37, B);
#endif
}
