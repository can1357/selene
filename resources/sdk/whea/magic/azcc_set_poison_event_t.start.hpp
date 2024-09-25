#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct whea::event_log_entry_t), "_WHEA_AZCC_SET_POISON_EVENT.WheaEventLogEntry", whea_event_log_entry, 0x0, 0x0, true, 0xeebb58d263858887)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_AZCC_SET_POISON_EVENT.Bus", bus, 0x100, 0x20, true, 0xc6e78bca9e7c221c)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_WHEA_AZCC_SET_POISON_EVENT.ReadSuccess", read_success, 0x120, 0x8, true, 0xc34bd2c85da5500d)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_WHEA_AZCC_SET_POISON_EVENT.WriteSuccess", write_success, 0x128, 0x8, true, 0xe18d3a1715602715)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_WHEA_AZCC_SET_POISON_EVENT.IsEnable", is_enable, 0x130, 0x8, true, 0x935198736637bdb)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif