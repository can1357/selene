#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_tlgProviderMetadata_t.Type", type, 0x0, 0x8, true, 0x39da2a29966f9fc3)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_tlgProviderMetadata_t.ProviderId", provider_id, 0x8, 0x80, true, 0xc4ff0787b55988fd)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_tlgProviderMetadata_t.RemainingSize", remaining_size, 0x88, 0x10, true, 0x837d7a1c7cede612)
#else
#define _m00
#define _m01
#define _m02
#endif