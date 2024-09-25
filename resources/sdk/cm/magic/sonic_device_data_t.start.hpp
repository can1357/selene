#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_CM_SONIC_DEVICE_DATA.Version", version, 0x0, 0x10, true, 0xf021205fa2a9c64c)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_CM_SONIC_DEVICE_DATA.Revision", revision, 0x10, 0x10, true, 0x854e4108219cad26)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_CM_SONIC_DEVICE_DATA.DataConfigurationRegister", data_configuration_register, 0x20, 0x10, true, 0xcedc9705e0bced53)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 8>), "_CM_SONIC_DEVICE_DATA.EthernetAddress", ethernet_address, 0x30, 0x40, true, 0xa00045cf460a6428)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif