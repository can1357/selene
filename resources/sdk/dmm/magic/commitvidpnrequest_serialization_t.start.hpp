#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DMM_COMMITVIDPNREQUEST_SERIALIZATION.AffectedVidPnSourceId", affected_vid_pn_source_id, 0x0, 0x20, true, 0x5fca1eeac40fbc1a)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct dmm::commitvidpnrequest_diaginfo_t), "_DMM_COMMITVIDPNREQUEST_SERIALIZATION.RequestDiagInfo", request_diag_info, 0x20, 0x60, true, 0xc8c2980cc4636078)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct dmm::vidpn_serialization_t), "_DMM_COMMITVIDPNREQUEST_SERIALIZATION.VidPnSerialization", vid_pn_serialization, 0x80, 0x60, true, 0x41e2eeb179771a3f)
#else
#define _m00
#define _m01
#define _m02
#endif