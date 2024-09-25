#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_REQUEST_RAW_ENCRYPTED_DATA.FileOffset", file_offset, 0x0, 0x40, true, 0xa8f6232019f1b03f)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_REQUEST_RAW_ENCRYPTED_DATA.Length", length, 0x40, 0x20, true, 0xab364a95e3de628)
#else
#define _m00
#define _m01
#endif