#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_QUERYDPCAPS.NumRootPorts", num_root_ports, 0x0, 0x20, true, 0x51977541090c9fc6)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXGKARG_QUERYDPCAPS.DPVersionMajor", dp_version_major, 0x20, 0x8, true, 0x2e7c788e48f285f0)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXGKARG_QUERYDPCAPS.DPVersionMinor", dp_version_minor, 0x28, 0x8, true, 0x7f95c73a36bbb1fc)
#else
#define _m00
#define _m01
#define _m02
#endif