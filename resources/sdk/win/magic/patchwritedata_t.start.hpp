#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PATCHWRITEDATA.dwSizeData", dw_size_data, 0x0, 0x20, true, 0x7643e8479b0a8195)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::relative_module_address_t), "_PATCHWRITEDATA.rva", rva, 0x20, 0x40, true, 0xfb735941c91960a7)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t>), "_PATCHWRITEDATA.data", data, 0x260, 0x0, true, 0xe2211e14b893d883)
#else
#define _m00
#define _m01
#define _m02
#endif