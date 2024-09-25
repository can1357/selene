#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagSDBMSIFINDINFO.trMatch", tr_match, 0x0, 0x20, true, 0x8fc3177e43c3ac5e)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "tagSDBMSIFINDINFO.guidID", guid_id, 0x20, 0x80, true, 0xc75901b18cf0c0d4)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::find_info_t), "tagSDBMSIFINDINFO.sdbFindInfo", sdb_find_info, 0xc0, 0x40, true, 0x5c0d9999ab4bdff5)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum tag::sdbmsilookupstate_t), "tagSDBMSIFINDINFO.sdbLookupState", sdb_lookup_state, 0x200, 0x20, true, 0x69c9f1d9b9c09e71)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagSDBMSIFINDINFO.dwCustomIndex", dw_custom_index, 0x220, 0x20, true, 0x1c611462910e2f6e)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif