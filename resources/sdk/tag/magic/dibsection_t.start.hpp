#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct tag::bitmap_t), "tagDIBSECTION.dsBm", ds_bm, 0x0, 0x0, true, 0xffd6457d08e6a99d)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct tag::bitmapinfoheader_t), "tagDIBSECTION.dsBmih", ds_bmih, 0x100, 0x40, true, 0xd736cdfe3cf470be)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 3>), "tagDIBSECTION.dsBitfields", ds_bitfields, 0x240, 0x60, true, 0x8d6f7056d91a65a9)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "tagDIBSECTION.dshSection", dsh_section, 0x2c0, 0x40, true, 0xcf8c6d29798c7c57)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagDIBSECTION.dsOffset", ds_offset, 0x300, 0x20, true, 0x66ebe0341c566540)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif