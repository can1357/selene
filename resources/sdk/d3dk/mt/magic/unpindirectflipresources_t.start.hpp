#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_UNPINDIRECTFLIPRESOURCES.hDevice", h_device, 0x0, 0x20, true, 0x1adff31ac02cf5a0)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_UNPINDIRECTFLIPRESOURCES.ResourceCount", resource_count, 0x20, 0x20, true, 0x581635f39762b9c5)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t*), "_D3DKMT_UNPINDIRECTFLIPRESOURCES.pResourceList", p_resource_list, 0x40, 0x40, true, 0x9ce2d9620fa32874)
#else
#define _m00
#define _m01
#define _m02
#endif