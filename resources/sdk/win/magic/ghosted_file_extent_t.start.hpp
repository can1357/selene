#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_GHOSTED_FILE_EXTENT.FileOffset", file_offset, 0x0, 0x40, true, 0xa27e485e2588e5c3)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_GHOSTED_FILE_EXTENT.ByteCount", byte_count, 0x40, 0x40, true, 0x96c1914b99fa5414)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_GHOSTED_FILE_EXTENT.RecallOwnerGuid", recall_owner_guid, 0x80, 0x80, true, 0xa016ef7c8a898c37)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_GHOSTED_FILE_EXTENT.NextEntryOffset", next_entry_offset, 0x100, 0x20, true, 0xaa6cc55225e040de)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_GHOSTED_FILE_EXTENT.RecallMetadataBufferSize", recall_metadata_buffer_size, 0x120, 0x20, true, 0xf7830a158ef97aae)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 1>), "_GHOSTED_FILE_EXTENT.RecallMetadataBuffer", recall_metadata_buffer, 0x140, 0x8, true, 0xf557b1b8c81dadd1)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif