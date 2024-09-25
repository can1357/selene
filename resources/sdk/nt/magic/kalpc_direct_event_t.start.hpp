#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_KALPC_DIRECT_EVENT.Value", value, 0x0, 0x40, true, 0x77a193c53c87ee4d)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_KALPC_DIRECT_EVENT.DirectType", direct_type, 0x0, 0x1, true, 0xbb036c9484ffaf12, 1, uint64_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_KALPC_DIRECT_EVENT.EventReferenced", event_referenced, 0x1, 0x1, true, 0x9f7a06a980aa5be1, 1, uint64_t)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint62_t), "_KALPC_DIRECT_EVENT.EventObjectBits", event_object_bits, 0x2, 0x3e, true, 0x539ff7f054ab147e, 62, uint64_t)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_KALPC_DIRECT_EVENT.Event", event, 0x0, 0x0, false, 0xa0c4640e794d17f0)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_KALPC_DIRECT_EVENT.Referenced", referenced, 0x0, 0x0, false, 0xd986744130ce8e3b, 1, uint64_t)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif