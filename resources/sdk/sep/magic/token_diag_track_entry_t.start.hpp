#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_SEP_TOKEN_DIAG_TRACK_ENTRY.ProcessCid", process_cid, 0x0, 0x40, true, 0x97e3bceca47483c0)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_SEP_TOKEN_DIAG_TRACK_ENTRY.ThreadCid", thread_cid, 0x40, 0x40, true, 0xeed3be85e4266ad9)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 16>), "_SEP_TOKEN_DIAG_TRACK_ENTRY.ImageFileName", image_file_name, 0x80, 0x80, true, 0x730874978483220f)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SEP_TOKEN_DIAG_TRACK_ENTRY.CreateMethod", create_method, 0x100, 0x20, true, 0x553e53b19574213f)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint64_t, 30>), "_SEP_TOKEN_DIAG_TRACK_ENTRY.CreateTrace", create_trace, 0x140, 0x80, true, 0xc130332097fb4d0)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_SEP_TOKEN_DIAG_TRACK_ENTRY.Count", count, 0x8c0, 0x20, true, 0x2d42f9c6e28e5b9c)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_SEP_TOKEN_DIAG_TRACK_ENTRY.CaptureCount", capture_count, 0x8e0, 0x20, true, 0xd2ea67b1e117f88b)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif