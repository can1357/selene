#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_RECLAIMALLOCATIONS.hDevice", h_device, 0x0, 0x20, true, 0x7f26cef85fe8a411)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t*), "_D3DKMT_RECLAIMALLOCATIONS.pResources", p_resources, 0x40, 0x40, true, 0xb4cb83c482029eaf)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(const uint32_t*), "_D3DKMT_RECLAIMALLOCATIONS.HandleList", handle_list, 0x80, 0x40, true, 0xa01f5a47b3b4c5aa)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t*), "_D3DKMT_RECLAIMALLOCATIONS.pDiscarded", p_discarded, 0xc0, 0x40, true, 0x70c2c16027a8fc1)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_RECLAIMALLOCATIONS.NumAllocations", num_allocations, 0x100, 0x20, true, 0x47a825f75b3fcd4f)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif