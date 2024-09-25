#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_CONFIGURESHAREDRESOURCE.hDevice", h_device, 0x0, 0x20, true, 0x25f859fc998f4144)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_CONFIGURESHAREDRESOURCE.hResource", h_resource, 0x20, 0x20, true, 0x6010d3e42a419ddb)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_D3DKMT_CONFIGURESHAREDRESOURCE.IsDwm", is_dwm, 0x40, 0x8, true, 0x5bdc85388eb8ef24)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_D3DKMT_CONFIGURESHAREDRESOURCE.hProcess", h_process, 0x80, 0x40, true, 0xe6bb49a18394f5e9)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_D3DKMT_CONFIGURESHAREDRESOURCE.AllowAccess", allow_access, 0xc0, 0x8, true, 0x4c9e90702ada161f)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif