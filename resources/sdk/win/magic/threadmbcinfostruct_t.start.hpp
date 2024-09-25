#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "threadmbcinfostruct.refcount", refcount, 0x0, 0x20, true, 0x595857fc70764312)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "threadmbcinfostruct.mbcodepage", mbcodepage, 0x20, 0x20, true, 0xdb0676f94a19fa9)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "threadmbcinfostruct.ismbcodepage", ismbcodepage, 0x40, 0x20, true, 0xc7cafa9cadf9a6db)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "threadmbcinfostruct.mblcid", mblcid, 0x60, 0x20, true, 0x3027e916a03e06f1)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint16_t, 6>), "threadmbcinfostruct.mbulinfo", mbulinfo, 0x80, 0x60, true, 0x22eae0e349a104a3)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 257>), "threadmbcinfostruct.mbctype", mbctype, 0xe0, 0x8, true, 0xa76610009b6237f5)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 256>), "threadmbcinfostruct.mbcasemap", mbcasemap, 0x8e8, 0x0, true, 0x25300ecc5436bef8)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif