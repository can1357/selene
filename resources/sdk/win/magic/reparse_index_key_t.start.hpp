#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_REPARSE_INDEX_KEY.FileReparseTag", file_reparse_tag, 0x0, 0x20, true, 0x76352b0080c7e26d)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_REPARSE_INDEX_KEY.FileId", file_id, 0x20, 0x40, true, 0x482819f6796bdfea)
#else
#define _m00
#define _m01
#endif