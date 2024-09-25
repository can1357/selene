#if !IN_PARSER
#define _m000 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_PRESENT.hDevice", h_device, 0x0, 0x20, true, 0x6a18f3936c7691a9)
#define _m001 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_PRESENT.hContext", h_context, 0x0, 0x20, true, 0x45fd7f7e6624d564)
#define _m002 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct win::hwnd_t*), "_D3DKMT_PRESENT.hWindow", h_window, 0x40, 0x40, true, 0x93fb7bf2b866be18)
#define _m003 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_PRESENT.VidPnSourceId", vid_pn_source_id, 0x80, 0x20, true, 0xc4878e9235b96d5e)
#define _m004 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_PRESENT.hSource", h_source, 0xa0, 0x20, true, 0x93dce1de158a89fd)
#define _m005 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_PRESENT.hDestination", h_destination, 0xc0, 0x20, true, 0x9da6d560e1d73519)
#define _m006 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_PRESENT.Color", color, 0xe0, 0x20, true, 0xc23b5bdc18672d31)
#define _m007 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct tag::rect_t), "_D3DKMT_PRESENT.DstRect", dst_rect, 0x100, 0x80, true, 0xfa36d2b8a6de750e)
#define _m008 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct tag::rect_t), "_D3DKMT_PRESENT.SrcRect", src_rect, 0x180, 0x80, true, 0x8c0f191e1c4b6e49)
#define _m009 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_PRESENT.SubRectCnt", sub_rect_cnt, 0x200, 0x20, true, 0xa5780303a05b9226)
#define _m010 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(const struct tag::rect_t*), "_D3DKMT_PRESENT.pSrcSubRects", p_src_sub_rects, 0x240, 0x40, true, 0x871998bdc051eb2c)
#define _m011 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_PRESENT.PresentCount", present_count, 0x280, 0x20, true, 0x48678c5fa27ab955)
#define _m012 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum d3d::ddi::flipinterval_type_t), "_D3DKMT_PRESENT.FlipInterval", flip_interval, 0x2a0, 0x20, true, 0xa34b6bb10b5038d6)
#define _m013 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct d3dk::mt::presentflags_t), "_D3DKMT_PRESENT.Flags", flags, 0x2c0, 0x20, true, 0xbac59c1752b5edf3)
#define _m014 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_PRESENT.BroadcastContextCount", broadcast_context_count, 0x2e0, 0x20, true, 0x5ca973282a72e031)
#define _m015 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 64>), "_D3DKMT_PRESENT.BroadcastContext", broadcast_context, 0x300, 0x0, true, 0xa53ac62d7672a266)
#define _m016 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_D3DKMT_PRESENT.PresentLimitSemaphore", present_limit_semaphore, 0xb00, 0x40, true, 0xd255700a28abf762)
#define _m017 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct d3dk::mt::presenthistorytoken_t), "_D3DKMT_PRESENT.PresentHistoryToken", present_history_token, 0xb40, 0xc0, true, 0xbb842c7467b8f237)
#define _m018 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct d3dk::mt::present_rgns_t*), "_D3DKMT_PRESENT.pPresentRegions", p_present_regions, 0x2d00, 0x40, true, 0xa340aeed210b6011)
#define _m019 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_PRESENT.hAdapter", h_adapter, 0x2d40, 0x20, true, 0xa6b34c50091361b3)
#define _m020 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_PRESENT.hIndirectContext", h_indirect_context, 0x2d40, 0x20, true, 0xed80375dffc8e38f)
#define _m021 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_PRESENT.Duration", duration, 0x2d60, 0x20, true, 0x74e4b694931709ce)
#define _m022 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t*), "_D3DKMT_PRESENT.BroadcastSrcAllocation", broadcast_src_allocation, 0x2d80, 0x40, true, 0x834eb727b177d06c)
#define _m023 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t*), "_D3DKMT_PRESENT.BroadcastDstAllocation", broadcast_dst_allocation, 0x2dc0, 0x40, true, 0x742abbb547dfa2c5)
#define _m024 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_PRESENT.PrivateDriverDataSize", private_driver_data_size, 0x2e00, 0x20, true, 0xf024c2bff1369c05)
#define _m025 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_D3DKMT_PRESENT.pPrivateDriverData", p_private_driver_data, 0x2e40, 0x40, true, 0xd8c36c8eb46abd0e)
#define _m026 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_D3DKMT_PRESENT.bOptimizeForComposition", b_optimize_for_composition, 0x2e80, 0x8, true, 0xb7a71cbeb791a027)
#else
#define _m000
#define _m001
#define _m002
#define _m003
#define _m004
#define _m005
#define _m006
#define _m007
#define _m008
#define _m009
#define _m010
#define _m011
#define _m012
#define _m013
#define _m014
#define _m015
#define _m016
#define _m017
#define _m018
#define _m019
#define _m020
#define _m021
#define _m022
#define _m023
#define _m024
#define _m025
#define _m026
#endif