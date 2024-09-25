#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WWAN_SMS_SEND_PDU.Size", size, 0x0, 0x8, true, 0x45f27e0a8e862e23)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<char, 366>), "_WWAN_SMS_SEND_PDU.PduData", pdu_data, 0x8, 0x70, true, 0x88f843c340b2fb89)
#else
#define _m00
#define _m01
#endif