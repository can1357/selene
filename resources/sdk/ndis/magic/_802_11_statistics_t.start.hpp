#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_802_11_STATISTICS.Length", length, 0x0, 0x20, true, 0xe46e4be40038be59)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_NDIS_802_11_STATISTICS.TransmittedFragmentCount", transmitted_fragment_count, 0x40, 0x40, true, 0x97ab4629fff3e9a5)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_NDIS_802_11_STATISTICS.MulticastTransmittedFrameCount", multicast_transmitted_frame_count, 0x80, 0x40, true, 0x7822a2e4fe75894e)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_NDIS_802_11_STATISTICS.FailedCount", failed_count, 0xc0, 0x40, true, 0x1a101e70c44fe90d)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_NDIS_802_11_STATISTICS.RetryCount", retry_count, 0x100, 0x40, true, 0xd8464c84c7615c1f)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_NDIS_802_11_STATISTICS.MultipleRetryCount", multiple_retry_count, 0x140, 0x40, true, 0xb8d39016b963017)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_NDIS_802_11_STATISTICS.RTSSuccessCount", rts_success_count, 0x180, 0x40, true, 0x56eac83c6108a948)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_NDIS_802_11_STATISTICS.RTSFailureCount", rts_failure_count, 0x1c0, 0x40, true, 0x1b4c0ca2d228216e)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_NDIS_802_11_STATISTICS.ACKFailureCount", ack_failure_count, 0x200, 0x40, true, 0x373a3f34dce41668)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_NDIS_802_11_STATISTICS.FrameDuplicateCount", frame_duplicate_count, 0x240, 0x40, true, 0xdaf2994e71192262)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_NDIS_802_11_STATISTICS.ReceivedFragmentCount", received_fragment_count, 0x280, 0x40, true, 0x6be21f9d239c6e8b)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_NDIS_802_11_STATISTICS.MulticastReceivedFrameCount", multicast_received_frame_count, 0x2c0, 0x40, true, 0x4169b0968ca3cb9c)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_NDIS_802_11_STATISTICS.FCSErrorCount", fcs_error_count, 0x300, 0x40, true, 0x1bda5d91d37ef04e)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_NDIS_802_11_STATISTICS.TKIPLocalMICFailures", tkip_local_mic_failures, 0x340, 0x40, true, 0x434019652c3f6c04)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_NDIS_802_11_STATISTICS.TKIPICVErrorCount", tkipicv_error_count, 0x380, 0x40, true, 0x9f2e6ef3b46e1815)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_NDIS_802_11_STATISTICS.TKIPCounterMeasuresInvoked", tkip_counter_measures_invoked, 0x3c0, 0x40, true, 0x6f1fa3afcb222d69)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_NDIS_802_11_STATISTICS.TKIPReplays", tkip_replays, 0x400, 0x40, true, 0x321566a4bc5813dc)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_NDIS_802_11_STATISTICS.CCMPFormatErrors", ccmp_format_errors, 0x440, 0x40, true, 0x3aa5949799e3a0ff)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_NDIS_802_11_STATISTICS.CCMPReplays", ccmp_replays, 0x480, 0x40, true, 0x4dad20ce00946ce0)
#define _m19 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_NDIS_802_11_STATISTICS.CCMPDecryptErrors", ccmp_decrypt_errors, 0x4c0, 0x40, true, 0x12720866e8e9801b)
#define _m20 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_NDIS_802_11_STATISTICS.FourWayHandshakeFailures", four_way_handshake_failures, 0x500, 0x40, true, 0x4571b7b9a9315b3c)
#define _m21 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_NDIS_802_11_STATISTICS.WEPUndecryptableCount", wep_undecryptable_count, 0x540, 0x40, true, 0x9bcb2f6d01c9fc30)
#define _m22 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_NDIS_802_11_STATISTICS.WEPICVErrorCount", wepicv_error_count, 0x580, 0x40, true, 0x8c068a93d6fdfe43)
#define _m23 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_NDIS_802_11_STATISTICS.DecryptSuccessCount", decrypt_success_count, 0x5c0, 0x40, true, 0x15872d271f8acc5d)
#define _m24 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_NDIS_802_11_STATISTICS.DecryptFailureCount", decrypt_failure_count, 0x600, 0x40, true, 0x1318b20cc4d7c8f0)
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