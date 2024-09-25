#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::object_header_t), "_NDIS_INTERRUPT_MODERATION_PARAMETERS.Header", header, 0x0, 0x20, true, 0x328519f1518878ce)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_INTERRUPT_MODERATION_PARAMETERS.Flags", flags, 0x20, 0x20, true, 0x1405ddef191a7303)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::interrupt_moderation_t), "_NDIS_INTERRUPT_MODERATION_PARAMETERS.InterruptModeration", interrupt_moderation, 0x40, 0x20, true, 0xf058e9d2b763483c)
#else
#define _m00
#define _m01
#define _m02
#endif