#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_D3DKMT_GETPROCESSDEVICEREMOVALSUPPORT.hProcess", h_process, 0x0, 0x40, true, 0xd04dae8eda2fa952)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::luid_t), "_D3DKMT_GETPROCESSDEVICEREMOVALSUPPORT.AdapterLuid", adapter_luid, 0x40, 0x40, true, 0xdd099c402e771dcd)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_D3DKMT_GETPROCESSDEVICEREMOVALSUPPORT.Support", support, 0x80, 0x8, true, 0x283e341871f9693c)
#else
#define _m00
#define _m01
#define _m02
#endif