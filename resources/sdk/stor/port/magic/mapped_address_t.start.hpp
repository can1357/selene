#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct stor::port::mapped_address_t*), "_MAPPED_ADDRESS.NextMappedAddress", next_mapped_address, 0x0, 0x40, true, 0x462dbf0b3fa7bd64)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_MAPPED_ADDRESS.MappedAddress", mapped_address, 0x40, 0x40, true, 0x26bc012b1a4d730)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_MAPPED_ADDRESS.NumberOfBytes", number_of_bytes, 0x80, 0x20, true, 0xa4e9dbc0d9487fe1)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_MAPPED_ADDRESS.IoAddress", io_address, 0xc0, 0x40, true, 0x4c7bd80231d5c058)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_MAPPED_ADDRESS.BusNumber", bus_number, 0x100, 0x20, true, 0x6a7a2d69fb166316)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif