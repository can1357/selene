#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_PS_CPU_QUOTA_SET_INFORMATION.SessionHandle", session_handle, 0x0, 0x40, true, 0x5607497c9fa97a53)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PS_CPU_QUOTA_SET_INFORMATION.Weight", weight, 0x40, 0x20, true, 0xd32ca13520cfb770)
#else
#define _m00
#define _m01
#endif