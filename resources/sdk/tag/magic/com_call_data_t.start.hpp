#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagComCallData.dwDispid", dw_dispid, 0x0, 0x20, true, 0x4af657bb60c5bf1a)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagComCallData.dwReserved", dw_reserved, 0x20, 0x20, true, 0xd0488a73f24fb9d7)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "tagComCallData.pUserDefined", p_user_defined, 0x40, 0x40, true, 0x31025a3df9f7b25)
#else
#define _m00
#define _m01
#define _m02
#endif