#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t*), "_KSSTREAM_POINTER_OFFSET.Data", data, 0x0, 0x0, false, 0x273eba653bc7eed3)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::ksmapping_t*), "_KSSTREAM_POINTER_OFFSET.Mappings", mappings, 0x0, 0x0, false, 0xb9a138e6c501fea5)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KSSTREAM_POINTER_OFFSET.Count", count, 0x0, 0x0, false, 0x5ba55729e8f952f8)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KSSTREAM_POINTER_OFFSET.Remaining", remaining, 0x0, 0x0, false, 0x41da3c3dbec3a3e6)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif