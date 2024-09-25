#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::request_completion_params_t), "FxInternalIoctlOthersContext.m_CompletionParams", m_completion_params, 0x40, 0x40, true, 0x5d3eaee534b531d6)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class wdf::i_fx_memory_t*), "FxInternalIoctlOthersContext.m_RequestMemory", m_request_memory, 0x280, 0x40, true, 0xdc00ef43772752b1)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxInternalIoctlOthersContext.m_RequestType", m_request_type, 0x2c0, 0x8, true, 0x94a3b76ebbc26150)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<class wdf::i_fx_memory_t*, 2>), "FxInternalIoctlOthersContext.m_MemoryObjects", m_memory_objects, 0x300, 0x80, true, 0xd856bae6a2fa0997)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif