#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "tagACCEL.fVirt", f_virt, 0x0, 0x8, true, 0xd27ec85c3721186f)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "tagACCEL.key", key, 0x10, 0x10, true, 0x15b08bf85502d600)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "tagACCEL.cmd", cmd, 0x20, 0x10, true, 0xec01c93ed9b67c36)
#else
#define _m00
#define _m01
#define _m02
#endif