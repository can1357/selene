#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct clfs::node_id_t), "_CLS_SCAN_CONTEXT.cidNode", cid_node, 0x0, 0x40, true, 0x6f239ce7d1816d6e)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::file_object_t*), "_CLS_SCAN_CONTEXT.plfoLog", plfo_log, 0x40, 0x40, true, 0xca41c50c5caf2197)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_CLS_SCAN_CONTEXT.cIndex", c_index, 0x80, 0x20, true, 0xd94c3a0de99c2b61)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_CLS_SCAN_CONTEXT.cContainers", c_containers, 0xc0, 0x20, true, 0xe7fee89d2005dc5a)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_CLS_SCAN_CONTEXT.cContainersReturned", c_containers_returned, 0x100, 0x20, true, 0x866985ef9fb24168)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_CLS_SCAN_CONTEXT.eScanMode", e_scan_mode, 0x140, 0x8, true, 0x7760c227c7dd48e)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct cls::container_information_t*), "_CLS_SCAN_CONTEXT.pinfoContainer", pinfo_container, 0x180, 0x40, true, 0x600c4b25afb6f3cb)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif