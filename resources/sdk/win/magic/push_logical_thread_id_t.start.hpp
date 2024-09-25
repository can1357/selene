#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "PushLogicalThreadId._guidSavedLogicalThreadId", guid_saved_logical_thread_id, 0x0, 0x80, true, 0x10baf2f3542eb250)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(bool), "PushLogicalThreadId._bCallChainInDoubt", b_call_chain_in_doubt, 0x80, 0x8, true, 0x571cd7a3002ee7e6)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::push_logical_thread_id_t*), "PushLogicalThreadId._pPreviousPushedLogicalThreadId", p_previous_pushed_logical_thread_id, 0xc0, 0x40, true, 0x8c1164a3ee5adf00)
#else
#define _m00
#define _m01
#define _m02
#endif