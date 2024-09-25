#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::object_header_t), "_NDIS_RECEIVE_FILTER_QUEUE_STATE_CHANGE.Header", header, 0x0, 0x20, true, 0xd607abf2437a3dbc)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_RECEIVE_FILTER_QUEUE_STATE_CHANGE.QueueId", queue_id, 0x20, 0x20, true, 0x144d486e427bba43)
#else
#define _m00
#define _m01
#endif