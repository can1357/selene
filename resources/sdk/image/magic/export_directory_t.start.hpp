#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_EXPORT_DIRECTORY.Characteristics", characteristics, 0x0, 0x20, true, 0xf09e650b27e522d2)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_EXPORT_DIRECTORY.TimeDateStamp", time_date_stamp, 0x20, 0x20, true, 0xd5f6b07951cf6237)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_IMAGE_EXPORT_DIRECTORY.MajorVersion", major_version, 0x40, 0x10, true, 0x4ab31567f267ab)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_IMAGE_EXPORT_DIRECTORY.MinorVersion", minor_version, 0x50, 0x10, true, 0x9b81fbc17a950b06)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_EXPORT_DIRECTORY.Name", name, 0x60, 0x20, true, 0x3831be2cbb241a1b)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_EXPORT_DIRECTORY.Base", base, 0x80, 0x20, true, 0x88fbd57520d0c997)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_EXPORT_DIRECTORY.NumberOfFunctions", number_of_functions, 0xa0, 0x20, true, 0xca6c6c3315f5eccb)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_EXPORT_DIRECTORY.NumberOfNames", number_of_names, 0xc0, 0x20, true, 0x545d9d149f6e9060)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_EXPORT_DIRECTORY.AddressOfFunctions", address_of_functions, 0xe0, 0x20, true, 0x7de1c03baea09aa1)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_EXPORT_DIRECTORY.AddressOfNames", address_of_names, 0x100, 0x20, true, 0x34a34f84f95642dd)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_EXPORT_DIRECTORY.AddressOfNameOrdinals", address_of_name_ordinals, 0x120, 0x20, true, 0x41fc1d339857ba37)
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
#endif