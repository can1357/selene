#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_PINDIRECTFLIPRESOURCES.hDevice", h_device, 0x0, 0x20, true, 0x546852e1dcdd10fd)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_PINDIRECTFLIPRESOURCES.ResourceCount", resource_count, 0x20, 0x20, true, 0x9eb4ac4b33b3f67e)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t*), "_D3DKMT_PINDIRECTFLIPRESOURCES.pResourceList", p_resource_list, 0x40, 0x40, true, 0xd7e23ab7c7eea5ea)
#else
#define _m00
#define _m01
#define _m02
#endif