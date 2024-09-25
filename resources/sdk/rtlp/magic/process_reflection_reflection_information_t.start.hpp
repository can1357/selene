#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_RTLP_PROCESS_REFLECTION_REFLECTION_INFORMATION.ReflectionProcessHandle", reflection_process_handle, 0x0, 0x40, true, 0x8a434cfadbf2d68e)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_RTLP_PROCESS_REFLECTION_REFLECTION_INFORMATION.ReflectionThreadHandle", reflection_thread_handle, 0x40, 0x40, true, 0xfb9bc42c2694dd35)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::client_id_t), "_RTLP_PROCESS_REFLECTION_REFLECTION_INFORMATION.ReflectionClientId", reflection_client_id, 0x80, 0x80, true, 0x43266c6a17df3ca6)
#else
#define _m00
#define _m01
#define _m02
#endif