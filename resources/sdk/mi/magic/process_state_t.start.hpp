#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_MI_PROCESS_STATE.SystemDllBase", system_dll_base, 0x0, 0x40, true, 0x59e2c4389f966fc5)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MI_PROCESS_STATE.ColorSeed", color_seed, 0x40, 0x20, true, 0xe53af94e599ef16d)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_MI_PROCESS_STATE.RotatingUniprocessorNumber", rotating_uniprocessor_number, 0x60, 0x20, true, 0x166e897c8205a705)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_MI_PROCESS_STATE.CriticalSectionTimeout", critical_section_timeout, 0x80, 0x40, true, 0xe5ed77ce2401eb94)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_MI_PROCESS_STATE.ProcessList", process_list, 0xc0, 0x80, true, 0x874c45a903b954b6)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::variant<struct nt::mmpte_t*, sdk::array<struct nt::mmpte_t*, 2>>), "_MI_PROCESS_STATE.SharedUserDataPte", shared_user_data_pte, 0x140, 0x80, true, 0x6cf3967111f82cfd)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_MI_PROCESS_STATE.HypervisorSharedVa", hypervisor_shared_va, 0x1c0, 0x40, true, 0x327ca04b8dc0feca)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MI_PROCESS_STATE.VadSecureCookie", vad_secure_cookie, 0x200, 0x40, true, 0x2f85bfb1394c5d0f)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kevent_t), "_MI_PROCESS_STATE.CloneDereferenceEvent", clone_dereference_event, 0x0, 0x0, false, 0xc3189937e16b727a)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union nt::slist_header_t), "_MI_PROCESS_STATE.CloneProtosSListHead", clone_protos_s_list_head, 0x0, 0x0, false, 0xa94ab91f6a38f38c)
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
#endif