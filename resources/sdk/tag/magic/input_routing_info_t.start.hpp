#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagInputRoutingInfo.peerId", peer_id, 0x0, 0x20, true, 0x2b27d79b4c1a92c0)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagInputRoutingInfo.itemId", item_id, 0x20, 0x20, true, 0xad8342e80e6885b7)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::msg_routing_info_t), "tagInputRoutingInfo.msgRoutingInfo", msg_routing_info, 0x40, 0x40, true, 0x3b9283aacddad82d)
#else
#define _m00
#define _m01
#define _m02
#endif