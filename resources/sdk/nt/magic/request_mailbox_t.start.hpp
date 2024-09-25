#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::request_mailbox_t*), "_REQUEST_MAILBOX.Next", next, 0x0, 0x40, true, 0xc04eb90dcda595d3)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_REQUEST_MAILBOX.RequestSummary", request_summary, 0x40, 0x40, true, 0x1b72e2fba2fa5204)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::krequest_packet_t), "_REQUEST_MAILBOX.RequestPacket", request_packet, 0x80, 0x0, true, 0x38544e037501d969)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile int32_t*), "_REQUEST_MAILBOX.NodeTargetCountAddr", node_target_count_addr, 0x180, 0x40, true, 0x44c564739490146e)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile int32_t), "_REQUEST_MAILBOX.NodeTargetCount", node_target_count, 0x1c0, 0x20, true, 0x893739a6efe85fd5)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile int32_t*), "_REQUEST_MAILBOX.SubNodeTargetCountAddr", sub_node_target_count_addr, 0x0, 0x0, false, 0xd4044e0d8c235730)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile int32_t), "_REQUEST_MAILBOX.SubNodeTargetCount", sub_node_target_count, 0x0, 0x0, false, 0x45c3785f18d77daf)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif