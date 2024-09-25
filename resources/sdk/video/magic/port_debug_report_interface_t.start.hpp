#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_VIDEO_PORT_DEBUG_REPORT_INTERFACE.Size", size, 0x0, 0x10, true, 0xc787797d047bed9b)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_VIDEO_PORT_DEBUG_REPORT_INTERFACE.Version", version, 0x10, 0x10, true, 0x2e353d2d9b2617f4)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_VIDEO_PORT_DEBUG_REPORT_INTERFACE.Context", context, 0x40, 0x40, true, 0x22970800ceb9f682)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_VIDEO_PORT_DEBUG_REPORT_INTERFACE.InterfaceReference", interface_reference, 0x80, 0x40, true, 0x4be04f1842ed9f29)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_VIDEO_PORT_DEBUG_REPORT_INTERFACE.InterfaceDereference", interface_dereference, 0xc0, 0x40, true, 0x862ee1a88db8fb9b)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<struct video::debug_report_t*(void*, uint32_t, uint64_t, uint64_t, uint64_t, uint64_t)>*), "_VIDEO_PORT_DEBUG_REPORT_INTERFACE.DbgReportCreate", dbg_report_create, 0x100, 0x40, true, 0x11546da603df5e08)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<uint8_t(struct video::debug_report_t*, void*, uint32_t)>*), "_VIDEO_PORT_DEBUG_REPORT_INTERFACE.DbgReportSecondaryData", dbg_report_secondary_data, 0x140, 0x40, true, 0x6bfe279f703309a9)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct video::debug_report_t*)>*), "_VIDEO_PORT_DEBUG_REPORT_INTERFACE.DbgReportComplete", dbg_report_complete, 0x180, 0x40, true, 0xe79768363494e0c2)
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