#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_BOUND_IMPORT_DESCRIPTOR.TimeDateStamp", time_date_stamp, 0x0, 0x20, true, 0x14e26a46bfef71c3)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_IMAGE_BOUND_IMPORT_DESCRIPTOR.OffsetModuleName", offset_module_name, 0x20, 0x10, true, 0x6ffa83219537bd47)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_IMAGE_BOUND_IMPORT_DESCRIPTOR.NumberOfModuleForwarderRefs", number_of_module_forwarder_refs, 0x30, 0x10, true, 0xb2837b2bf7774dc1)
#else
#define _m00
#define _m01
#define _m02
#endif