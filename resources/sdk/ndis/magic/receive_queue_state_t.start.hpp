#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::object_header_t), "_NDIS_RECEIVE_QUEUE_STATE.Header", header, 0x0, 0x20, true, 0x4b91c806ed6966a)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_RECEIVE_QUEUE_STATE.Flags", flags, 0x20, 0x20, true, 0x6cc7a2caaa8c701f)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_RECEIVE_QUEUE_STATE.QueueId", queue_id, 0x40, 0x20, true, 0xb927c7c2e82a65e7)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::receive_queue_operational_state_t), "_NDIS_RECEIVE_QUEUE_STATE.QueueState", queue_state, 0x60, 0x20, true, 0xfd4121eb79f1cbb9)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif