#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_REFS_STREAM_EXTENT.Vcn", vcn, 0x0, 0x0, false, 0xa4b8cbf9023f3244)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_REFS_STREAM_EXTENT.Lcn", lcn, 0x0, 0x0, false, 0x1afcf3bbca33252c)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_REFS_STREAM_EXTENT.Length", length, 0x0, 0x0, false, 0x40f0ace4827f8bc9)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_REFS_STREAM_EXTENT.Properties", properties, 0x0, 0x0, false, 0x4f7a8a7e75331a10)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif