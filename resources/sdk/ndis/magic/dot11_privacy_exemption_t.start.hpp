#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "DOT11_PRIVACY_EXEMPTION.usEtherType", us_ether_type, 0x0, 0x10, true, 0x759ba942c4c5324e)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "DOT11_PRIVACY_EXEMPTION.usExemptionActionType", us_exemption_action_type, 0x10, 0x10, true, 0xc65b183dd5fef81e)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "DOT11_PRIVACY_EXEMPTION.usExemptionPacketType", us_exemption_packet_type, 0x20, 0x10, true, 0x197cfcea9a56ee61)
#else
#define _m00
#define _m01
#define _m02
#endif