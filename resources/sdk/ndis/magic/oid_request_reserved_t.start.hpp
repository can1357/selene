#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_NDIS_OID_REQUEST_RESERVED.Entry", entry, 0x0, 0x80, true, 0x95d88e7f6b965e5d)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::oid_request_t*), "_NDIS_OID_REQUEST_RESERVED.NextRequest", next_request, 0x0, 0x40, true, 0xf689fd3b0757cf29)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_NDIS_OID_REQUEST_RESERVED.Status", status, 0x40, 0x20, true, 0x66c259f3b7aa084d)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::oid_request_flags_t), "_NDIS_OID_REQUEST_RESERVED.Flags", flags, 0x80, 0x20, true, 0x9a81cdae370b6e88)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_OID_REQUEST_RESERVED.OidTableIndex", oid_table_index, 0xa0, 0x20, true, 0x91ac59e930d9d5c7)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::oid_request_t*), "_NDIS_OID_REQUEST_RESERVED.OidRequest", oid_request, 0xc0, 0x40, true, 0x9d5987ecd01345f3)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::request_t*), "_NDIS_OID_REQUEST_RESERVED.Request", request, 0xc0, 0x40, true, 0xa5b0b2cf4473a670)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_NDIS_OID_REQUEST_RESERVED.SourceHandle", source_handle, 0x100, 0x40, true, 0x604c88f83346d6d7)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kevent_t), "_NDIS_OID_REQUEST_RESERVED.Event", event, 0x140, 0xc0, true, 0xc829bc42c807238a)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_NDIS_OID_REQUEST_RESERVED.NdisVcHandle", ndis_vc_handle, 0x200, 0x40, true, 0x1c765959e3b6b99c)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_NDIS_OID_REQUEST_RESERVED.CoNdis.PartyContext", party_context, 0x0, 0x40, true, 0x27813c51e945d636)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_NDIS_OID_REQUEST_RESERVED.CoNdis.CallMgrContext", call_mgr_context, 0x40, 0x40, true, 0x23ffaa7b2762696c)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_NDIS_OID_REQUEST_RESERVED.CoNdis.VcContext", vc_context, 0x80, 0x40, true, 0xd2a97ce6b33effbd)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_NDIS_OID_REQUEST_RESERVED.CoNdis.AfContext", af_context, 0xc0, 0x40, true, 0xbb909b59acd8be3)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_co_ndis_t), "_NDIS_OID_REQUEST_RESERVED.CoNdis", co_ndis, 0x140, 0x0, true, 0xbc3c8dc1349a44b6)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_NDIS_OID_REQUEST_RESERVED.StartCycle", start_cycle, 0x240, 0x40, true, 0x3e8ca194fd3e6e52)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::request_xlation_context_t*), "_NDIS_OID_REQUEST_RESERVED.pOidXlationContext", p_oid_xlation_context, 0x240, 0x40, true, 0xa08a44466c23b51d)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_OID_REQUEST_RESERVED.OriginalBufferLength", original_buffer_length, 0x280, 0x20, true, 0x29db94e658ca5440)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_OID_REQUEST_RESERVED.SavedOid", saved_oid, 0x240, 0x20, true, 0xa563c024fbd1d19c)
#define _m19 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_NDIS_OID_REQUEST_RESERVED.SavedInfoBuf", saved_info_buf, 0x280, 0x40, true, 0x8929158afe582863)
#define _m20 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_OID_REQUEST_RESERVED.SavedInfoBufLen", saved_info_buf_len, 0x2c0, 0x20, true, 0x7e2bca50fa68a1fc)
#define _m21 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_OID_REQUEST_RESERVED.RequestBuffer", request_buffer, 0x2e0, 0x20, true, 0xbfe8c5986bf75796)
#define _m22 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::vf_block_t*), "_NDIS_OID_REQUEST_RESERVED.IovContext.VFBlock", vf_block, 0x0, 0x40, true, 0x6880e1bfaa0e8d9f)
#define _m23 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::vport_block_t*), "_NDIS_OID_REQUEST_RESERVED.IovContext.VPortBlock", v_port_block, 0x40, 0x40, true, 0xfe80039b2904fccb)
#define _m24 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u4_iov_context_t), "_NDIS_OID_REQUEST_RESERVED.IovContext", iov_context, 0x240, 0x80, true, 0x57b9a9adb23d6339)
#define _m25 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::wol_xlation_context_t*), "_NDIS_OID_REQUEST_RESERVED.PMContext.WolXlationContext", wol_xlation_context, 0x0, 0x40, true, 0xda26b0781698b104)
#define _m26 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_OID_REQUEST_RESERVED.PMContext.WolPatternId", wol_pattern_id, 0x40, 0x20, true, 0x74b96e96695bbb99)
#define _m27 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::packet_pattern_entry_t*), "_NDIS_OID_REQUEST_RESERVED.PMContext.SourcePacketEntry", source_packet_entry, 0x80, 0x40, true, 0x93e3d80dd8c99368)
#define _m28 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u8_pm_context_t), "_NDIS_OID_REQUEST_RESERVED.PMContext", pm_context, 0x240, 0xc0, true, 0xda9f418da9d20b3b)
#define _m29 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_NDIS_OID_REQUEST_RESERVED.OffloadParamsContext.SkipRegistryUpdate", skip_registry_update, 0x0, 0x1, true, 0xe2dc363ea7453f04, 1, uint8_t)
#define _m30 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u12_offload_params_context_t), "_NDIS_OID_REQUEST_RESERVED.OffloadParamsContext", offload_params_context, 0x240, 0x8, true, 0x68e5d2f4604b8064)
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
#define _m25
#define _m26
#define _m27
#define _m28
#define _m29
#define _m30
#endif