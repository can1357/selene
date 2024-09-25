#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "CRestrictedError._pszDescription", psz_description, 0x280, 0x40, true, 0x164e4a11cc0456e)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "CRestrictedError._pszRestrictedDescription", psz_restricted_description, 0x2c0, 0x40, true, 0x83f6353c1cb251a)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "CRestrictedError._pszCapabilitySid", psz_capability_sid, 0x300, 0x40, true, 0x7462a26c8d29c45d)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::hresult), "CRestrictedError._hrError", hr_error, 0x340, 0x20, true, 0xf6e23d423ea91cea)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "CRestrictedError._pszSectionName", psz_section_name, 0x380, 0x40, true, 0x603738ba5a3ed4fa)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "CRestrictedError._hSection", h_section, 0x3c0, 0x40, true, 0x71cb4e54509abd9a)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CRestrictedError._dwVersion", dw_version, 0x400, 0x20, true, 0x5909168f2835842e)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "CRestrictedError._cStackBackTrace", c_stack_back_trace, 0x420, 0x10, true, 0x3eeac575ee5d5c11)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void**), "CRestrictedError._ppvStackBackTrace", ppv_stack_back_trace, 0x440, 0x40, true, 0xaba81c7dca619d1d)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "CRestrictedError._stackBackTracePointerSize", stack_back_trace_pointer_size, 0x480, 0x10, true, 0x1f77f272adfe0879)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::stowed_exception_information_v2_t), "CRestrictedError._stowedExceptionInformation", stowed_exception_information, 0x4c0, 0xc0, true, 0x25b4ba8ede734286)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CRestrictedError._dwOriginatingProcessId", dw_originating_process_id, 0x30c0, 0x20, true, 0xd1b4a5bb4b76aaf9)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CRestrictedError._dwDestinationProcessId", dw_destination_process_id, 0x30e0, 0x20, true, 0xeb02c367affee5dc)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "CRestrictedError._correlationId", correlation_id, 0x6c0, 0x80, true, 0x2ed527706bc5dfbc)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "CRestrictedError._bIsTransformed", b_is_transformed, 0x7c0, 0x20, true, 0x2dc869052f1311fe)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "CRestrictedError._bRestrictMarshalingData", b_restrict_marshaling_data, 0x7e0, 0x20, true, 0xc5268bd909addbe2)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "CRestrictedError._numPropagations", num_propagations, 0x800, 0x10, true, 0xd724f12e1f9f55f3)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "CRestrictedError._pszSignature", psz_signature, 0x840, 0x40, true, 0x488dca3a24ce5a72)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "CRestrictedError.m_pofProcessName", m_pof_process_name, 0x880, 0x40, true, 0xadc6516e13d20a0d)
#define _m19 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "CRestrictedError.m_pofStackText", m_pof_stack_text, 0x8c0, 0x40, true, 0xab429b258bacc6bb)
#define _m20 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::hpss_t*), "CRestrictedError._snapshotHandle", snapshot_handle, 0x940, 0x40, true, 0x2f6b08a06e4ba3d6)
#define _m21 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::context), "CRestrictedError._snapshotContext", snapshot_context, 0x980, 0x80, true, 0xaf298c5674c36e04)
#define _m22 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CRestrictedError._snashpotThreadId", snashpot_thread_id, 0x3000, 0x20, true, 0x874477f796b1c0fd)
#define _m23 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "CRestrictedError._snapshotReturnAddress", snapshot_return_address, 0x3040, 0x40, true, 0x815800ff05b2e08f)
#define _m24 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tp::timer_t*), "CRestrictedError._pSnapshotCleanupTimer", p_snapshot_cleanup_timer, 0x3080, 0x40, true, 0x76e7e33724dcf574)
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