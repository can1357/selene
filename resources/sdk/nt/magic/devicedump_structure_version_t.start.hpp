#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DEVICEDUMP_STRUCTURE_VERSION.dwSignature", dw_signature, 0x0, 0x20, true, 0x3b81f2dc35169dfc)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DEVICEDUMP_STRUCTURE_VERSION.dwVersion", dw_version, 0x20, 0x20, true, 0x1055afb18b7fd33)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DEVICEDUMP_STRUCTURE_VERSION.dwSize", dw_size, 0x40, 0x20, true, 0x3f554843dbf925b6)
#else
#define _m00
#define _m01
#define _m02
#endif