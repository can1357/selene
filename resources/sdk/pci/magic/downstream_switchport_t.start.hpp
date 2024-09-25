#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pci::express_bridge_t*), "_DOWNSTREAM_SWITCHPORT.RootPortBridge", root_port_bridge, 0x0, 0x40, true, 0x2ecec1885dc65b79)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pci::switch_complex_t*), "_DOWNSTREAM_SWITCHPORT.SwitchComplex", switch_complex, 0x40, 0x40, true, 0xdab4749151f7a22c)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kinterrupt_t*), "_DOWNSTREAM_SWITCHPORT.InterruptObject", interrupt_object, 0x80, 0x40, true, 0x2ad72a763be48d73)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_DOWNSTREAM_SWITCHPORT.UpstreamLinkL0sL1Override", upstream_link_l0s_l1_override, 0xc0, 0x8, true, 0xc4f2d36aef437f45)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif