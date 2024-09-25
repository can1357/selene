#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "DXGIDDI_MULTIPLANE_OVERLAY_PLANE_INFO.ContextCount", context_count, 0x0, 0x20, true, 0xa387daa58a0ef00a)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void**), "DXGIDDI_MULTIPLANE_OVERLAY_PLANE_INFO.pContextList", p_context_list, 0x40, 0x40, true, 0xdacc99b61770ebf)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t*), "DXGIDDI_MULTIPLANE_OVERLAY_PLANE_INFO.pAllocationList", p_allocation_list, 0x80, 0x40, true, 0x8387333aeb5c9dbb)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "DXGIDDI_MULTIPLANE_OVERLAY_PLANE_INFO.DriverPrivateDataSize", driver_private_data_size, 0xc0, 0x20, true, 0xb0cac091dc6cf69c)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "DXGIDDI_MULTIPLANE_OVERLAY_PLANE_INFO.pDriverPrivateData", p_driver_private_data, 0x100, 0x40, true, 0x8c437c7bd4ee0778)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "DXGIDDI_MULTIPLANE_OVERLAY_PLANE_INFO.SyncIntervalOverrideValid", sync_interval_override_valid, 0x140, 0x20, true, 0x42551078313a6985)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum dxgi::ddi_flip_interval_type_t), "DXGIDDI_MULTIPLANE_OVERLAY_PLANE_INFO.SyncIntervalOverride", sync_interval_override, 0x160, 0x20, true, 0x369556c2ac53af51)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif