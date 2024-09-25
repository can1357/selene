#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DBGKD_READ_WRITE_IO_EXTENDED64.DataSize", data_size, 0x0, 0x20, true, 0x60fa37b274ee743b)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DBGKD_READ_WRITE_IO_EXTENDED64.InterfaceType", interface_type, 0x20, 0x20, true, 0xfb2443a6e2f08781)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DBGKD_READ_WRITE_IO_EXTENDED64.BusNumber", bus_number, 0x40, 0x20, true, 0x89e92f881ab70be4)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DBGKD_READ_WRITE_IO_EXTENDED64.AddressSpace", address_space, 0x60, 0x20, true, 0x5fb5217406417b59)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_DBGKD_READ_WRITE_IO_EXTENDED64.IoAddress", io_address, 0x80, 0x40, true, 0xd0dfe5f5d072ae65)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DBGKD_READ_WRITE_IO_EXTENDED64.DataValue", data_value, 0xc0, 0x20, true, 0xd2de0aa49d520f7)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif