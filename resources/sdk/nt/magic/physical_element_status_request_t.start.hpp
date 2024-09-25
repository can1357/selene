#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PHYSICAL_ELEMENT_STATUS_REQUEST.Version", version, 0x0, 0x20, true, 0xba25d6d37562a900)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PHYSICAL_ELEMENT_STATUS_REQUEST.Size", size, 0x20, 0x20, true, 0x6e037683d31c91b9)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PHYSICAL_ELEMENT_STATUS_REQUEST.StartingElement", starting_element, 0x40, 0x20, true, 0x9ba1149e60ed5db7)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_PHYSICAL_ELEMENT_STATUS_REQUEST.Filter", filter, 0x60, 0x8, true, 0x3340f1554416356e)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_PHYSICAL_ELEMENT_STATUS_REQUEST.ReportType", report_type, 0x68, 0x8, true, 0x240b0c67230ca6fc)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif