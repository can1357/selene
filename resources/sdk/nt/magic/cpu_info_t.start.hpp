#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 4>), "_CPU_INFO.AsUINT32", as_uint32, 0x0, 0x80, true, 0x1053d6d7879e1627)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CPU_INFO.Eax", eax, 0x0, 0x20, true, 0xa7d3c3c8b4607b15)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CPU_INFO.Ebx", ebx, 0x20, 0x20, true, 0x14c9e3ac8316a1db)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CPU_INFO.Ecx", ecx, 0x40, 0x20, true, 0x6ff9fe0d948f42a6)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CPU_INFO.Edx", edx, 0x60, 0x20, true, 0x57090801e3adf655)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif