#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_OB_PRE_CREATE_HANDLE_INFORMATION.DesiredAccess", desired_access, 0x0, 0x20, true, 0x3ba0f267ce8a8531)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_OB_PRE_CREATE_HANDLE_INFORMATION.OriginalDesiredAccess", original_desired_access, 0x20, 0x20, true, 0xb80ea51c07531a94)
#else
#define _m00
#define _m01
#endif