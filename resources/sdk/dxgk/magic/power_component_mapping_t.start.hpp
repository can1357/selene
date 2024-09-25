#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum dxgk::power_component_type_t), "_DXGK_POWER_COMPONENT_MAPPING.ComponentType", component_type, 0x0, 0x20, true, 0x517183e5bdff8a6a)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_POWER_COMPONENT_MAPPING.EngineDesc.NodeIndex", node_index, 0x0, 0x20, true, 0x19305423a41a9ce6)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u0_engine_desc_t), "_DXGK_POWER_COMPONENT_MAPPING.EngineDesc", engine_desc, 0x20, 0x20, true, 0xe50df8722a785703)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_POWER_COMPONENT_MAPPING.MonitorRefreshDesc.VidPnSourceID", vid_pn_source_id, 0x0, 0x20, true, 0xca57d07aface30e7)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u1_monitor_refresh_desc_t), "_DXGK_POWER_COMPONENT_MAPPING.MonitorRefreshDesc", monitor_refresh_desc, 0x20, 0x20, true, 0xb0614e0963cd2d13)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_POWER_COMPONENT_MAPPING.MonitorDesc.VidPnTargetID", vid_pn_target_id, 0x0, 0x20, true, 0x2d2edd6466c5fba1)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u2_monitor_desc_t), "_DXGK_POWER_COMPONENT_MAPPING.MonitorDesc", monitor_desc, 0x20, 0x20, true, 0x426fc0122b02fab8)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_POWER_COMPONENT_MAPPING.MemoryDesc.SegmentID", segment_id, 0x0, 0x20, true, 0x5d9e6d32589de6fd)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u3_memory_desc_t), "_DXGK_POWER_COMPONENT_MAPPING.MemoryDesc", memory_desc, 0x20, 0x20, true, 0x48ea6617752ae1f9)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_DXGK_POWER_COMPONENT_MAPPING.SharedDesc.SharedTypeFlag", shared_type_flag, 0x0, 0x10, true, 0x62a71fc2792600a1)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_DXGK_POWER_COMPONENT_MAPPING.SharedDesc.DriverCustomValueSet", driver_custom_value_set, 0x10, 0x10, true, 0xe07b2e98a5c18093)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_POWER_COMPONENT_MAPPING.SharedDesc.SharedType", shared_type, 0x0, 0x20, true, 0xcac2e37338f468a9)
#define _m12 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u4_shared_desc_t), "_DXGK_POWER_COMPONENT_MAPPING.SharedDesc", shared_desc, 0x20, 0x20, true, 0x73510a1c26d7f78a)
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