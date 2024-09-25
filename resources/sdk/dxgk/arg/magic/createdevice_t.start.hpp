#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_DXGKARG_CREATEDEVICE.hDevice", h_device, 0x0, 0x40, true, 0x73e197475bb90f22)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxgk::createdeviceflags_t), "_DXGKARG_CREATEDEVICE.Flags", flags, 0x40, 0x20, true, 0xb2bf9deee471c364)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxgk::deviceinfo_t*), "_DXGKARG_CREATEDEVICE.pInfo", p_info, 0x40, 0x40, true, 0xefc807a4c04a1196)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_CREATEDEVICE.Pasid", pasid, 0x80, 0x20, true, 0xfdfccc6f2bfe0802)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_DXGKARG_CREATEDEVICE.hKmdProcess", h_kmd_process, 0xc0, 0x40, true, 0x6d23a53c6525a15a)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif