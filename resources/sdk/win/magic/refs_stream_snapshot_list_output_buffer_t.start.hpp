#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_REFS_STREAM_SNAPSHOT_LIST_OUTPUT_BUFFER.EntryCount", entry_count, 0x0, 0x0, false, 0x540961e207af05cf)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_REFS_STREAM_SNAPSHOT_LIST_OUTPUT_BUFFER.BufferSizeRequiredForQuery", buffer_size_required_for_query, 0x0, 0x0, false, 0xe1a599bb550df2c7)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct win::refs_stream_snapshot_list_output_buffer_entry_t, 1>), "_REFS_STREAM_SNAPSHOT_LIST_OUTPUT_BUFFER.Entries", entries, 0x0, 0x0, false, 0xf4ba2f8e6348dcce)
#else
#define _m00
#define _m01
#define _m02
#endif