#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_NT_HEADERS.Signature", signature, 0x0, 0x20, true, 0x72bdc7803c59d7be)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct image::file_header_t), "_IMAGE_NT_HEADERS.FileHeader", file_header, 0x20, 0xa0, true, 0xe12245ad06f411aa)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct image::optional_header_t), "_IMAGE_NT_HEADERS.OptionalHeader", optional_header, 0xc0, 0x0, true, 0x6c51bae47d717dfd)
#else
#define _m00
#define _m01
#define _m02
#endif