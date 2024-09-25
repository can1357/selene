#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "tagMOUSEMOVEPOINT.x", x, 0x0, 0x20, true, 0x1d049f253b92437a)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "tagMOUSEMOVEPOINT.y", y, 0x20, 0x20, true, 0xe25fc170c5ee5b61)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagMOUSEMOVEPOINT.time", time, 0x40, 0x20, true, 0x71bdf5b76d1cb0e8)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "tagMOUSEMOVEPOINT.dwExtraInfo", dw_extra_info, 0x80, 0x40, true, 0xdd3bb7ae91d939c1)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif