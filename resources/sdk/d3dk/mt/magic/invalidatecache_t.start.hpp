#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_INVALIDATECACHE.hDevice", h_device, 0x0, 0x20, true, 0x89b0027c3ed0c52e)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_INVALIDATECACHE.hAllocation", h_allocation, 0x20, 0x20, true, 0x2e8a6708e735bd6f)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_D3DKMT_INVALIDATECACHE.Offset", offset, 0x40, 0x40, true, 0xdc5470aeb1c5ca88)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_D3DKMT_INVALIDATECACHE.Length", length, 0x80, 0x40, true, 0xfb6d49752e02c0e4)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif