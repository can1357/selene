#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_TRACK_COMPLETION_NODES.NumLists", num_lists, 0x0, 0x20, true, 0x8d5a5ede167c71cc)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_TRACK_COMPLETION_NODES.DrainingRefCount", draining_ref_count, 0x20, 0x20, true, 0x69a10edefef77a9e)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fltmgr::completion_node_tracking_list_t*), "_TRACK_COMPLETION_NODES.TrackingLists", tracking_lists, 0x40, 0x40, true, 0xa602072ee2a7e4c7)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_TRACK_COMPLETION_NODES.PointerToFree", pointer_to_free, 0x80, 0x40, true, 0x4e60a7b4a5f2c3ac)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif