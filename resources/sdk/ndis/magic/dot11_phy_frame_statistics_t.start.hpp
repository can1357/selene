#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "DOT11_PHY_FRAME_STATISTICS.ullTransmittedFrameCount", ull_transmitted_frame_count, 0x0, 0x40, true, 0xbb1240c515a72bd2)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "DOT11_PHY_FRAME_STATISTICS.ullMulticastTransmittedFrameCount", ull_multicast_transmitted_frame_count, 0x40, 0x40, true, 0x566a3ae077f041c9)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "DOT11_PHY_FRAME_STATISTICS.ullFailedCount", ull_failed_count, 0x80, 0x40, true, 0xefac56888c577b92)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "DOT11_PHY_FRAME_STATISTICS.ullRetryCount", ull_retry_count, 0xc0, 0x40, true, 0x18f1a99743d22903)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "DOT11_PHY_FRAME_STATISTICS.ullMultipleRetryCount", ull_multiple_retry_count, 0x100, 0x40, true, 0x53fe54382cd3aae3)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "DOT11_PHY_FRAME_STATISTICS.ullMaxTXLifetimeExceededCount", ull_max_tx_lifetime_exceeded_count, 0x140, 0x40, true, 0xa6c54fb483ac55)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "DOT11_PHY_FRAME_STATISTICS.ullTransmittedFragmentCount", ull_transmitted_fragment_count, 0x180, 0x40, true, 0xa482bdd86ddd9422)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "DOT11_PHY_FRAME_STATISTICS.ullRTSSuccessCount", ull_rts_success_count, 0x1c0, 0x40, true, 0x120b16804f98e51f)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "DOT11_PHY_FRAME_STATISTICS.ullRTSFailureCount", ull_rts_failure_count, 0x200, 0x40, true, 0xc0039a02976465a8)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "DOT11_PHY_FRAME_STATISTICS.ullACKFailureCount", ull_ack_failure_count, 0x240, 0x40, true, 0x6c8472dfda363786)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "DOT11_PHY_FRAME_STATISTICS.ullReceivedFrameCount", ull_received_frame_count, 0x280, 0x40, true, 0xee232ceb2344e79b)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "DOT11_PHY_FRAME_STATISTICS.ullMulticastReceivedFrameCount", ull_multicast_received_frame_count, 0x2c0, 0x40, true, 0xd7df685e2c5093cb)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "DOT11_PHY_FRAME_STATISTICS.ullPromiscuousReceivedFrameCount", ull_promiscuous_received_frame_count, 0x300, 0x40, true, 0xed6f106770441897)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "DOT11_PHY_FRAME_STATISTICS.ullMaxRXLifetimeExceededCount", ull_max_rx_lifetime_exceeded_count, 0x340, 0x40, true, 0x2355b6fc2da84f43)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "DOT11_PHY_FRAME_STATISTICS.ullFrameDuplicateCount", ull_frame_duplicate_count, 0x380, 0x40, true, 0xfde775799164aa05)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "DOT11_PHY_FRAME_STATISTICS.ullReceivedFragmentCount", ull_received_fragment_count, 0x3c0, 0x40, true, 0xc2e77c25c481541a)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "DOT11_PHY_FRAME_STATISTICS.ullPromiscuousReceivedFragmentCount", ull_promiscuous_received_fragment_count, 0x400, 0x40, true, 0x31239f3ee8a2edd9)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "DOT11_PHY_FRAME_STATISTICS.ullFCSErrorCount", ull_fcs_error_count, 0x440, 0x40, true, 0x6a230f868d501420)
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
#endif