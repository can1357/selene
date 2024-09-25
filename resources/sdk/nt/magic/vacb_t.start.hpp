#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_VACB.BaseAddress", base_address, 0x0, 0x40, true, 0x5b5d5480efcccb48)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::shared_cache_map_t*), "_VACB.SharedCacheMap", shared_cache_map, 0x40, 0x40, true, 0x37142a8f7bc43ff5)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_VACB.Overlay.FileOffset", file_offset, 0x0, 0x40, true, 0x91e95e383da285b0)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_VACB.Overlay.ActiveCount", active_count, 0x0, 0x10, true, 0x28dc8f31963bfb40)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_VACB.Overlay.Links", links, 0x0, 0x80, true, 0x693d432d172a56cf)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_overlay_t), "_VACB.Overlay", overlay, 0x80, 0x80, true, 0x3993253dd49cec22)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::vacb_array_header_t*), "_VACB.ArrayHead", array_head, 0x100, 0x40, true, 0xcc8f19478063d69)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif