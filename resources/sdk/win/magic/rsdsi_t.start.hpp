#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RSDSI.dwSig", dw_sig, 0x0, 0x20, true, 0xc5a17ecd0d85bae0)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_RSDSI.guidSig", guid_sig, 0x20, 0x80, true, 0x18f5d642036ae7a1)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RSDSI.age", age, 0xa0, 0x20, true, 0x7f7f1f40f7c6a35f)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<char, 780>), "_RSDSI.szPdb", sz_pdb, 0xc0, 0x60, true, 0x32016f179d828d)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif