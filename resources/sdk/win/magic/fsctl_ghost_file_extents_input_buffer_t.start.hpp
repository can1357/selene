#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_FSCTL_GHOST_FILE_EXTENTS_INPUT_BUFFER.FileOffset", file_offset, 0x0, 0x40, true, 0xa4b6e52d589040b4)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_FSCTL_GHOST_FILE_EXTENTS_INPUT_BUFFER.ByteCount", byte_count, 0x40, 0x40, true, 0xba116d52e03565c3)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_FSCTL_GHOST_FILE_EXTENTS_INPUT_BUFFER.RecallOwnerGuid", recall_owner_guid, 0x80, 0x80, true, 0x6890c4db17b88d3d)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FSCTL_GHOST_FILE_EXTENTS_INPUT_BUFFER.RecallMetadataBufferSize", recall_metadata_buffer_size, 0x100, 0x20, true, 0x4d86ea9936bb39d6)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 1>), "_FSCTL_GHOST_FILE_EXTENTS_INPUT_BUFFER.RecallMetadataBuffer", recall_metadata_buffer, 0x120, 0x8, true, 0xc8dd44fa1cf6674e)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif