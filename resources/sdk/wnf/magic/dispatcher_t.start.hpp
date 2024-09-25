#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wnf::node_header_t), "_WNF_DISPATCHER.Header", header, 0x0, 0x20, true, 0x388f6d1a314f393c)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::work_queue_item_t), "_WNF_DISPATCHER.WorkItem", work_item, 0x40, 0x0, true, 0x8868443b269ee85d)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_WNF_DISPATCHER.State", state, 0x140, 0x20, true, 0x16b4717542347439)
#else
#define _m00
#define _m01
#define _m02
#endif