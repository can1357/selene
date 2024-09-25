#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "OFFSETINSTANCEDATAANDLENGTH.OffsetInstanceData", offset_instance_data, 0x0, 0x20, true, 0xc48ee88579206077)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "OFFSETINSTANCEDATAANDLENGTH.LengthInstanceData", length_instance_data, 0x20, 0x20, true, 0xf7ecfc67630928e6)
#else
#define _m00
#define _m01
#endif