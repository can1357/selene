#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_tlgProvider_t.LevelPlus1", level_plus1, 0x0, 0x20, true, 0x1dff95a14cca8964)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(__unaligned const uint16_t*), "_tlgProvider_t.ProviderMetadataPtr", provider_metadata_ptr, 0x40, 0x40, true, 0x835ea6f78537536d)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_tlgProvider_t.KeywordAny", keyword_any, 0x80, 0x40, true, 0x544d11612f820057)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_tlgProvider_t.KeywordAll", keyword_all, 0xc0, 0x40, true, 0xbdad451bbc02e8a4)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_tlgProvider_t.RegHandle", reg_handle, 0x100, 0x40, true, 0xad3cb8b0af18bb6e)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(const struct nt::guid_t*, uint32_t, uint8_t, uint64_t, uint64_t, struct nt::event_filter_descriptor_t*, void*)>*), "_tlgProvider_t.EnableCallback", enable_callback, 0x140, 0x40, true, 0x4af18d033db0cd15)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_tlgProvider_t.CallbackContext", callback_context, 0x180, 0x40, true, 0x692d4bad71ba44cd)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif