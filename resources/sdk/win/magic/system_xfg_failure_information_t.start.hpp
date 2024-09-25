#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_SYSTEM_XFG_FAILURE_INFORMATION.ReturnAddress", return_address, 0x0, 0x0, false, 0x24ed5d2d166d731f)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_SYSTEM_XFG_FAILURE_INFORMATION.TargetAddress", target_address, 0x0, 0x0, false, 0xc4c3e32405c30edd)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_XFG_FAILURE_INFORMATION.DispatchMode", dispatch_mode, 0x0, 0x0, false, 0xe599efb4ec64198e)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_SYSTEM_XFG_FAILURE_INFORMATION.XfgValue", xfg_value, 0x0, 0x0, false, 0xd1702f114d757331)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif