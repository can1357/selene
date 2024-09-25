#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_WNF_NODE_HEADER.NodeTypeCode", node_type_code, 0x0, 0x10, true, 0xe210d798f0c309c9)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_WNF_NODE_HEADER.NodeByteSize", node_byte_size, 0x10, 0x10, true, 0xa19eed993130ae7d)
#else
#define _m00
#define _m01
#endif