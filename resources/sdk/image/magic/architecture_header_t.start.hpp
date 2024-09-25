#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_ImageArchitectureHeader.AmaskValue", amask_value, 0x0, 0x1, true, 0xe57d5b92ddd8c53d, 1, uint32_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint8_t), "_ImageArchitectureHeader.AmaskShift", amask_shift, 0x8, 0x8, true, 0x92e19c57069206ea, 8, uint32_t)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ImageArchitectureHeader.FirstEntryRVA", first_entry_rva, 0x20, 0x20, true, 0x5263aeb892c8ae53)
#else
#define _m00
#define _m01
#define _m02
#endif