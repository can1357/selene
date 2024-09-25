#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_802_11_ASSOCIATION_INFORMATION.Length", length, 0x0, 0x20, true, 0x1ab52d2c3f05c538)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_NDIS_802_11_ASSOCIATION_INFORMATION.AvailableRequestFixedIEs", available_request_fixed_i_es, 0x20, 0x10, true, 0x484b87ec54e978de)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::_802_11_ai_reqfi_t), "_NDIS_802_11_ASSOCIATION_INFORMATION.RequestFixedIEs", request_fixed_i_es, 0x30, 0x50, true, 0x9c7ed0eb272c5370)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_802_11_ASSOCIATION_INFORMATION.RequestIELength", request_ie_length, 0x80, 0x20, true, 0x2a792fa9e819fc5a)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_802_11_ASSOCIATION_INFORMATION.OffsetRequestIEs", offset_request_i_es, 0xa0, 0x20, true, 0x75f2afc537c8c001)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_NDIS_802_11_ASSOCIATION_INFORMATION.AvailableResponseFixedIEs", available_response_fixed_i_es, 0xc0, 0x10, true, 0x5937d35e60b51acc)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::_802_11_ai_resfi_t), "_NDIS_802_11_ASSOCIATION_INFORMATION.ResponseFixedIEs", response_fixed_i_es, 0xd0, 0x30, true, 0xb90910c8c01e985f)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_802_11_ASSOCIATION_INFORMATION.ResponseIELength", response_ie_length, 0x100, 0x20, true, 0xe963ddeada2605ee)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_802_11_ASSOCIATION_INFORMATION.OffsetResponseIEs", offset_response_i_es, 0x120, 0x20, true, 0x52350c2a435a3099)
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
#endif