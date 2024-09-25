#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fltmgr::tree_node_t), "_FLT_VERIFIER_OBJECT.TreeLink", tree_link, 0x0, 0xc0, true, 0x8afbb604b2cd381d)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FLT_VERIFIER_OBJECT.Type", type, 0x1c0, 0x20, true, 0x7e4b9ec0f3799478)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_FLT_VERIFIER_OBJECT.Object", object, 0x200, 0x40, true, 0x976445aedb4837e5)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_FLT_VERIFIER_OBJECT.RefCount", ref_count, 0x240, 0x20, true, 0x6ad0c45d9af3fd8e)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif