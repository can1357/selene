#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_CLFS_NODE_ID.cType", c_type, 0x0, 0x20, true, 0x6f7339d8698b46ca)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_CLFS_NODE_ID.cbNode", cb_node, 0x20, 0x20, true, 0xd317facdd9aceb55)
#else
#define _m00
#define _m01
#endif