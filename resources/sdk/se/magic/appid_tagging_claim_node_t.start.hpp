#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_SE_APPID_TAGGING_CLAIM_NODE.AppIdTaggingKey", app_id_tagging_key, 0x0, 0x0, false, 0x2119dc08865ebd96)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_SE_APPID_TAGGING_CLAIM_NODE.AppIdTaggingValue", app_id_tagging_value, 0x0, 0x0, false, 0x33a708d2e1f712d9)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::single_list_entry_t), "_SE_APPID_TAGGING_CLAIM_NODE.ListEntry", list_entry, 0x0, 0x0, false, 0xabe7d1bb644400fd)
#else
#define _m00
#define _m01
#define _m02
#endif