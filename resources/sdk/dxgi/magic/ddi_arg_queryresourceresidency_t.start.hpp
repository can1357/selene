#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "DXGI_DDI_ARG_QUERYRESOURCERESIDENCY.hDevice", h_device, 0x0, 0x40, true, 0xc963fcf51d86706b)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(const uint64_t*), "DXGI_DDI_ARG_QUERYRESOURCERESIDENCY.pResources", p_resources, 0x40, 0x40, true, 0x37b997556ce93dd5)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum dxgi::ddi_residency_t*), "DXGI_DDI_ARG_QUERYRESOURCERESIDENCY.pStatus", p_status, 0x80, 0x40, true, 0x41bd3a14a889202c)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "DXGI_DDI_ARG_QUERYRESOURCERESIDENCY.Resources", resources, 0xc0, 0x40, true, 0xe8c967cdf993d407)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif