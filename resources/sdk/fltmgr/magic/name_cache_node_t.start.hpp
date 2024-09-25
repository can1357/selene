#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union fltmgr::flt_type_t), "_NAME_CACHE_NODE.Type", type, 0x0, 0x20, true, 0x94a5185eda33785f)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fltmgr::flt_instance_t*), "_NAME_CACHE_NODE.ProvidingInstance", providing_instance, 0x40, 0x40, true, 0x16fb7e3dc10c60bc)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_NAME_CACHE_NODE.CreationTime", creation_time, 0x80, 0x40, true, 0x8534c525a1083bd8)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fltmgr::tree_node_t), "_NAME_CACHE_NODE.TreeLink", tree_link, 0xc0, 0xc0, true, 0xf56f51d8ac9401e6)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fltmgr::flt_file_name_information_t), "_NAME_CACHE_NODE.NameInfo", name_info, 0x280, 0xc0, true, 0xe8c44f844a6bf359)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_NAME_CACHE_NODE.UseCount", use_count, 0x640, 0x20, true, 0x41f1daf990ef0493)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif