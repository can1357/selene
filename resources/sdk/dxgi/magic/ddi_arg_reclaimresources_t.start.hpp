#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_DXGI_DDI_ARG_RECLAIMRESOURCES.hDevice", h_device, 0x0, 0x40, true, 0x46a22c7ce73a62e9)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(const uint64_t*), "_DXGI_DDI_ARG_RECLAIMRESOURCES.pResources", p_resources, 0x40, 0x40, true, 0x3b9bcd0c7c76ab91)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t*), "_DXGI_DDI_ARG_RECLAIMRESOURCES.pDiscarded", p_discarded, 0x80, 0x40, true, 0xb30e2dabcde2a19c)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGI_DDI_ARG_RECLAIMRESOURCES.Resources", resources, 0xc0, 0x20, true, 0x64e5de0752ecff65)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif