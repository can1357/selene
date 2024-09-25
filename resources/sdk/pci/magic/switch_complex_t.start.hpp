#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pci::express_bridge_t*), "_SWITCH_COMPLEX.UpstreamPort", upstream_port, 0x0, 0x40, true, 0x93c150a3ce474080)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pci::express_bridge_t*), "_SWITCH_COMPLEX.DownstreamPortList", downstream_port_list, 0x40, 0x40, true, 0xac77a677d9b012c0)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SWITCH_COMPLEX.ComputedL0sReceiveLatency", computed_l0s_receive_latency, 0x80, 0x20, true, 0xb3ce2b9adf7502d5)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SWITCH_COMPLEX.ComputedL0sTransmitLatency", computed_l0s_transmit_latency, 0xa0, 0x20, true, 0x1e366cc7fc53562)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SWITCH_COMPLEX.ComputedL1Latency", computed_l1_latency, 0xc0, 0x20, true, 0x5de9232fe1be46db)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_SWITCH_COMPLEX.IntegratedComponent", integrated_component, 0xe0, 0x8, true, 0xbdd30a3a9986a7f4)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif