#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "DXGI_DDI_ARG_SETDISPLAYMODE.hDevice", h_device, 0x0, 0x40, true, 0xe5f1f655d895f144)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "DXGI_DDI_ARG_SETDISPLAYMODE.hResource", h_resource, 0x40, 0x40, true, 0x991006df5bc4a935)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "DXGI_DDI_ARG_SETDISPLAYMODE.SubResourceIndex", sub_resource_index, 0x80, 0x20, true, 0x7ed0c3ff15dc97c3)
#else
#define _m00
#define _m01
#define _m02
#endif