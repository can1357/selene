#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_UNLOCK2.hDevice", h_device, 0x0, 0x20, true, 0xdae6340505f2f608)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_UNLOCK2.hAllocation", h_allocation, 0x20, 0x20, true, 0xce10bd1f659a6ec9)
#else
#define _m00
#define _m01
#endif