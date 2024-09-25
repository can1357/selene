#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::ndk_version_t), "_NDK_ADAPTER_INFO.Version", version, 0x0, 0x20, true, 0x322a603fab4c248d)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDK_ADAPTER_INFO.VendorId", vendor_id, 0x20, 0x20, true, 0xb5e0447eda8d6de3)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDK_ADAPTER_INFO.DeviceId", device_id, 0x40, 0x20, true, 0xe6a597d239f767fc)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_NDK_ADAPTER_INFO.MaxRegistrationSize", max_registration_size, 0x80, 0x40, true, 0x74846e9a05a1661a)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_NDK_ADAPTER_INFO.MaxWindowSize", max_window_size, 0xc0, 0x40, true, 0x6a2c28f3afc88cdf)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDK_ADAPTER_INFO.FRMRPageCount", frmr_page_count, 0x100, 0x20, true, 0x53aa9d9cd2924ae2)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDK_ADAPTER_INFO.MaxInitiatorRequestSge", max_initiator_request_sge, 0x120, 0x20, true, 0x9d9d8051d685cdc0)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDK_ADAPTER_INFO.MaxReceiveRequestSge", max_receive_request_sge, 0x140, 0x20, true, 0xf7782285c1aff4b9)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDK_ADAPTER_INFO.MaxReadRequestSge", max_read_request_sge, 0x160, 0x20, true, 0xdb207390385ee35)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDK_ADAPTER_INFO.MaxTransferLength", max_transfer_length, 0x180, 0x20, true, 0xfedf3105e7c11c37)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDK_ADAPTER_INFO.MaxInlineDataSize", max_inline_data_size, 0x1a0, 0x20, true, 0x6182984c32fb4746)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDK_ADAPTER_INFO.MaxInboundReadLimit", max_inbound_read_limit, 0x1c0, 0x20, true, 0x3cafd6f79c91197f)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDK_ADAPTER_INFO.MaxOutboundReadLimit", max_outbound_read_limit, 0x1e0, 0x20, true, 0x8fc591886febfad4)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDK_ADAPTER_INFO.MaxReceiveQueueDepth", max_receive_queue_depth, 0x200, 0x20, true, 0x57a23a09dfed0523)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDK_ADAPTER_INFO.MaxInitiatorQueueDepth", max_initiator_queue_depth, 0x220, 0x20, true, 0x6709fd13c69c7986)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDK_ADAPTER_INFO.MaxSrqDepth", max_srq_depth, 0x240, 0x20, true, 0xd3c8fd2ca170852)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDK_ADAPTER_INFO.MaxCqDepth", max_cq_depth, 0x260, 0x20, true, 0x53b534170df85217)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDK_ADAPTER_INFO.LargeRequestThreshold", large_request_threshold, 0x280, 0x20, true, 0xc294c75d1f83573)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDK_ADAPTER_INFO.MaxCallerData", max_caller_data, 0x2a0, 0x20, true, 0xc3359ebfaca7c113)
#define _m19 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDK_ADAPTER_INFO.MaxCalleeData", max_callee_data, 0x2c0, 0x20, true, 0x25368d5cd6c8bbcd)
#define _m20 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDK_ADAPTER_INFO.AdapterFlags", adapter_flags, 0x2e0, 0x20, true, 0x840016d5a5667d8)
#define _m21 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::ndk_rdma_technology_t), "_NDK_ADAPTER_INFO.RdmaTechnology", rdma_technology, 0x300, 0x20, true, 0x1f7575069d67e48f)
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
#endif