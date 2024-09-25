#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_D3DKMT_UNREGISTERTRIMNOTIFICATION.Handle", handle, 0x0, 0x40, true, 0xb42cb0f2b2691379)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pfnd3dkmt_trimnotificationcallback_t ), "_D3DKMT_UNREGISTERTRIMNOTIFICATION.Callback", callback, 0x40, 0x40, true, 0xdecf5de7db53a47a)
#else
#define _m00
#define _m01
#endif