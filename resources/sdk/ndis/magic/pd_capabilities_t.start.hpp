#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::object_header_t), "_NDIS_PD_CAPABILITIES.Header", header, 0x0, 0x20, true, 0xfd7d320dc5b0259d)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_PD_CAPABILITIES.Flags", flags, 0x20, 0x20, true, 0xbc6f2fd221e6fd8f)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_PD_CAPABILITIES.MaximumTxPartialBufferCount", maximum_tx_partial_buffer_count, 0x40, 0x20, true, 0xa01c16b5366cda17)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_PD_CAPABILITIES.MaximumRxPartialBufferCount", maximum_rx_partial_buffer_count, 0x60, 0x20, true, 0x65d7a16e38075936)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDIS_PD_CAPABILITIES.RxFilterContextWidth", rx_filter_context_width, 0x80, 0x8, true, 0xda85ac810a137879)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_PD_CAPABILITIES.CapabilityFlags", capability_flags, 0xa0, 0x20, true, 0xa2be295e0830a45c)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_PD_CAPABILITIES.MaxNumberOfRxQueues", max_number_of_rx_queues, 0xc0, 0x20, true, 0xf46b4ee057ebcec8)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_PD_CAPABILITIES.MaxNumberOfTxQueues", max_number_of_tx_queues, 0xe0, 0x20, true, 0x5da5f1a9b25e014f)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_PD_CAPABILITIES.MaxNumberOfRxQueuesForDefaultVport", max_number_of_rx_queues_for_default_vport, 0x100, 0x20, true, 0x7570a4121bfd5259)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_PD_CAPABILITIES.MaxNumberOfTxQueuesForDefaultVport", max_number_of_tx_queues_for_default_vport, 0x120, 0x20, true, 0xa8e65cda61dd4c45)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_PD_CAPABILITIES.MaxNumberOfRxQueuesPerNonDefaultVport", max_number_of_rx_queues_per_non_default_vport, 0x140, 0x20, true, 0x64d1282c50af2ac0)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_PD_CAPABILITIES.MaxNumberOfTxQueuesPerNonDefaultVport", max_number_of_tx_queues_per_non_default_vport, 0x160, 0x20, true, 0xf42b1b40c5ae251b)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_PD_CAPABILITIES.ExactMatchProfileArrayOffset", exact_match_profile_array_offset, 0x180, 0x20, true, 0xd63042af566eb822)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_PD_CAPABILITIES.ExactMatchProfileArrayNumElements", exact_match_profile_array_num_elements, 0x1a0, 0x20, true, 0x794bd86457cfa8fa)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_PD_CAPABILITIES.ExactMatchProfileArrayElementSize", exact_match_profile_array_element_size, 0x1c0, 0x20, true, 0x1871e0e4c52915b7)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_PD_CAPABILITIES.WildcardMatchProfileArrayOffset", wildcard_match_profile_array_offset, 0x1e0, 0x20, true, 0x44f2dca24bbcc91f)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_PD_CAPABILITIES.WildcardMatchProfileArrayNumElements", wildcard_match_profile_array_num_elements, 0x200, 0x20, true, 0x7b9e4bed9de42813)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_PD_CAPABILITIES.WildcardMatchProfileArrayElementSize", wildcard_match_profile_array_element_size, 0x220, 0x20, true, 0x9f70f3830d1523a9)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_PD_CAPABILITIES.MinimumModerationInterval", minimum_moderation_interval, 0x240, 0x20, true, 0x831772d3763f2d83)
#define _m19 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_PD_CAPABILITIES.MaximumModerationInterval", maximum_moderation_interval, 0x260, 0x20, true, 0x5d44d968661f5641)
#define _m20 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_PD_CAPABILITIES.ModerationIntervalGranularity", moderation_interval_granularity, 0x280, 0x20, true, 0x4589801336dd3d5d)
#define _m21 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_PD_CAPABILITIES.MaxRxQueueSize", max_rx_queue_size, 0x2a0, 0x20, true, 0x998ade8faf49d51d)
#define _m22 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_PD_CAPABILITIES.MaxTxQueueSize", max_tx_queue_size, 0x2c0, 0x20, true, 0xf41ded3c1e9154d9)
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
#endif