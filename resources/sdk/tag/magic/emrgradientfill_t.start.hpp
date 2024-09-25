#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct tag::emr_t), "tagEMRGRADIENTFILL.emr", emr, 0x0, 0x40, true, 0x8de8d97f0af58df)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct win::rectl_t), "tagEMRGRADIENTFILL.rclBounds", rcl_bounds, 0x40, 0x80, true, 0xa60264f49aa16aaf)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagEMRGRADIENTFILL.nVer", n_ver, 0xc0, 0x20, true, 0xca0d1913e8674668)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagEMRGRADIENTFILL.nTri", n_tri, 0xe0, 0x20, true, 0xe80668d483d86f75)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagEMRGRADIENTFILL.ulMode", ul_mode, 0x100, 0x20, true, 0xf92369217456d3e6)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<struct win::trivertex_t, 1>), "tagEMRGRADIENTFILL.Ver", ver, 0x120, 0x80, true, 0xb3a65f8a50aa7784)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif