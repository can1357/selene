#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum cc::lws_packet_type_t), "_CC_LWS_PACKET.Type", type, 0x0, 0x0, false, 0x66bc2458a57782a7)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_CC_LWS_PACKET.Active", active, 0x0, 0x0, false, 0x72fe8307a3c22844)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct cc::partition_t*), "_CC_LWS_PACKET.Overlay.Partition", partition, 0x0, 0x0, false, 0x6f261c09723f25b2)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::private_volume_cachemap_t*), "_CC_LWS_PACKET.Overlay.PrivateVolumeCacheMap", private_volume_cache_map, 0x0, 0x0, false, 0xa5aca8647bac503f)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_overlay_t), "_CC_LWS_PACKET.Overlay", overlay, 0x0, 0x0, false, 0xbf698cb195645fc6)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif