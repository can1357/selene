#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SET_PARTITION_ATTRIBUTES.Version", version, 0x0, 0x20, true, 0xf62c0450b3b02e17)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_SET_PARTITION_ATTRIBUTES.Persist", persist, 0x20, 0x8, true, 0xbf779e0b6a2e4762)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_SET_PARTITION_ATTRIBUTES.Attributes", attributes, 0x40, 0x40, true, 0xe7536e53b1d1d075)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_SET_PARTITION_ATTRIBUTES.AttributesMask", attributes_mask, 0x80, 0x40, true, 0x49edfe7c0cc74dc7)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif