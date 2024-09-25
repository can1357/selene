#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_HID_DESCRIPTOR_DESC_LIST.bReportType", b_report_type, 0x0, 0x8, true, 0x3b0cb2e4eade83c2)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_HID_DESCRIPTOR_DESC_LIST.wReportLength", w_report_length, 0x8, 0x10, true, 0x15d162654b7888ee)
#else
#define _m00
#define _m01
#endif