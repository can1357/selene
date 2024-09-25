#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "DXGIDDICB_PRESENT.hSrcAllocation", h_src_allocation, 0x0, 0x20, true, 0xa20710f48c87deb1)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "DXGIDDICB_PRESENT.hDstAllocation", h_dst_allocation, 0x20, 0x20, true, 0xa9442b906a0a804)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "DXGIDDICB_PRESENT.pDXGIContext", p_dxgi_context, 0x40, 0x40, true, 0xb1eb213ffde4473a)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "DXGIDDICB_PRESENT.hContext", h_context, 0x80, 0x40, true, 0x40b4e2400fcee512)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "DXGIDDICB_PRESENT.BroadcastContextCount", broadcast_context_count, 0xc0, 0x20, true, 0x82087e2029d07b9e)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<void*, 64>), "DXGIDDICB_PRESENT.BroadcastContext", broadcast_context, 0x100, 0x0, true, 0xec0bff578cc7859d)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t*), "DXGIDDICB_PRESENT.BroadcastSrcAllocation", broadcast_src_allocation, 0x1100, 0x40, true, 0x6f9b65d3a1a5860d)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t*), "DXGIDDICB_PRESENT.BroadcastDstAllocation", broadcast_dst_allocation, 0x1140, 0x40, true, 0x2aef9b8cb36563bf)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "DXGIDDICB_PRESENT.PrivateDriverDataSize", private_driver_data_size, 0x1180, 0x20, true, 0x2ed87262a0e49d)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "DXGIDDICB_PRESENT.pPrivateDriverData", p_private_driver_data, 0x11c0, 0x40, true, 0x387ff70f7f832028)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "DXGIDDICB_PRESENT.bOptimizeForComposition", b_optimize_for_composition, 0x1200, 0x8, true, 0x6db01cbe7ac60519)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "DXGIDDICB_PRESENT.SyncIntervalOverrideValid", sync_interval_override_valid, 0x1220, 0x20, true, 0x5e93984555692451)
#define _m12 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum dxgi::ddi_flip_interval_type_t), "DXGIDDICB_PRESENT.SyncIntervalOverride", sync_interval_override, 0x1240, 0x20, true, 0xaa1764d6af688d6e)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#define _m09
#define _m10
#define _m11
#define _m12
#endif