#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ASYNC_DUPLICATE_EXTENTS_STATUS.Version", version, 0x0, 0x0, false, 0xfdfb61ee12b9be8)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum win::duplicate_extents_state_t), "_ASYNC_DUPLICATE_EXTENTS_STATUS.State", state, 0x0, 0x0, false, 0xb3156b230349247e)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_ASYNC_DUPLICATE_EXTENTS_STATUS.SourceFileOffset", source_file_offset, 0x0, 0x0, false, 0xdeca45c27abae3e)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_ASYNC_DUPLICATE_EXTENTS_STATUS.TargetFileOffset", target_file_offset, 0x0, 0x0, false, 0xabf2cb1edc64ec9a)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_ASYNC_DUPLICATE_EXTENTS_STATUS.ByteCount", byte_count, 0x0, 0x0, false, 0x2a51b8286599fef)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_ASYNC_DUPLICATE_EXTENTS_STATUS.BytesDuplicated", bytes_duplicated, 0x0, 0x0, false, 0x4ec8b50d2504ca8e)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif