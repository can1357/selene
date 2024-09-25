#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_BOUND_FORWARDER_REF.TimeDateStamp", time_date_stamp, 0x0, 0x20, true, 0x614950e6200afb51)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_IMAGE_BOUND_FORWARDER_REF.OffsetModuleName", offset_module_name, 0x20, 0x10, true, 0xc38c694715421e7f)
#else
#define _m00
#define _m01
#endif