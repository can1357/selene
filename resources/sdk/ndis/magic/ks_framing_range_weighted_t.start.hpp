#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::ks_framing_range_t), "KS_FRAMING_RANGE_WEIGHTED.Range", range, 0x0, 0x0, false, 0xe94bb77b793bdef9)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "KS_FRAMING_RANGE_WEIGHTED.InPlaceWeight", in_place_weight, 0x0, 0x0, false, 0x47f9e403a6f28e50)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "KS_FRAMING_RANGE_WEIGHTED.NotInPlaceWeight", not_in_place_weight, 0x0, 0x0, false, 0x766ca726f622f273)
#else
#define _m00
#define _m01
#define _m02
#endif