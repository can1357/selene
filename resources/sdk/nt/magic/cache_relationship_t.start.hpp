#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_CACHE_RELATIONSHIP.Level", level, 0x0, 0x8, true, 0x4dc92cab4da47d24)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_CACHE_RELATIONSHIP.Associativity", associativity, 0x8, 0x8, true, 0x99d7728219d3a6ae)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_CACHE_RELATIONSHIP.LineSize", line_size, 0x10, 0x10, true, 0x2beae6c1ed766db)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_CACHE_RELATIONSHIP.CacheSize", cache_size, 0x20, 0x20, true, 0x462116e6bd9ab4d7)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum nt::processor_cache_type_t), "_CACHE_RELATIONSHIP.Type", type, 0x40, 0x20, true, 0x8eee8641d9e7a5f4)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::group_affinity_t), "_CACHE_RELATIONSHIP.GroupMask", group_mask, 0x100, 0x80, true, 0x275e15204f06497)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_CACHE_RELATIONSHIP.GroupCount", group_count, 0xf0, 0x10, true, 0x3e3db53c92c9b614)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<struct nt::group_affinity_t, 1>), "_CACHE_RELATIONSHIP.GroupMasks", group_masks, 0x100, 0x80, true, 0x9ada28013004d6c9)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif