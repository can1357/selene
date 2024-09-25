#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_FSRTL_PER_FILEOBJECT_CONTEXT.Links", links, 0x0, 0x80, true, 0x45f49ddbec31ebdb)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_FSRTL_PER_FILEOBJECT_CONTEXT.OwnerId", owner_id, 0x80, 0x40, true, 0xe28d669e647444ac)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_FSRTL_PER_FILEOBJECT_CONTEXT.InstanceId", instance_id, 0xc0, 0x40, true, 0x42c6a21ddadf244)
#else
#define _m00
#define _m01
#define _m02
#endif