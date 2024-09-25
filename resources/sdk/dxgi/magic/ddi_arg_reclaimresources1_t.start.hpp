#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_DXGI_DDI_ARG_RECLAIMRESOURCES1.hDevice", h_device, 0x0, 0x40, true, 0x1585896694893a44)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(const uint64_t*), "_DXGI_DDI_ARG_RECLAIMRESOURCES1.pResources", p_resources, 0x40, 0x40, true, 0x96952b5b04ab11c3)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum d3d::ddi::reclaim_result_t*), "_DXGI_DDI_ARG_RECLAIMRESOURCES1.pResults", p_results, 0x80, 0x40, true, 0x1b98229a70234d50)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGI_DDI_ARG_RECLAIMRESOURCES1.Resources", resources, 0xc0, 0x20, true, 0xb81e85a10f23644e)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif