#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::usn_record_common_header_t), "USN_RECORD_UNION.Header", header, 0x0, 0x40, true, 0xfc9a0bfb95e8f126)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::usn_record_v2_t), "USN_RECORD_UNION.V2", v2, 0x0, 0x0, true, 0x4c742206f024e772)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::usn_record_v3_t), "USN_RECORD_UNION.V3", v3, 0x0, 0x80, true, 0xf9eaf144aca43249)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::usn_record_v4_t), "USN_RECORD_UNION.V4", v4, 0x0, 0x80, true, 0xff01d79db94c5a2c)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif