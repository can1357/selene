#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "DXGI_DDI_ARG_ROTATE_RESOURCE_IDENTITIES.hDevice", h_device, 0x0, 0x40, true, 0xd2b23e81d07cdf7e)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(const uint64_t*), "DXGI_DDI_ARG_ROTATE_RESOURCE_IDENTITIES.pResources", p_resources, 0x40, 0x40, true, 0x868c0ff8aa35a6de)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "DXGI_DDI_ARG_ROTATE_RESOURCE_IDENTITIES.Resources", resources, 0x80, 0x20, true, 0x47fa6223526b635c)
#else
#define _m00
#define _m01
#define _m02
#endif