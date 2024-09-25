#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::pndis_per_processor_slot_t*), "_NDIS_NBL_TRACKER_BUCKET.Slot", slot, 0x0, 0x40, true, 0x61eb0ee6dc026b32)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_NDIS_NBL_TRACKER_BUCKET.PassiveCounter", passive_counter, 0x40, 0x40, true, 0xeb98981e8b109213)
#else
#define _m00
#define _m01
#endif