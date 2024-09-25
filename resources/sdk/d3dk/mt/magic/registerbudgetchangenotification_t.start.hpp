#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_REGISTERBUDGETCHANGENOTIFICATION.hDevice", h_device, 0x0, 0x20, true, 0xfb757431d8e1e236)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pfnd3dkmt_budgetchangenotificationcallback_t ), "_D3DKMT_REGISTERBUDGETCHANGENOTIFICATION.Callback", callback, 0x40, 0x40, true, 0xcd33e58d12a8fc6b)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_D3DKMT_REGISTERBUDGETCHANGENOTIFICATION.Context", context, 0x80, 0x40, true, 0x2bcaa8881c65c6b)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_D3DKMT_REGISTERBUDGETCHANGENOTIFICATION.Handle", handle, 0xc0, 0x40, true, 0x6c6a43228afd5a1a)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif