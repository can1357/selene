#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::request_completion_params_t), "FxRequestContext.m_CompletionParams", m_completion_params, 0x40, 0x40, true, 0xb94354c486983933)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class wdf::i_fx_memory_t*), "FxRequestContext.m_RequestMemory", m_request_memory, 0x280, 0x40, true, 0xee9939a5dac3b39c)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxRequestContext.m_RequestType", m_request_type, 0x2c0, 0x8, true, 0xe307e52fbe194646)
#else
#define _m00
#define _m01
#define _m02
#endif