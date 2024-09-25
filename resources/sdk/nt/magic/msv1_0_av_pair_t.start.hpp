#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_MSV1_0_AV_PAIR.AvId", av_id, 0x0, 0x10, true, 0x327bd0482c9fe6f3)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_MSV1_0_AV_PAIR.AvLen", av_len, 0x10, 0x10, true, 0x657d1821bab35b22)
#else
#define _m00
#define _m01
#endif