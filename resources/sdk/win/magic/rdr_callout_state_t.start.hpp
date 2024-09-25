#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_RDR_CALLOUT_STATE.LastError", last_error, 0x0, 0x20, true, 0xebd2d2daf397e5a8)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_RDR_CALLOUT_STATE.LastEEInfo", last_ee_info, 0x40, 0x40, true, 0x221d586dbf44ce47)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum rpc::http_redirector_stage_t), "_RDR_CALLOUT_STATE.LastCalledStage", last_called_stage, 0x80, 0x20, true, 0xdef2c8a77e5c43bc)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t*), "_RDR_CALLOUT_STATE.ServerName", server_name, 0xc0, 0x40, true, 0x325178e2bc553bbc)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t*), "_RDR_CALLOUT_STATE.ServerPort", server_port, 0x100, 0x40, true, 0x9743833a43af7bf0)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t*), "_RDR_CALLOUT_STATE.RemoteUser", remote_user, 0x140, 0x40, true, 0x51edda0ace5408dc)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t*), "_RDR_CALLOUT_STATE.AuthType", auth_type, 0x180, 0x40, true, 0x3144e6b38677da63)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_RDR_CALLOUT_STATE.ResourceTypePresent", resource_type_present, 0x1c0, 0x8, true, 0x393e5da1bdd9162)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_RDR_CALLOUT_STATE.SessionIdPresent", session_id_present, 0x1c8, 0x8, true, 0x7f69937c59ff322f)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_RDR_CALLOUT_STATE.InterfacePresent", interface_present, 0x1d0, 0x8, true, 0x3f717851d660e4b3)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_RDR_CALLOUT_STATE.ResourceType", resource_type, 0x1e0, 0x80, true, 0x7d64b11071ba065)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_RDR_CALLOUT_STATE.SessionId", session_id, 0x260, 0x80, true, 0x868d5d34ee17bcfb)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rpc::syntax_identifier_t), "_RDR_CALLOUT_STATE.Interface", interface, 0x2e0, 0xa0, true, 0x699288c4637db38a)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_RDR_CALLOUT_STATE.CertContext", cert_context, 0x380, 0x40, true, 0xc05ad5f020a3b8ea)
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
#endif