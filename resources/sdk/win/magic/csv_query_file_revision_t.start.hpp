#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_CSV_QUERY_FILE_REVISION.FileId", file_id, 0x0, 0x40, true, 0x45c5e7dd9e13d2de)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<int64_t, 3>), "_CSV_QUERY_FILE_REVISION.FileRevision", file_revision, 0x40, 0xc0, true, 0xc6594dcabe8d55)
#else
#define _m00
#define _m01
#endif