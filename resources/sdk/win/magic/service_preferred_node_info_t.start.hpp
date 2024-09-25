#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_SERVICE_PREFERRED_NODE_INFO.usPreferredNode", us_preferred_node, 0x0, 0x10, true, 0xbb4a23e9f19a2e26)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_SERVICE_PREFERRED_NODE_INFO.fDelete", f_delete, 0x10, 0x8, true, 0xf1733bb03a165041)
#else
#define _m00
#define _m01
#endif