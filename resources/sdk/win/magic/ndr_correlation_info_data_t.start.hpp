#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t*), "_NDR_CORRELATION_INFO_DATA.pMemoryObject", p_memory_object, 0x0, 0x40, true, 0xa331cb27230ca72d)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const uint8_t*), "_NDR_CORRELATION_INFO_DATA.pCorrDesc", p_corr_desc, 0x40, 0x40, true, 0x620989e6b44f4ca)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_NDR_CORRELATION_INFO_DATA.Value", value, 0x80, 0x40, true, 0x7585293a50d1e0ee)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_NDR_CORRELATION_INFO_DATA.CheckKind", check_kind, 0xc0, 0x20, true, 0x8d1f19539279cec2)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_NDR_CORRELATION_INFO_DATA.Reserve64", reserve64, 0xe0, 0x20, true, 0x4757c168110946f2)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif