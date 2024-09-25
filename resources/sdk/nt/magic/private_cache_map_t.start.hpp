#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int16_t), "_PRIVATE_CACHE_MAP.NodeTypeCode", node_type_code, 0x0, 0x10, true, 0xe0bf5b104a0483ba)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::private_cache_map_flags_t), "_PRIVATE_CACHE_MAP.Flags", flags, 0x0, 0x20, true, 0x2f1f76a8ac67f456)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PRIVATE_CACHE_MAP.ReadAheadMask", read_ahead_mask, 0x20, 0x20, true, 0x9f801b510f297fbd)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::file_object_t*), "_PRIVATE_CACHE_MAP.FileObject", file_object, 0x40, 0x40, true, 0xc9f39e2587058f93)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_PRIVATE_CACHE_MAP.FileOffset1", file_offset1, 0x80, 0x40, true, 0x4682c32f1e4e22fe)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_PRIVATE_CACHE_MAP.BeyondLastByte1", beyond_last_byte1, 0xc0, 0x40, true, 0xb039a0c3cf18c94a)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_PRIVATE_CACHE_MAP.FileOffset2", file_offset2, 0x100, 0x40, true, 0x6485355d1cf417ca)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_PRIVATE_CACHE_MAP.BeyondLastByte2", beyond_last_byte2, 0x140, 0x40, true, 0xea7bc4e52005ad63)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PRIVATE_CACHE_MAP.SequentialReadCount", sequential_read_count, 0x180, 0x20, true, 0x59155f26218a9700)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PRIVATE_CACHE_MAP.ReadAheadLength", read_ahead_length, 0x1a0, 0x20, true, 0xf2be937010d2c448)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_PRIVATE_CACHE_MAP.ReadAheadOffset", read_ahead_offset, 0x1c0, 0x40, true, 0x3e7b8a9202fd7d00)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_PRIVATE_CACHE_MAP.ReadAheadBeyondLastByte", read_ahead_beyond_last_byte, 0x200, 0x40, true, 0xf53e106656dc186d)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PRIVATE_CACHE_MAP.PrevReadAheadBeyondLastByte", prev_read_ahead_beyond_last_byte, 0x240, 0x40, true, 0x6ae2d9ab2167735d)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PRIVATE_CACHE_MAP.ReadAheadSpinLock", read_ahead_spin_lock, 0x280, 0x40, true, 0xe515d02044809f7b)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PRIVATE_CACHE_MAP.PipelinedReadAheadRequestSize", pipelined_read_ahead_request_size, 0x2c0, 0x20, true, 0x2433028ccd924219)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PRIVATE_CACHE_MAP.ReadAheadGrowth", read_ahead_growth, 0x2e0, 0x20, true, 0x2f386e6ce38fffab)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_PRIVATE_CACHE_MAP.PrivateLinks", private_links, 0x300, 0x80, true, 0x19cab53d4d514939)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_PRIVATE_CACHE_MAP.ReadAheadWorkItem", read_ahead_work_item, 0x380, 0x40, true, 0xe279d4c1cb2b3f9d)
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
#define _m13
#define _m14
#define _m15
#define _m16
#define _m17
#endif