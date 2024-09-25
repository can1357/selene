#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_FSRTL_PER_STREAM_CONTEXT.Links", links, 0x0, 0x80, true, 0x513a8d8221fa1af4)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_FSRTL_PER_STREAM_CONTEXT.OwnerId", owner_id, 0x80, 0x40, true, 0xe3b4a53bc84bda4f)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_FSRTL_PER_STREAM_CONTEXT.InstanceId", instance_id, 0xc0, 0x40, true, 0x90cb069fe6cf2da7)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_FSRTL_PER_STREAM_CONTEXT.FreeCallback", free_callback, 0x100, 0x40, true, 0x5473109188fa5f6f)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif