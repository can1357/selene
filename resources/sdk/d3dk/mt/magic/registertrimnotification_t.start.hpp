#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::luid_t), "_D3DKMT_REGISTERTRIMNOTIFICATION.AdapterLuid", adapter_luid, 0x0, 0x40, true, 0x7461531a25eefe35)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_REGISTERTRIMNOTIFICATION.hDevice", h_device, 0x40, 0x20, true, 0x9196619b771df768)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pfnd3dkmt_trimnotificationcallback_t ), "_D3DKMT_REGISTERTRIMNOTIFICATION.Callback", callback, 0x80, 0x40, true, 0x9c3b58438f928ee8)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_D3DKMT_REGISTERTRIMNOTIFICATION.Context", context, 0xc0, 0x40, true, 0xcc1daa67f141d608)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_D3DKMT_REGISTERTRIMNOTIFICATION.Handle", handle, 0x100, 0x40, true, 0x2c51d4352686376b)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif