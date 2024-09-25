#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PI_BUS_EXTENSION.Flags", flags, 0x0, 0x20, true, 0x7ff41455f50e6ec)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PI_BUS_EXTENSION.NumberCSNs", number_cs_ns, 0x20, 0x8, true, 0x44fcd189a545ec7)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t*), "_PI_BUS_EXTENSION.ReadDataPort", read_data_port, 0x40, 0x40, true, 0xc585f2ebe9efdaaa)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PI_BUS_EXTENSION.DataPortMapped", data_port_mapped, 0x80, 0x8, true, 0x1da9b98bbe6123cb)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t*), "_PI_BUS_EXTENSION.AddressPort", address_port, 0xc0, 0x40, true, 0xfb4f4fcaf10f56cc)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PI_BUS_EXTENSION.AddrPortMapped", addr_port_mapped, 0x100, 0x8, true, 0x8abbf38b90d1b197)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t*), "_PI_BUS_EXTENSION.CommandPort", command_port, 0x140, 0x40, true, 0x460731098fa8741d)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PI_BUS_EXTENSION.CmdPortMapped", cmd_port_mapped, 0x180, 0x8, true, 0xdbc35f2c4d722e27)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PI_BUS_EXTENSION.NextSlotNumber", next_slot_number, 0x1a0, 0x20, true, 0x844031a18162e925)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::single_list_entry_t), "_PI_BUS_EXTENSION.DeviceList", device_list, 0x1c0, 0x40, true, 0x6d81f92455818c62)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::single_list_entry_t), "_PI_BUS_EXTENSION.CardList", card_list, 0x200, 0x40, true, 0x416a19a0bb3d063)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::device_object_t*), "_PI_BUS_EXTENSION.PhysicalBusDevice", physical_bus_device, 0x240, 0x40, true, 0xaffa05f55dc196dc)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::device_object_t*), "_PI_BUS_EXTENSION.FunctionalBusDevice", functional_bus_device, 0x280, 0x40, true, 0xf0eef12e99896b4d)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::device_object_t*), "_PI_BUS_EXTENSION.AttachedDevice", attached_device, 0x2c0, 0x40, true, 0xb337bdefd31e6eff)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PI_BUS_EXTENSION.BusNumber", bus_number, 0x300, 0x20, true, 0xf78720705fc3e71b)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum nt::system_power_state_t), "_PI_BUS_EXTENSION.SystemPowerState", system_power_state, 0x320, 0x20, true, 0x927b6a015bc9e18c)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum nt::device_power_state_t), "_PI_BUS_EXTENSION.DevicePowerState", device_power_state, 0x340, 0x20, true, 0xe23abc0297c9ea29)
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
#define _m11
#define _m12
#define _m13
#define _m14
#define _m15
#define _m16
#endif