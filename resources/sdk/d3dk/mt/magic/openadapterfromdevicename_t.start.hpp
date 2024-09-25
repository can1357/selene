#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(wchar_t*), "_D3DKMT_OPENADAPTERFROMDEVICENAME.DeviceName", device_name, 0x0, 0x40, true, 0xa2ad43f3fcfa950d)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_OPENADAPTERFROMDEVICENAME.AdapterHandle", adapter_handle, 0x40, 0x20, true, 0xb5c4156257d0e442)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::luid_t), "_D3DKMT_OPENADAPTERFROMDEVICENAME.AdapterLuid", adapter_luid, 0x60, 0x40, true, 0x7589cc93531cf5b6)
#else
#define _m00
#define _m01
#define _m02
#endif