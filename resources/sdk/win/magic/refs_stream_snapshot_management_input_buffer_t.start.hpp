#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum nt::refs_stream_snapshot_operation_t), "_REFS_STREAM_SNAPSHOT_MANAGEMENT_INPUT_BUFFER.Operation", operation, 0x0, 0x0, false, 0x34096b5f776af74b)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_REFS_STREAM_SNAPSHOT_MANAGEMENT_INPUT_BUFFER.SnapshotNameLength", snapshot_name_length, 0x0, 0x0, false, 0x1fc7ecea6d45e2c0)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_REFS_STREAM_SNAPSHOT_MANAGEMENT_INPUT_BUFFER.OperationInputBufferLength", operation_input_buffer_length, 0x0, 0x0, false, 0xfb1e09a43906318)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint16_t, 1>), "_REFS_STREAM_SNAPSHOT_MANAGEMENT_INPUT_BUFFER.NameAndInputBuffer", name_and_input_buffer, 0x0, 0x0, false, 0x58d1a4dbf1fae051)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif