#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "tagMETAHEADER.mtType", mt_type, 0x0, 0x10, true, 0xee031d5c84ba1bfe)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "tagMETAHEADER.mtHeaderSize", mt_header_size, 0x10, 0x10, true, 0x121418b59e0e81b)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "tagMETAHEADER.mtVersion", mt_version, 0x20, 0x10, true, 0xd001b34d63cfdba)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagMETAHEADER.mtSize", mt_size, 0x30, 0x20, true, 0x5b7b9169b91e8f38)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "tagMETAHEADER.mtNoObjects", mt_no_objects, 0x50, 0x10, true, 0x3ba7004286dfc652)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagMETAHEADER.mtMaxRecord", mt_max_record, 0x60, 0x20, true, 0xf209be16e42fc2c6)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "tagMETAHEADER.mtNoParameters", mt_no_parameters, 0x80, 0x10, true, 0xe260e7b9775e6586)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif