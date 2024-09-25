#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint6_t), "_CDVD_FEATURE_SET_PAGE.PageCode", page_code, 0x0, 0x6, true, 0xbc8583314dfe8ae9, 6, uint8_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_CDVD_FEATURE_SET_PAGE.PSBit", ps_bit, 0x7, 0x1, true, 0x736ff8e8b18cf30b, 1, uint8_t)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_CDVD_FEATURE_SET_PAGE.PageLength", page_length, 0x8, 0x8, true, 0xe4b8779999205fe5)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 2>), "_CDVD_FEATURE_SET_PAGE.CDAudio", cd_audio, 0x10, 0x10, true, 0x2315f80f576c437f)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 2>), "_CDVD_FEATURE_SET_PAGE.EmbeddedChanger", embedded_changer, 0x20, 0x10, true, 0xb70394c3bdb3b98d)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 2>), "_CDVD_FEATURE_SET_PAGE.PacketSMART", packet_smart, 0x30, 0x10, true, 0x9ac89920c1ce0f61)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 2>), "_CDVD_FEATURE_SET_PAGE.PersistantPrevent", persistant_prevent, 0x40, 0x10, true, 0x853e7eed818306c)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 2>), "_CDVD_FEATURE_SET_PAGE.EventStatusNotification", event_status_notification, 0x50, 0x10, true, 0xa9024ecee22edaef)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 2>), "_CDVD_FEATURE_SET_PAGE.DigitalOutput", digital_output, 0x60, 0x10, true, 0x3db2633159f9410)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 2>), "_CDVD_FEATURE_SET_PAGE.CDSequentialRecordable", cd_sequential_recordable, 0x70, 0x10, true, 0x97a4a8fa4a520a35)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 2>), "_CDVD_FEATURE_SET_PAGE.DVDSequentialRecordable", dvd_sequential_recordable, 0x80, 0x10, true, 0x45fa146d798f025c)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 2>), "_CDVD_FEATURE_SET_PAGE.RandomRecordable", random_recordable, 0x90, 0x10, true, 0x29576f10f4427ab8)
#define _m12 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 2>), "_CDVD_FEATURE_SET_PAGE.KeyExchange", key_exchange, 0xa0, 0x10, true, 0x7c8e761a0a63af49)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#define _m09
#define _m10
#define _m11
#define _m12
#endif