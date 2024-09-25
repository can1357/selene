#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DBGKD_READ_WRITE_IO_EXTENDED32.DataSize", data_size, 0x0, 0x20, true, 0x1b4cd42670678271)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DBGKD_READ_WRITE_IO_EXTENDED32.InterfaceType", interface_type, 0x20, 0x20, true, 0x2c37bea6dbcae102)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DBGKD_READ_WRITE_IO_EXTENDED32.BusNumber", bus_number, 0x40, 0x20, true, 0x856b63952289c492)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DBGKD_READ_WRITE_IO_EXTENDED32.AddressSpace", address_space, 0x60, 0x20, true, 0x5ae37d840bdb778b)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DBGKD_READ_WRITE_IO_EXTENDED32.IoAddress", io_address, 0x80, 0x20, true, 0x1d2fb2672428987d)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DBGKD_READ_WRITE_IO_EXTENDED32.DataValue", data_value, 0xa0, 0x20, true, 0xd85d0ff016e932e6)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif