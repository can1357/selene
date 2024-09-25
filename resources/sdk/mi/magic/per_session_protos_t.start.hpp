#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::balanced_node_t), "_MI_PER_SESSION_PROTOS.SessionProtoNode", session_proto_node, 0x0, 0xc0, true, 0x3413131c08f8faa0)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::single_list_entry_t), "_MI_PER_SESSION_PROTOS.FreeList", free_list, 0x0, 0x40, true, 0xb5f2e0ce3fce2862)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_MI_PER_SESSION_PROTOS.DriverAddress", driver_address, 0x0, 0x40, true, 0xb5574d426c4d692e)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MI_PER_SESSION_PROTOS.SessionId", session_id, 0x200, 0x20, true, 0xd057a0d6f6edee57)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::subsection_t*), "_MI_PER_SESSION_PROTOS.Subsection", subsection, 0x200, 0x40, true, 0x3297bbf0e5f439bd)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::mmpte_t*), "_MI_PER_SESSION_PROTOS.SubsectionBase", subsection_base, 0x240, 0x40, true, 0xbabda010110c7240)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MI_PER_SESSION_PROTOS.ReferenceCount", reference_count, 0x280, 0x20, true, 0xf3d303eca790e034)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MI_PER_SESSION_PROTOS.NumberOfPtesToFree", number_of_ptes_to_free, 0x280, 0x20, true, 0x61d141149e0693e3)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct mi::prototype_ptes_node_t), "_MI_PER_SESSION_PROTOS.ProtosNode", protos_node, 0xc0, 0x0, true, 0xe748faac640b55c5)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MI_PER_SESSION_PROTOS.NumberOfPtes", number_of_ptes, 0x1c0, 0x40, true, 0xe428bb731cdfe338)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#define _m09
#endif