#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SQM_STREAM_ENTRY.dwType", dw_type, 0x0, 0x20, true, 0xa20e770943ae443c)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const wchar_t*), "_SQM_STREAM_ENTRY.val.pwszVal", pwsz_val, 0x0, 0x40, true, 0xf9eae93005a6f331)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SQM_STREAM_ENTRY.val.dwVal", dw_val, 0x0, 0x20, true, 0xda5040bc6a4e5992)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_val_t), "_SQM_STREAM_ENTRY.val", val, 0x40, 0x40, true, 0x8151fa5594fd2117)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif