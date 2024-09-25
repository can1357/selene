#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PROCESS_SYSTEM_RESOURCE_MANAGEMENT.Flags", flags, 0x0, 0x20, true, 0xffad52e67f1a88b8)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PROCESS_SYSTEM_RESOURCE_MANAGEMENT.Foreground", foreground, 0x0, 0x1, true, 0x9294f7175146c5a, 1, uint32_t)
#else
#define _m00
#define _m01
#endif