#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_RAID_BUS_INTERFACE.Initialized", initialized, 0x0, 0x8, true, 0xc98ac20e6f8ebef6)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct stor::port::bus_interface_standard_t), "_RAID_BUS_INTERFACE.Interface", interface, 0x40, 0x0, true, 0x8037fb8f2ac2e534)
#else
#define _m00
#define _m01
#endif