#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_FSRTL_PER_FILE_CONTEXT.Links", links, 0x0, 0x80, true, 0x3ba2fbf74510fd62)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_FSRTL_PER_FILE_CONTEXT.OwnerId", owner_id, 0x80, 0x40, true, 0x938cc470afbcff36)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_FSRTL_PER_FILE_CONTEXT.InstanceId", instance_id, 0xc0, 0x40, true, 0x61ff72bfdaf6db4a)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_FSRTL_PER_FILE_CONTEXT.FreeCallback", free_callback, 0x100, 0x40, true, 0xea2b247dd7a22123)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif