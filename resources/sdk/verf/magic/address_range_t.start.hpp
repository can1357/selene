#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t*), "_VF_ADDRESS_RANGE.Start", start, 0x0, 0x40, true, 0xd95b573de1c772dd)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t*), "_VF_ADDRESS_RANGE.End", end, 0x40, 0x40, true, 0x21ec399c94af410e)
#else
#define _m00
#define _m01
#endif