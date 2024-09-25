#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NB10I.dwSig", dw_sig, 0x0, 0x20, true, 0x316ddcfb3ef7075f)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NB10I.dwOffset", dw_offset, 0x20, 0x20, true, 0xa7fb9a420a252fb1)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NB10I.sig", sig, 0x40, 0x20, true, 0xe2bbc42498024b36)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NB10I.age", age, 0x60, 0x20, true, 0x64b69eac6f826d0d)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<char, 260>), "_NB10I.szPdb", sz_pdb, 0x80, 0x20, true, 0xa42437cb0f16a9e)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif