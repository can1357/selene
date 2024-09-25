#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "tagDATAELEMENT.dataID", data_id, 0x0, 0x80, true, 0x41029502cac936d5)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagDATAELEMENT.cbSize", cb_size, 0x80, 0x20, true, 0x175f1329432bb39c)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagDATAELEMENT.cbRounded", cb_rounded, 0xa0, 0x20, true, 0x7c5741e4ea7e8af1)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 1>), "tagDATAELEMENT.Data", data, 0xc0, 0x8, true, 0xd825399ece00743c)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif