#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::pd_buffer_t*), "_PD_BUFFER.NextPDBuffer", next_pd_buffer, 0x0, 0x40, true, 0xa45d794cbbf22ed8)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::pd_buffer_t*), "_PD_BUFFER.NextPartialPDBuffer", next_partial_pd_buffer, 0x40, 0x40, true, 0xee7e0d4da1316212)
#define _m012 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PD_BUFFER.MetaDataV0.RxFilterContext", rx_filter_context, 0x0, 0x40, true, 0x969fa899f4be6c82)
#define _m013 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PD_BUFFER.MetaDataV0.GftFlowEntryId", gft_flow_entry_id, 0x0, 0x40, true, 0xa9a70bb3bf63f723)
#define _m014 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PD_BUFFER.MetaDataV0.RxHashValue", rx_hash_value, 0x40, 0x20, true, 0x3993b6f894b63c0f)
#define _m015 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PD_BUFFER.MetaDataV0.RxIPHeaderChecksumSucceeded", rx_ip_header_checksum_succeeded, 0x60, 0x1, true, 0x9963997eb433216a, 1, uint32_t)
#define _m016 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PD_BUFFER.MetaDataV0.RxTCPChecksumSucceeded", rx_tcp_checksum_succeeded, 0x61, 0x1, true, 0xf035893040e502f0, 1, uint32_t)
#define _m017 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PD_BUFFER.MetaDataV0.RxUDPChecksumSucceeded", rx_udp_checksum_succeeded, 0x62, 0x1, true, 0xa9e148407ae8c82c, 1, uint32_t)
#define _m018 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PD_BUFFER.MetaDataV0.RxIPHeaderChecksumFailed", rx_ip_header_checksum_failed, 0x63, 0x1, true, 0x4cec2aa90f74ae62, 1, uint32_t)
#define _m019 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PD_BUFFER.MetaDataV0.RxTCPChecksumFailed", rx_tcp_checksum_failed, 0x64, 0x1, true, 0x341e5e67b5336b9b, 1, uint32_t)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_PD_BUFFER.PDClientReserved", pd_client_reserved, 0x80, 0x40, true, 0x794fc76d8cb604a2)
#define _m020 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PD_BUFFER.MetaDataV0.RxUDPChecksumFailed", rx_udp_checksum_failed, 0x65, 0x1, true, 0x3c8f8368c6da715e, 1, uint32_t)
#define _m021 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PD_BUFFER.MetaDataV0.RxHashComputed", rx_hash_computed, 0x66, 0x1, true, 0x7c1eee7c64fbc3f4, 1, uint32_t)
#define _m022 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PD_BUFFER.MetaDataV0.RxHashWithL4PortNumbers", rx_hash_with_l4_port_numbers, 0x67, 0x1, true, 0xb8af22bea60a13a9, 1, uint32_t)
#define _m023 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PD_BUFFER.MetaDataV0.RxGftDirectionIngress", rx_gft_direction_ingress, 0x68, 0x1, true, 0xe06fcf6c5a5209b4, 1, uint32_t)
#define _m024 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PD_BUFFER.MetaDataV0.RxGftExceptionPacket", rx_gft_exception_packet, 0x69, 0x1, true, 0x16baabfad2c214fd, 1, uint32_t)
#define _m025 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PD_BUFFER.MetaDataV0.RxGftCopyPacket", rx_gft_copy_packet, 0x6a, 0x1, true, 0xd4a55e26a284a8d9, 1, uint32_t)
#define _m026 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PD_BUFFER.MetaDataV0.RxGftSamplePacket", rx_gft_sample_packet, 0x6b, 0x1, true, 0x411b6f08b89f0b3, 1, uint32_t)
#define _m027 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "_PD_BUFFER.MetaDataV0.RxReserved1", rx_reserved1, 0x6c, 0x4, true, 0x1f44752ce8de19df, 4, uint32_t)
#define _m028 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint16_t), "_PD_BUFFER.MetaDataV0.RxCoalescedSegCount", rx_coalesced_seg_count, 0x70, 0x10, true, 0x9f87d6d7c7ee9fee, 16, uint32_t)
#define _m029 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PD_BUFFER.MetaDataV0.RxRscTcpTimestampDelta", rx_rsc_tcp_timestamp_delta, 0x80, 0x20, true, 0x1bbc1f65da0bfe8)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_PD_BUFFER.PDClientContext", pd_client_context, 0xc0, 0x40, true, 0x9d2ec003671d5686)
#define _m030 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 2>), "_PD_BUFFER.MetaDataV0.RxOffloads", rx_offloads, 0x60, 0x40, true, 0xf59ec38ac7f80a13)
#define _m031 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PD_BUFFER.MetaDataV0.TxIsIPv4", tx_is_i_pv4, 0xa0, 0x1, true, 0x1cb6c2c3b60cc081, 1, uint32_t)
#define _m032 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PD_BUFFER.MetaDataV0.TxIsIPv6", tx_is_i_pv6, 0xa1, 0x1, true, 0x65e7b8018dd4848, 1, uint32_t)
#define _m033 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint10_t), "_PD_BUFFER.MetaDataV0.TxTransportHeaderOffset", tx_transport_header_offset, 0xa2, 0xa, true, 0x2733fc34f757b06, 10, uint32_t)
#define _m034 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint20_t), "_PD_BUFFER.MetaDataV0.TxMSS", tx_mss, 0xac, 0x14, true, 0x79394496cad8fe6e, 20, uint32_t)
#define _m035 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PD_BUFFER.MetaDataV0.TxComputeIPHeaderChecksum", tx_compute_ip_header_checksum, 0xc0, 0x1, true, 0x29bed9bd047a9abb, 1, uint32_t)
#define _m036 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PD_BUFFER.MetaDataV0.TxComputeTCPChecksum", tx_compute_tcp_checksum, 0xc1, 0x1, true, 0xfe68089c3be7fa50, 1, uint32_t)
#define _m037 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PD_BUFFER.MetaDataV0.TxComputeUDPChecksum", tx_compute_udp_checksum, 0xc2, 0x1, true, 0x531399560db9a298, 1, uint32_t)
#define _m038 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PD_BUFFER.MetaDataV0.TxIsEncapsulatedPacket", tx_is_encapsulated_packet, 0xc3, 0x1, true, 0xe0b93c1632259f64, 1, uint32_t)
#define _m039 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PD_BUFFER.MetaDataV0.TxInnerPacketOffsetsValid", tx_inner_packet_offsets_valid, 0xc4, 0x1, true, 0x2a62c1d7d9dc3ed0, 1, uint32_t)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t*), "_PD_BUFFER.DataBufferVirtualAddress", data_buffer_virtual_address, 0x100, 0x40, true, 0x811ead28a4bd932c)
#define _m040 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint11_t), "_PD_BUFFER.MetaDataV0.TxReserved1", tx_reserved1, 0xc5, 0xb, true, 0x7acf6e87ea8cc41e, 11, uint32_t)
#define _m041 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint8_t), "_PD_BUFFER.MetaDataV0.TxInnerFrameOffset", tx_inner_frame_offset, 0xd0, 0x8, true, 0xc8a477210bd8a031, 8, uint32_t)
#define _m042 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint6_t), "_PD_BUFFER.MetaDataV0.TxInnerIpHeaderRelativeOffset", tx_inner_ip_header_relative_offset, 0xd8, 0x6, true, 0xb593cfb960983644, 6, uint32_t)
#define _m043 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PD_BUFFER.MetaDataV0.TxInnerIsIPv6", tx_inner_is_i_pv6, 0xde, 0x1, true, 0x492a124c3690e558, 1, uint32_t)
#define _m044 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PD_BUFFER.MetaDataV0.TxInnerTcpOptionsPresent", tx_inner_tcp_options_present, 0xdf, 0x1, true, 0x74bb79d40f00da61, 1, uint32_t)
#define _m045 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 2>), "_PD_BUFFER.MetaDataV0.TxOffloads", tx_offloads, 0xa0, 0x40, true, 0x3cf02e0351a1778a)
#define _m046 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::pd_buffer_virtual_subnet_info_t), "_PD_BUFFER.MetaDataV0.VirtualSubnetInfo", virtual_subnet_info, 0xe0, 0x20, true, 0x330c60923d108805)
#define _m047 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::pd_buffer_8021q_info_t), "_PD_BUFFER.MetaDataV0.Ieee8021qInfo", ieee8021q_info, 0x100, 0x10, true, 0x53f728deaef82636)
#define _m048 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_PD_BUFFER.MetaDataV0.GftSourceVPortId", gft_source_v_port_id, 0x110, 0x10, true, 0xdf6237fdddd6a80b)
#define _m049 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PD_BUFFER.MetaDataV0.ProviderScratch", provider_scratch, 0x140, 0x40, true, 0x54bdc2b6559abf92)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_PD_BUFFER.DataBufferDmaLogicalAddress", data_buffer_dma_logical_address, 0x140, 0x40, true, 0xaeb4b86808b180f7)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PD_BUFFER.DataBufferSize", data_buffer_size, 0x180, 0x20, true, 0xf75eda9b68cbbc07)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_PD_BUFFER.PDClientContextSize", pd_client_context_size, 0x1a0, 0x10, true, 0x823c78a406ebe9a3)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_PD_BUFFER.Attributes", attributes, 0x1b0, 0x10, true, 0x4b792d7d4875c291)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_PD_BUFFER.Flags", flags, 0x1c0, 0x10, true, 0xe9e7635321ed1122)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_PD_BUFFER.DataStart", data_start, 0x1d0, 0x10, true, 0x255e98f1dd817f2)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PD_BUFFER.DataLength", data_length, 0x1e0, 0x20, true, 0xa22c5b02d8c0581b)
#define _m50 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_meta_data_v0_t), "_PD_BUFFER.MetaDataV0", meta_data_v0, 0x200, 0x80, true, 0xe7c8453820cd4d16)
#else
#define _m00
#define _m01
#define _m012
#define _m013
#define _m014
#define _m015
#define _m016
#define _m017
#define _m018
#define _m019
#define _m02
#define _m020
#define _m021
#define _m022
#define _m023
#define _m024
#define _m025
#define _m026
#define _m027
#define _m028
#define _m029
#define _m03
#define _m030
#define _m031
#define _m032
#define _m033
#define _m034
#define _m035
#define _m036
#define _m037
#define _m038
#define _m039
#define _m04
#define _m040
#define _m041
#define _m042
#define _m043
#define _m044
#define _m045
#define _m046
#define _m047
#define _m048
#define _m049
#define _m05
#define _m06
#define _m07
#define _m08
#define _m09
#define _m10
#define _m11
#define _m50
#endif