#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PERFINFO_CC_SCHEDULE_READ_AHEAD.WorkItemKey", work_item_key, 0x0, 0x40, true, 0x8e992fac071beb)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PERFINFO_CC_SCHEDULE_READ_AHEAD.FileObjectKey", file_object_key, 0x40, 0x40, true, 0x8f1839abd1bc9149)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PERFINFO_CC_SCHEDULE_READ_AHEAD.FileOffset", file_offset, 0x80, 0x40, true, 0xc423b9bab54041f)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PERFINFO_CC_SCHEDULE_READ_AHEAD.Length", length, 0xc0, 0x20, true, 0x6bea81eefd74562)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PERFINFO_CC_SCHEDULE_READ_AHEAD.ReadAheadUnit", read_ahead_unit, 0xe0, 0x20, true, 0x1ceeecb52300da81)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PERFINFO_CC_SCHEDULE_READ_AHEAD.ReadAheadLength", read_ahead_length, 0x100, 0x20, true, 0xe32c14c8dfeb45ce)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PERFINFO_CC_SCHEDULE_READ_AHEAD.ReadAheadOffset", read_ahead_offset, 0x140, 0x40, true, 0x841780e83dc5ea6f)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PERFINFO_CC_SCHEDULE_READ_AHEAD.ReadAheadBeyondLastByte", read_ahead_beyond_last_byte, 0x180, 0x40, true, 0x9fbc35524b159dec)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PERFINFO_CC_SCHEDULE_READ_AHEAD.ReadPattern", read_pattern, 0x1c0, 0x8, true, 0xbec97b56b891ec67)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PERFINFO_CC_SCHEDULE_READ_AHEAD.SequentialReadCount", sequential_read_count, 0x1e0, 0x20, true, 0xafbc4c50241ebf96)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PERFINFO_CC_SCHEDULE_READ_AHEAD.SharedCacheMapFlags", shared_cache_map_flags, 0x200, 0x20, true, 0xa5514cf17d1f8d0b)
#define _m11 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PERFINFO_CC_SCHEDULE_READ_AHEAD.ReadAheadSettingsChanged", read_ahead_settings_changed, 0x220, 0x1, true, 0x45a1a1118366925c, 1, uint32_t)
#define _m12 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PERFINFO_CC_SCHEDULE_READ_AHEAD.ReadAheadActive", read_ahead_active, 0x221, 0x1, true, 0xf181a0b841c58cd7, 1, uint32_t)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#define _m09
#define _m10
#define _m11
#define _m12
#endif