#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_CSV_QUERY_FILE_REVISION_ECP_CONTEXT.FileId", file_id, 0x0, 0x40, true, 0x5b7fb48a6f98e3d1)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<int64_t, 3>), "_CSV_QUERY_FILE_REVISION_ECP_CONTEXT.FileRevision", file_revision, 0x40, 0xc0, true, 0x5a46cabc364cedc7)
#else
#define _m00
#define _m01
#endif