#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DUMP_BLOB_HEADER.HeaderSize", header_size, 0x0, 0x20, true, 0x8ce4543604be238e)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_DUMP_BLOB_HEADER.Tag", tag, 0x20, 0x80, true, 0xd57aece309bdbf8a)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DUMP_BLOB_HEADER.DataSize", data_size, 0xa0, 0x20, true, 0x4f1953f3704cefb5)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DUMP_BLOB_HEADER.PrePad", pre_pad, 0xc0, 0x20, true, 0xc2d55c5af494568e)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DUMP_BLOB_HEADER.PostPad", post_pad, 0xe0, 0x20, true, 0xaa2554353af51160)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif