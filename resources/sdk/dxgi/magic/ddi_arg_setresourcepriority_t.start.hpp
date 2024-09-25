#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "DXGI_DDI_ARG_SETRESOURCEPRIORITY.hDevice", h_device, 0x0, 0x40, true, 0x3188d1f07a3ef4ab)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "DXGI_DDI_ARG_SETRESOURCEPRIORITY.hResource", h_resource, 0x40, 0x40, true, 0xe0ef4f2fda53d351)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "DXGI_DDI_ARG_SETRESOURCEPRIORITY.Priority", priority, 0x80, 0x20, true, 0x37fec6e212a62ae4)
#else
#define _m00
#define _m01
#define _m02
#endif