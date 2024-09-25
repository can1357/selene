#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "DXGI_DDI_ARG_RESOLVESHAREDRESOURCE.hDevice", h_device, 0x0, 0x40, true, 0x98c5a289f0de3d1b)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "DXGI_DDI_ARG_RESOLVESHAREDRESOURCE.hResource", h_resource, 0x40, 0x40, true, 0x659a670fc4040796)
#else
#define _m00
#define _m01
#endif