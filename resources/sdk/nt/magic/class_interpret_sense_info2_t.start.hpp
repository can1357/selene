#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_CLASS_INTERPRET_SENSE_INFO2.Size", size, 0x0, 0x20, true, 0xe8d07cf6ce65bdba)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_CLASS_INTERPRET_SENSE_INFO2.HistoryCount", history_count, 0x20, 0x20, true, 0xeac7db94bdfa21ca)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pclass_compress_retry_history_data_t ), "_CLASS_INTERPRET_SENSE_INFO2.Compress", compress, 0x40, 0x40, true, 0xe503dc32c76a0692)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pclass_interpret_sense_info_t ), "_CLASS_INTERPRET_SENSE_INFO2.Interpret", interpret, 0x80, 0x40, true, 0x4baa1bf4dacb5a2)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif