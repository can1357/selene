#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PATCHMATCHDATA.dwSizeData", dw_size_data, 0x0, 0x20, true, 0x74e1398498b8f3f5)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::relative_module_address_t), "_PATCHMATCHDATA.rva", rva, 0x20, 0x40, true, 0xd7a8456fe75c3cd7)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t>), "_PATCHMATCHDATA.data", data, 0x260, 0x0, true, 0x3cc0b559634e834a)
#else
#define _m00
#define _m01
#define _m02
#endif