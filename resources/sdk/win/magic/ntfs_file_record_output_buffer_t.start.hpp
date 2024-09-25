#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "NTFS_FILE_RECORD_OUTPUT_BUFFER.FileReferenceNumber", file_reference_number, 0x0, 0x40, true, 0x7b20bcf743cde5de)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "NTFS_FILE_RECORD_OUTPUT_BUFFER.FileRecordLength", file_record_length, 0x40, 0x20, true, 0x9dbe19dd1428b82)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 1>), "NTFS_FILE_RECORD_OUTPUT_BUFFER.FileRecordBuffer", file_record_buffer, 0x60, 0x8, true, 0x67a0a98ddb58ae43)
#else
#define _m00
#define _m01
#define _m02
#endif