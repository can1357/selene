#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_RESOURCEMANAGER_COMPLETION_INFORMATION.IoCompletionPortHandle", io_completion_port_handle, 0x0, 0x40, true, 0x88bad42508d55f46)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_RESOURCEMANAGER_COMPLETION_INFORMATION.CompletionKey", completion_key, 0x40, 0x40, true, 0x596e82b7c0714a32)
#else
#define _m00
#define _m01
#endif