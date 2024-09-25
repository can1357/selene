#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_HYBRID_DEMOTE_BY_SIZE.Version", version, 0x0, 0x20, true, 0x361862038b2910ba)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_HYBRID_DEMOTE_BY_SIZE.Size", size, 0x20, 0x20, true, 0x7fb667b3af37c4f9)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_HYBRID_DEMOTE_BY_SIZE.SourcePriority", source_priority, 0x40, 0x8, true, 0xdd098e49807cd800)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_HYBRID_DEMOTE_BY_SIZE.TargetPriority", target_priority, 0x48, 0x8, true, 0x20d74bca5c99c6bd)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_HYBRID_DEMOTE_BY_SIZE.LbaCount", lba_count, 0x80, 0x40, true, 0xe39811d620d990ec)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif