#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct win::file_id_128_t), "_CSV_QUERY_FILE_REVISION_FILE_ID_128.FileId", file_id, 0x0, 0x80, true, 0x3b3c234e1990d4a8)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<int64_t, 3>), "_CSV_QUERY_FILE_REVISION_FILE_ID_128.FileRevision", file_revision, 0x80, 0xc0, true, 0x29d28ed486764937)
#else
#define _m00
#define _m01
#endif