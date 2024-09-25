#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_MI_SESSION_STATE.ImageVaStart", image_va_start, 0x200, 0x40, true, 0xa1f81f42cc75c6cd)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ex::push_lock_t), "_MI_SESSION_STATE.IdLock", id_lock, 0x8280, 0x40, true, 0x78b44bf977f49398)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::eprocess_t*), "_MI_SESSION_STATE.LeaderProcess", leader_process, 0x82c0, 0x40, true, 0xe903ff77d3f6c460)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ex::push_lock_t), "_MI_SESSION_STATE.InitializeLock", initialize_lock, 0x8300, 0x40, true, 0x224f9dbb2b8f7825)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_MI_SESSION_STATE.SessionBase", session_base, 0x8380, 0x40, true, 0xe4fb8a83867a4836)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::mmsession_t), "_MI_SESSION_STATE.SystemSession", system_session, 0x0, 0x0, true, 0x380aba3dca2c8e6c)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_MI_SESSION_STATE.CodePageEdited", code_page_edited, 0x100, 0x8, true, 0xe1e17b6f799162da)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::variant<uint32_t*, uint64_t*>), "_MI_SESSION_STATE.DynamicVaBitBuffer", dynamic_va_bit_buffer, 0x140, 0x40, true, 0x9766057d5dc8ce5f)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MI_SESSION_STATE.DynamicVaBitBufferPages", dynamic_va_bit_buffer_pages, 0x180, 0x40, true, 0xbe74c9f21e6bd7)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_MI_SESSION_STATE.DynamicVaStart", dynamic_va_start, 0x1c0, 0x40, true, 0xfe13f5509f3e505e)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t*), "_MI_SESSION_STATE.DynamicPtesBitBuffer", dynamic_ptes_bit_buffer, 0x8240, 0x40, true, 0x9deb2b8909dc3839)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::variant<struct nt::mmwsl_full_t*, struct nt::mmwsl_instance_t*>), "_MI_SESSION_STATE.WorkingSetList", working_set_list, 0x8340, 0x40, true, 0x8b46ebc1beb18ecc)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_MI_SESSION_STATE.SessionCore", session_core, 0x83c0, 0x40, true, 0xef80ecf00196507e)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::avl_tree_t), "_MI_SESSION_STATE.SessionIdNodes", session_id_nodes, 0x8400, 0x40, true, 0x5d0aba4aa2c39b49)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct mi::huge_system_view_head_t, 256>), "_MI_SESSION_STATE.SystemViewBuckets", system_view_buckets, 0x240, 0x0, true, 0x9743e36427453f8d)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kevent_t), "_MI_SESSION_STATE.DeleteInProgressEvent", delete_in_progress_event, 0x8440, 0xc0, true, 0xda96bd7fe881bc34)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MI_SESSION_STATE.DeleteInProgressCount", delete_in_progress_count, 0x8500, 0x20, true, 0xfc2be3d8ed9ac3d)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t*), "_MI_SESSION_STATE.DynamicPoolBitBuffer", dynamic_pool_bit_buffer, 0x0, 0x0, false, 0x12c135841ba0a8cc)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MI_SESSION_STATE.DetachTimeStamp", detach_time_stamp, 0x0, 0x0, false, 0xd9ee4951b07f1f91)
#define _m19 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::mmwsle_hash_t*), "_MI_SESSION_STATE.WsHashStart", ws_hash_start, 0x0, 0x0, false, 0xb5bd49547ab9967e)
#define _m20 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::mmwsle_hash_t*), "_MI_SESSION_STATE.WsHashEnd", ws_hash_end, 0x0, 0x0, false, 0x35cdf5153cf59697)
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
#define _m17
#define _m18
#define _m19
#define _m20
#endif