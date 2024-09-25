#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NB10I_HEADER.dwSig", dw_sig, 0x0, 0x20, true, 0x4ce124acf00bcda)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NB10I_HEADER.dwOffset", dw_offset, 0x20, 0x20, true, 0x4da6591e52cafb3b)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NB10I_HEADER.sig", sig, 0x40, 0x20, true, 0xace602fc00cbe26)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NB10I_HEADER.age", age, 0x60, 0x20, true, 0x311936bdae380ed1)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif