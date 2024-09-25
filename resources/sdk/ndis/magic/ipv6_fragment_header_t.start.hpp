#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_IPV6_FRAGMENT_HEADER.NextHeader", next_header, 0x0, 0x8, true, 0x246aad543ac8341b)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint8_t), "_IPV6_FRAGMENT_HEADER.DontUse1", dont_use1, 0x10, 0x8, true, 0x19067ffbea5a3cfa, 8, uint16_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_IPV6_FRAGMENT_HEADER.MoreFragments", more_fragments, 0x18, 0x1, true, 0xdfbe49d40ec7f583, 1, uint16_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint5_t), "_IPV6_FRAGMENT_HEADER.DontUse2", dont_use2, 0x1b, 0x5, true, 0xe0da0c17947825c5, 5, uint16_t)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_IPV6_FRAGMENT_HEADER.OffsetAndFlags", offset_and_flags, 0x10, 0x10, true, 0x57cb5787923724c9)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_IPV6_FRAGMENT_HEADER.Id", id, 0x20, 0x20, true, 0x48f624ae7858540a)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif