#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "tagSDBENTRYINFO.guidID", guid_id, 0x0, 0x80, true, 0xde8b9a43f43f3a28)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagSDBENTRYINFO.dwFlags", dw_flags, 0x80, 0x20, true, 0xd5674c5f72bd596f)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagSDBENTRYINFO.tiData", ti_data, 0xa0, 0x20, true, 0xdd6b86c585018a24)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "tagSDBENTRYINFO.guidDB", guid_db, 0xc0, 0x80, true, 0x5e0a6799db9482b6)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif