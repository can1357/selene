#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_REFS_STREAM_SNAPSHOT_LIST_OUTPUT_BUFFER_ENTRY.NextEntryOffset", next_entry_offset, 0x0, 0x0, false, 0x6e3eaf0cca9ded96)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_REFS_STREAM_SNAPSHOT_LIST_OUTPUT_BUFFER_ENTRY.SnapshotNameLength", snapshot_name_length, 0x0, 0x0, false, 0x284b667af4c2576a)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_REFS_STREAM_SNAPSHOT_LIST_OUTPUT_BUFFER_ENTRY.SnapshotCreationTime", snapshot_creation_time, 0x0, 0x0, false, 0xd93cd519c6e0f15)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_REFS_STREAM_SNAPSHOT_LIST_OUTPUT_BUFFER_ENTRY.StreamSize", stream_size, 0x0, 0x0, false, 0xfa4861ae18351f42)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_REFS_STREAM_SNAPSHOT_LIST_OUTPUT_BUFFER_ENTRY.StreamAllocationSize", stream_allocation_size, 0x0, 0x0, false, 0x1e455f7bfd288a31)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 1>), "_REFS_STREAM_SNAPSHOT_LIST_OUTPUT_BUFFER_ENTRY.SnapshotName", snapshot_name, 0x0, 0x0, false, 0xd9cd7b210e55f25)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif