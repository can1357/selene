#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_DXGI_DDI_ARG_OFFERRESOURCES.hDevice", h_device, 0x0, 0x40, true, 0xf516208e3a5f1fe)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(const uint64_t*), "_DXGI_DDI_ARG_OFFERRESOURCES.pResources", p_resources, 0x40, 0x40, true, 0xc4d628da9253da49)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGI_DDI_ARG_OFFERRESOURCES.Resources", resources, 0x80, 0x20, true, 0xbc07c88c58ad3cc9)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum d3d::ddi::offer_priority_t), "_DXGI_DDI_ARG_OFFERRESOURCES.Priority", priority, 0xa0, 0x20, true, 0x5d83c5c4dbf7c34b)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif