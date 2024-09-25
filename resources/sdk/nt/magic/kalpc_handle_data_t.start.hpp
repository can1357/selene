#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KALPC_HANDLE_DATA.ObjectType", object_type, 0x0, 0x20, true, 0x875d13b7cad2771b)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KALPC_HANDLE_DATA.Count", count, 0x20, 0x20, true, 0xacd203b6cc6745e7)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ob::duplicate_object_state_t), "_KALPC_HANDLE_DATA.DuplicateContext", duplicate_context, 0x40, 0x40, true, 0x7cdc687e9e6c9d0e)
#else
#define _m00
#define _m01
#define _m02
#endif