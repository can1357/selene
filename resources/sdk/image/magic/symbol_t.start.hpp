#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 8>), "_IMAGE_SYMBOL.N.ShortName", short_name, 0x0, 0x40, true, 0xea942b88a94d741e)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_SYMBOL.N.Name.Short", _short, 0x0, 0x20, true, 0x581fc1ace0ffb49e)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_SYMBOL.N.Name.Long", _long, 0x20, 0x20, true, 0x24ac18b28d713197)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u4_name_t), "_IMAGE_SYMBOL.N.Name", name, 0x0, 0x40, true, 0xa96a0c1d4c899ebd)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 2>), "_IMAGE_SYMBOL.N.LongName", long_name, 0x0, 0x40, true, 0xff1bbf0dc0306565)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_n_t), "_IMAGE_SYMBOL.N", n, 0x0, 0x40, true, 0x9c499da4f66f1829)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_SYMBOL.Value", value, 0x40, 0x20, true, 0x524367600715b0b5)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int16_t), "_IMAGE_SYMBOL.SectionNumber", section_number, 0x60, 0x10, true, 0x719f8ce1ccccd479)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_IMAGE_SYMBOL.Type", type, 0x70, 0x10, true, 0xee0183a18f510bf9)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_IMAGE_SYMBOL.StorageClass", storage_class, 0x80, 0x8, true, 0x3452d062294979a0)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_IMAGE_SYMBOL.NumberOfAuxSymbols", number_of_aux_symbols, 0x88, 0x8, true, 0xac227ee17f90d983)
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