#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pci::express_bridge_t*), "_UPSTREAM_SWITCHPORT.RootPortBridge", root_port_bridge, 0x0, 0x40, true, 0xd37a8f5291693c3c)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pci::switch_complex_t*), "_UPSTREAM_SWITCHPORT.SwitchComplex", switch_complex, 0x40, 0x40, true, 0xe58242108f9ffae6)
#else
#define _m00
#define _m01
#endif