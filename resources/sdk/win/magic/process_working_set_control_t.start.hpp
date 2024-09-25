#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PROCESS_WORKING_SET_CONTROL.Version", version, 0x0, 0x20, true, 0xcfbc793ab66b21)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum win::process_working_set_operation_t), "_PROCESS_WORKING_SET_CONTROL.Operation", operation, 0x20, 0x20, true, 0x7820f283ec06fb4e)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PROCESS_WORKING_SET_CONTROL.Flags", flags, 0x40, 0x20, true, 0x8031db8b6bc8cd9d)
#else
#define _m00
#define _m01
#define _m02
#endif