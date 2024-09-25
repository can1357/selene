#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSDBG_BUS_DATA.Address", address, 0x0, 0x20, true, 0x188f7a510fe517be)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_SYSDBG_BUS_DATA.Buffer", buffer, 0x40, 0x40, true, 0x4c66cda8f7a22aa9)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSDBG_BUS_DATA.Request", request, 0x80, 0x20, true, 0x1b19260483cf42f2)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum nt::bus_data_type_t), "_SYSDBG_BUS_DATA.BusDataType", bus_data_type, 0xa0, 0x20, true, 0xfd0d3362e602b7f9)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSDBG_BUS_DATA.BusNumber", bus_number, 0xc0, 0x20, true, 0xe1b9fb2a8c229b2c)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSDBG_BUS_DATA.SlotNumber", slot_number, 0xe0, 0x20, true, 0x7956049fc5c67d02)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif