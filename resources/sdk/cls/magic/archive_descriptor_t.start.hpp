#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_CLS_ARCHIVE_DESCRIPTOR.coffLow", coff_low, 0x0, 0x40, true, 0xfd3308a4bd334408)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_CLS_ARCHIVE_DESCRIPTOR.coffHigh", coff_high, 0x40, 0x40, true, 0xc22ec78d558f6d3e)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct cls::container_information_t), "_CLS_ARCHIVE_DESCRIPTOR.infoContainer", info_container, 0x80, 0x0, true, 0xbeafa2878b63271a)
#else
#define _m00
#define _m01
#define _m02
#endif