#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint12_t), "_IMAGE_IMPORT_CONTROL_TRANSFER_DYNAMIC_RELOCATION.PageRelativeOffset", page_relative_offset, 0x0, 0xc, true, 0x35e9f48bc14b20a8, 12, uint32_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_IMAGE_IMPORT_CONTROL_TRANSFER_DYNAMIC_RELOCATION.IndirectCall", indirect_call, 0xc, 0x1, true, 0x11010dd685ecc7da, 1, uint32_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint19_t), "_IMAGE_IMPORT_CONTROL_TRANSFER_DYNAMIC_RELOCATION.IATIndex", iat_index, 0xd, 0x13, true, 0x4cf26645bf7d0ffc, 19, uint32_t)
#else
#define _m00
#define _m01
#define _m02
#endif