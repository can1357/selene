#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum dbg::state_t), "_DBGUI_WAIT_STATE_CHANGE.NewState", new_state, 0x0, 0x20, true, 0x5c3f6acd731d94ea)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::client_id_t), "_DBGUI_WAIT_STATE_CHANGE.AppClientId", app_client_id, 0x40, 0x80, true, 0xbff21d04ca481fb6)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dbgkm::exception_t), "_DBGUI_WAIT_STATE_CHANGE.StateInfo.Exception", exception, 0x0, 0x0, true, 0x3f42d7f3fea390e0)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::dbgui_create_thread_t), "_DBGUI_WAIT_STATE_CHANGE.StateInfo.CreateThread", create_thread, 0x0, 0xc0, true, 0xbfa293563787009f)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::dbgui_create_process_t), "_DBGUI_WAIT_STATE_CHANGE.StateInfo.CreateProcessInfo", create_process_info, 0x0, 0x0, true, 0xf98beaa75d6bda2c)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dbgkm::exit_thread_t), "_DBGUI_WAIT_STATE_CHANGE.StateInfo.ExitThread", exit_thread, 0x0, 0x20, true, 0x346a3f0bd841cb2b)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dbgkm::exit_process_t), "_DBGUI_WAIT_STATE_CHANGE.StateInfo.ExitProcess", exit_process, 0x0, 0x20, true, 0x581e157afe37723d)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dbgkm::load_dll_t), "_DBGUI_WAIT_STATE_CHANGE.StateInfo.LoadDll", load_dll, 0x0, 0x0, true, 0xe077135c6febe344)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dbgkm::unload_dll_t), "_DBGUI_WAIT_STATE_CHANGE.StateInfo.UnloadDll", unload_dll, 0x0, 0x40, true, 0x729a625ab1943fcc)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u0_state_info_t), "_DBGUI_WAIT_STATE_CHANGE.StateInfo", state_info, 0xc0, 0x0, true, 0x1241da0ac395c420)
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