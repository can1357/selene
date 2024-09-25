#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PEB_LDR_DATA.Length", length, 0x0, 0x20, true, 0xab38366681a0e7a2)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_PEB_LDR_DATA.Initialized", initialized, 0x20, 0x8, true, 0x1c6d2dc4bf9e3a64)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_PEB_LDR_DATA.SsHandle", ss_handle, 0x40, 0x40, true, 0x3e31021a950765c9)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_PEB_LDR_DATA.InLoadOrderModuleList", in_load_order_module_list, 0x80, 0x80, true, 0xd64fdf5cf2aa121a)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_PEB_LDR_DATA.InMemoryOrderModuleList", in_memory_order_module_list, 0x100, 0x80, true, 0x1dfb2a7f1012fbb5)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_PEB_LDR_DATA.InInitializationOrderModuleList", in_initialization_order_module_list, 0x180, 0x80, true, 0x6fef2e7e35a17040)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_PEB_LDR_DATA.EntryInProgress", entry_in_progress, 0x200, 0x40, true, 0x2bfc03b7d60769f2)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_PEB_LDR_DATA.ShutdownInProgress", shutdown_in_progress, 0x240, 0x8, true, 0x442ae7e9dad8a02c)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_PEB_LDR_DATA.ShutdownThreadId", shutdown_thread_id, 0x280, 0x40, true, 0x77c62c981a9f8d1)
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
#endif