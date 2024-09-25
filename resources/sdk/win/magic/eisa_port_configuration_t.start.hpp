#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct win::eisa_port_descriptor_t), "_EISA_PORT_CONFIGURATION.Configuration", configuration, 0x0, 0x8, true, 0x2ed26463807a32a6)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_EISA_PORT_CONFIGURATION.PortAddress", port_address, 0x8, 0x10, true, 0x997975fd4e5ace60)
#else
#define _m00
#define _m01
#endif