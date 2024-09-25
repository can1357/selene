#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "KSTOPOLOGY_CONNECTION.FromNode", from_node, 0x0, 0x0, false, 0xc2f84c150a8540b7)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "KSTOPOLOGY_CONNECTION.FromNodePin", from_node_pin, 0x0, 0x0, false, 0x6bff7daf2ff0aa05)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "KSTOPOLOGY_CONNECTION.ToNode", to_node, 0x0, 0x0, false, 0xe0046ac14d7238cc)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "KSTOPOLOGY_CONNECTION.ToNodePin", to_node_pin, 0x0, 0x0, false, 0xe51c86984ca20031)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif