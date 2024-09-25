#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_NT_HEADERS64.Signature", signature, 0x0, 0x20, true, 0x2c908006091489bb)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct image::file_header_t), "_IMAGE_NT_HEADERS64.FileHeader", file_header, 0x20, 0xa0, true, 0xdd263d4449ad048b)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct image::optional_header64_t), "_IMAGE_NT_HEADERS64.OptionalHeader", optional_header, 0xc0, 0x80, true, 0xc3524192e559a9b1)
#else
#define _m00
#define _m01
#define _m02
#endif