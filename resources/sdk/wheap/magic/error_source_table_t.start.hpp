#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEAP_ERROR_SOURCE_TABLE.Signature", signature, 0x0, 0x20, true, 0x56897d73b31a021e)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_WHEAP_ERROR_SOURCE_TABLE.Count", count, 0x20, 0x20, true, 0xcc4e319801d6d677)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_WHEAP_ERROR_SOURCE_TABLE.Items", items, 0x80, 0x80, true, 0x62527c197bd4b2d)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kevent_t), "_WHEAP_ERROR_SOURCE_TABLE.InsertLock", insert_lock, 0x100, 0xc0, true, 0xfb57c2b10d56dd5c)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEAP_ERROR_SOURCE_TABLE.NextId", next_id, 0x40, 0x20, true, 0xc19f21496badfaa7)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif