#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::request_completion_params_t), "FxIoContext.m_CompletionParams", m_completion_params, 0x40, 0x40, true, 0x87ff9cf1e810fa54)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class wdf::i_fx_memory_t*), "FxIoContext.m_RequestMemory", m_request_memory, 0x280, 0x40, true, 0x1f1ea3b52cd0c75a)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxIoContext.m_RequestType", m_request_type, 0x2c0, 0x8, true, 0xa57d8cd0f52e9c8)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "FxIoContext.m_BufferToFree", m_buffer_to_free, 0x300, 0x40, true, 0x3c6aa030ef4e1b72)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "FxIoContext.m_OriginalSystemBuffer", m_original_system_buffer, 0x340, 0x40, true, 0x1d7eb1134c71b79c)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "FxIoContext.m_OriginalUserBuffer", m_original_user_buffer, 0x380, 0x40, true, 0x762e154c2c310406)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::mdl_t*), "FxIoContext.m_MdlToFree", m_mdl_to_free, 0x3c0, 0x40, true, 0x48e1b5889fb20f9b)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::mdl_t*), "FxIoContext.m_OriginalMdl", m_original_mdl, 0x400, 0x40, true, 0x99c58e85ff1992f4)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fx::driver_globals_t*), "FxIoContext.m_DriverGlobals", m_driver_globals, 0x400, 0x40, true, 0xba0f35607e3c3c0b)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "FxIoContext.m_OriginalFlags", m_original_flags, 0x440, 0x20, true, 0xe818a8c1a1805f46)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "FxIoContext.m_BufferToFreeLength", m_buffer_to_free_length, 0x480, 0x40, true, 0x2d2cf9d106b57d35)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "FxIoContext.m_MdlToFreeSize", m_mdl_to_free_size, 0x4c0, 0x40, true, 0xed6b71da30b88a57)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxIoContext.m_CopyBackToBuffer", m_copy_back_to_buffer, 0x500, 0x8, true, 0x6e8f19f70891ef97)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxIoContext.m_UnlockPages", m_unlock_pages, 0x508, 0x8, true, 0xd9dbf81867d91086)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxIoContext.m_RestoreState", m_restore_state, 0x510, 0x8, true, 0x31efa309f59b1c44)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxIoContext.m_MajorFunction", m_major_function, 0x518, 0x8, true, 0xa3059150094bcd27)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class wdf::i_fx_memory_t*), "FxIoContext.m_OtherMemory", m_other_memory, 0x540, 0x40, true, 0x2c7efc8e62ee0958)
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
#define _m13
#define _m14
#define _m15
#define _m16
#endif