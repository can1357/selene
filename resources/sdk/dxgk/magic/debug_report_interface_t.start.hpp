#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_DXGK_DEBUG_REPORT_INTERFACE.Size", size, 0x0, 0x10, true, 0x45b61e4f04adc891)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_DXGK_DEBUG_REPORT_INTERFACE.Version", version, 0x10, 0x10, true, 0x9ea1acf5b59cddec)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_DXGK_DEBUG_REPORT_INTERFACE.Context", context, 0x40, 0x40, true, 0x110be13dbe36d6f3)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_DXGK_DEBUG_REPORT_INTERFACE.InterfaceReference", interface_reference, 0x80, 0x40, true, 0x48f610705cd0dab3)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_DXGK_DEBUG_REPORT_INTERFACE.InterfaceDereference", interface_dereference, 0xc0, 0x40, true, 0xdab5e9d0a2d4119e)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<struct dxgk::debug_report_handle_t*(void*, uint32_t, uint64_t, uint64_t, uint64_t, uint64_t)>*), "_DXGK_DEBUG_REPORT_INTERFACE.DbgReportCreate", dbg_report_create, 0x100, 0x40, true, 0x62a86f09ce953817)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<uint8_t(struct dxgk::debug_report_handle_t*, void*, uint32_t)>*), "_DXGK_DEBUG_REPORT_INTERFACE.DbgReportSecondaryData", dbg_report_secondary_data, 0x140, 0x40, true, 0x9ab628372f9770ba)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct dxgk::debug_report_handle_t*)>*), "_DXGK_DEBUG_REPORT_INTERFACE.DbgReportComplete", dbg_report_complete, 0x180, 0x40, true, 0x71f3f90d9c2f7408)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif