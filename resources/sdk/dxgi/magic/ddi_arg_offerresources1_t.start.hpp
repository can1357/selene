#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_DXGI_DDI_ARG_OFFERRESOURCES1.hDevice", h_device, 0x0, 0x40, true, 0xd26e73d3c57cc184)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(const uint64_t*), "_DXGI_DDI_ARG_OFFERRESOURCES1.pResources", p_resources, 0x40, 0x40, true, 0x74a34ec138b3b5ed)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGI_DDI_ARG_OFFERRESOURCES1.Resources", resources, 0x80, 0x20, true, 0xa51773f392431918)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum d3d::ddi::offer_priority_t), "_DXGI_DDI_ARG_OFFERRESOURCES1.Priority", priority, 0xa0, 0x20, true, 0x5a2cceb7f8c0060e)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct d3d::ddi::offer_flags_t), "_DXGI_DDI_ARG_OFFERRESOURCES1.Flags", flags, 0xc0, 0x20, true, 0xff63bae94835e727)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif