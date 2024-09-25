#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_tlgEventMetadata_t.Type", type, 0x0, 0x8, true, 0x77412e25673196a9)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_tlgEventMetadata_t.Channel", channel, 0x8, 0x8, true, 0x60f6370651650e0b)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_tlgEventMetadata_t.Level", level, 0x10, 0x8, true, 0xd817fcc7f9f5c981)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_tlgEventMetadata_t.Opcode", opcode, 0x18, 0x8, true, 0x20790879fcdc9dfa)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_tlgEventMetadata_t.Keyword", keyword, 0x20, 0x40, true, 0x614ac2a40bccbd80)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_tlgEventMetadata_t.RemainingSize", remaining_size, 0x60, 0x10, true, 0x709a9cd9d02248f7)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif