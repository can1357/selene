#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::idll_host_t*), "CDllHost._pIDllProxy", p_i_dll_proxy, 0x100, 0x40, true, 0xb7c143aced7109fc)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::c_std_identity_t*), "CDllHost._pStdId", p_std_id, 0x140, 0x40, true, 0x34e796bea1a0044)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CDllHost._dwType", dw_type, 0x180, 0x20, true, 0xfd3be6a94800a171)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CDllHost._dwHostAptId", dw_host_apt_id, 0x1a0, 0x20, true, 0xf6bc44da37bea209)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile uint32_t), "CDllHost._hCOMActivator", h_com_activator, 0x1c0, 0x20, true, 0x1d185a6786573081)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile uint32_t), "CDllHost._hWinRTActivator", h_win_rt_activator, 0x1e0, 0x20, true, 0x7be66aaf1415a20f)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CDllHost._dwTid", dw_tid, 0x200, 0x20, true, 0xa89d2401982e5ace)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::hresult), "CDllHost._hrMarshal", hr_marshal, 0x220, 0x20, true, 0x596e9115971ce27c)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "CDllHost._hEvent", h_event, 0x240, 0x40, true, 0x9ed3e541d250ec9d)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "CDllHost._hEventWakeUp", h_event_wake_up, 0x280, 0x40, true, 0x791e27b4ceff7dbe)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::hresult), "CDllHost._hr", hr, 0x2c0, 0x20, true, 0xd37e03fca0bf3ceb)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::objref_t), "CDllHost._objref", objref, 0x300, 0xc0, true, 0xa901f63294877511)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::c_ole_static_mutex_sem_t), "CDllHost._mxs", mxs, 0x5c0, 0x40, true, 0x2df0757b689c5d91)
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
#endif