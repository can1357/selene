#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_TAPE_CREATE_PARTITION.Method", method, 0x0, 0x20, true, 0x178a46eaaff736d6)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_TAPE_CREATE_PARTITION.Count", count, 0x20, 0x20, true, 0x8b6c4be558866879)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_TAPE_CREATE_PARTITION.Size", size, 0x40, 0x20, true, 0x4ee50868f8218f26)
#else
#define _m00
#define _m01
#define _m02
#endif