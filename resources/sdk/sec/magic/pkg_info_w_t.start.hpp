#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SecPkgInfoW.fCapabilities", f_capabilities, 0x0, 0x20, true, 0xb78ed76d5cde1efd)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_SecPkgInfoW.wVersion", w_version, 0x20, 0x10, true, 0xd3a21b523e8e8b09)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_SecPkgInfoW.wRPCID", w_rpcid, 0x30, 0x10, true, 0x444247c939a3d0e5)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SecPkgInfoW.cbMaxToken", cb_max_token, 0x40, 0x20, true, 0xe95e5e7ebdb65c70)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(wchar_t*), "_SecPkgInfoW.Name", name, 0x80, 0x40, true, 0x40bccbabf714a7b6)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(wchar_t*), "_SecPkgInfoW.Comment", comment, 0xc0, 0x40, true, 0x895b8a310060599)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif