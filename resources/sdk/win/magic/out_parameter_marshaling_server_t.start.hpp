#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::oxid_entry_t const*), "OutParameterMarshalingServer._pOXIDEntry", p_oxid_entry, 0x40, 0x40, true, 0xfa830a84924e3af6)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::splay_links_t), "OutParameterMarshalingServer._splayLinks", splay_links, 0x80, 0xc0, true, 0xdb099821588483dd)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "OutParameterMarshalingServer._cAllocated", c_allocated, 0x180, 0x10, true, 0xbc4d34017d8c842c)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "OutParameterMarshalingServer._cSets", c_sets, 0x190, 0x10, true, 0x52b81764bd8aef78)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t*), "OutParameterMarshalingServer._pSets", p_sets, 0x1c0, 0x40, true, 0xd35afb9db48f0504)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tp::timer_t*), "OutParameterMarshalingServer._pTimer", p_timer, 0x200, 0x40, true, 0x85a655ef075e3443)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tp::work_t*), "OutParameterMarshalingServer._pWork", p_work, 0x240, 0x40, true, 0xb9378dd7827e0d67)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(bool), "OutParameterMarshalingServer._bAlreadySetTimerForCurrentSets", b_already_set_timer_for_current_sets, 0x280, 0x8, true, 0x2c6c4658ad4f8605)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(bool), "OutParameterMarshalingServer._bAlreadySubmittedWorkForCurrentSets", b_already_submitted_work_for_current_sets, 0x288, 0x8, true, 0x6c21395107e50a04)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(bool), "OutParameterMarshalingServer._bRemovedFromTable", b_removed_from_table, 0x290, 0x8, true, 0x8da639e92d8f39e8)
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