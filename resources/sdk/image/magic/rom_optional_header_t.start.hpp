#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_IMAGE_ROM_OPTIONAL_HEADER.Magic", magic, 0x0, 0x10, true, 0x9d1d0a8fc89cbc6e)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_IMAGE_ROM_OPTIONAL_HEADER.MajorLinkerVersion", major_linker_version, 0x10, 0x8, true, 0x4b0905cdd5f1963b)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_IMAGE_ROM_OPTIONAL_HEADER.MinorLinkerVersion", minor_linker_version, 0x18, 0x8, true, 0xb30753bec331996f)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_ROM_OPTIONAL_HEADER.SizeOfCode", size_of_code, 0x20, 0x20, true, 0x5e508962551e0f61)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_ROM_OPTIONAL_HEADER.SizeOfInitializedData", size_of_initialized_data, 0x40, 0x20, true, 0xb096e25ce20a3adc)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_ROM_OPTIONAL_HEADER.SizeOfUninitializedData", size_of_uninitialized_data, 0x60, 0x20, true, 0x16a4df7165b78e2f)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_ROM_OPTIONAL_HEADER.AddressOfEntryPoint", address_of_entry_point, 0x80, 0x20, true, 0xb882d45b8e970f37)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_ROM_OPTIONAL_HEADER.BaseOfCode", base_of_code, 0xa0, 0x20, true, 0x635a5caa44b5bb29)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_ROM_OPTIONAL_HEADER.BaseOfData", base_of_data, 0xc0, 0x20, true, 0x7da4dc5f4ea5ea5a)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_ROM_OPTIONAL_HEADER.BaseOfBss", base_of_bss, 0xe0, 0x20, true, 0xbb0a5e5a6f7306be)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_ROM_OPTIONAL_HEADER.GprMask", gpr_mask, 0x100, 0x20, true, 0x63035cc73a73a7fd)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 4>), "_IMAGE_ROM_OPTIONAL_HEADER.CprMask", cpr_mask, 0x120, 0x80, true, 0x17a463fa2c0b3d56)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_ROM_OPTIONAL_HEADER.GpValue", gp_value, 0x1a0, 0x20, true, 0x5813efd7345130f1)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#define _m09
#define _m10
#define _m11
#define _m12
#endif