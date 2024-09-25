#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_RESOURCE_DIRECTORY.Characteristics", characteristics, 0x0, 0x20, true, 0xc71ab94cfc42412b)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_RESOURCE_DIRECTORY.TimeDateStamp", time_date_stamp, 0x20, 0x20, true, 0x286766b51534e65e)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_IMAGE_RESOURCE_DIRECTORY.MajorVersion", major_version, 0x40, 0x10, true, 0x9652b2de5541f937)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_IMAGE_RESOURCE_DIRECTORY.MinorVersion", minor_version, 0x50, 0x10, true, 0x8e9917be6903e98e)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_IMAGE_RESOURCE_DIRECTORY.NumberOfNamedEntries", number_of_named_entries, 0x60, 0x10, true, 0x5027598bcd8bc3ae)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_IMAGE_RESOURCE_DIRECTORY.NumberOfIdEntries", number_of_id_entries, 0x70, 0x10, true, 0x280204924d00a3d8)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif