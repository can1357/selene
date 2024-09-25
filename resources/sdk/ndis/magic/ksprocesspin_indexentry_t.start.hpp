#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::ksprocesspin_t**), "_KSPROCESSPIN_INDEXENTRY.Pins", pins, 0x0, 0x0, false, 0x884577f7d0372de6)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KSPROCESSPIN_INDEXENTRY.Count", count, 0x0, 0x0, false, 0x9c0eb085848fff3b)
#else
#define _m00
#define _m01
#endif