#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CComApartment._dwState", dw_state, 0x20, 0x20, true, 0x20c1d6b5eb204e24)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const uint32_t), "CComApartment._AptId", apt_id, 0x60, 0x20, true, 0xe294782fcec1cd0d)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::oxid_entry_t*), "CComApartment._pOXIDEntry", p_oxid_entry, 0x80, 0x40, true, 0x6bd729555e284308)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::c_remote_unknown_t*), "CComApartment._pRemUnk", p_rem_unk, 0xc0, 0x40, true, 0x399f922b7f531280)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "CComApartment._cWaiters", c_waiters, 0x100, 0x20, true, 0x295081112fb149d7)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "CComApartment._hEventOID", h_event_oid, 0x140, 0x40, true, 0xbd7bc3964dd31140)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CComApartment._cPreRegOidsAvail", c_pre_reg_oids_avail, 0x180, 0x20, true, 0x809ab5d81eca8713)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint64_t, 20>), "CComApartment._arPreRegOids", ar_pre_reg_oids, 0x1c0, 0x0, true, 0x70944a0057c18d74)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CComApartment._cOidsReturn", c_oids_return, 0x6c0, 0x20, true, 0xbc3004c464e4b08)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint64_t, 20>), "CComApartment._arOidsReturn", ar_oids_return, 0x700, 0x0, true, 0x5fe4f7b205cc74ff)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::classic_sta_state_t*), "CComApartment._pClassicSTAState", p_classic_sta_state, 0xc00, 0x40, true, 0xf7bc02c9b750425b)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::asta_state_t*), "CComApartment._pASTAState", p_asta_state, 0xc00, 0x40, true, 0x88dcdd2fc0646c93)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "CComApartment._ui64ApartmentIdentifier", ui64_apartment_identifier, 0xcc0, 0x40, true, 0xfb486d6f0e99b383)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const enum win::apartment_type_t), "CComApartment._type", type, 0x40, 0x20, true, 0x2e08a232262e36ab)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "CComApartment._state", state, 0xc00, 0x40, true, 0x4ba5b7798cc11725)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::non_sta_state_t*), "CComApartment._pNonSTAState", p_non_sta_state, 0xc00, 0x40, true, 0xc8f0b32c6053d0ab)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::bridge_sta_state_t*), "CComApartment._pBridgeSTAState", p_bridge_sta_state, 0xc00, 0x40, true, 0xb6f9dfc30ba0a434)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CComApartment._cRefs", c_refs, 0x0, 0x0, false, 0x82837838c069209e)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const enum win::aptkind_t), "CComApartment._AptKind", apt_kind, 0x0, 0x0, false, 0xbd9062971907dfb2)
#define _m19 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "CComApartment._hEventASTAWake", h_event_asta_wake, 0x0, 0x0, false, 0xaf7af00633f975bc)
#define _m20 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "CComApartment._hTimerFreeUnusedDlls", h_timer_free_unused_dlls, 0x0, 0x0, false, 0xdcaf5a7f97fb3b63)
#define _m21 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "CComApartment._cPendingGitRegistrations", c_pending_git_registrations, 0x0, 0x0, false, 0x980b7a32485a12a9)
#define _m22 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "CComApartment._hEventPendingGitRegistrations", h_event_pending_git_registrations, 0x0, 0x0, false, 0x96358b733647d19b)
#define _m23 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::s_ole_tls_data_t*), "CComApartment._pTlsSTA", p_tls_sta, 0x0, 0x0, false, 0x55f0f7e23dc8fada)
#define _m24 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum win::uninit_stage_t), "CComApartment._uninitStage", uninit_stage, 0x0, 0x0, false, 0x1c2feac6bb5915ac)
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
#define _m21
#define _m22
#define _m23
#define _m24
#endif