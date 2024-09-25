#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wil::feature_store_t), "wil_details_StagingConfig.store", store, 0x0, 0x20, true, 0x47a9babe608f2e84)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "wil_details_StagingConfig.forUpdate", for_update, 0x20, 0x20, true, 0xe55f7b655afc5594)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "wil_details_StagingConfig.readChangeStamp", read_change_stamp, 0x40, 0x20, true, 0xd9e17ea76963f9dd)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "wil_details_StagingConfig.readVersion", read_version, 0x60, 0x8, true, 0x7ce113053158c081)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "wil_details_StagingConfig.modified", modified, 0x80, 0x20, true, 0xd7498cfab92d4e8d)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wil::details_staging_config_header_t*), "wil_details_StagingConfig.header", header, 0xc0, 0x40, true, 0xc9186be136734048)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wil::details_staging_config_feature_t*), "wil_details_StagingConfig.features", features, 0x100, 0x40, true, 0xd2dada15e5900e74)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wil::details_staging_config_usage_trigger_t*), "wil_details_StagingConfig.triggers", triggers, 0x140, 0x40, true, 0x717881510cae82fd)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "wil_details_StagingConfig.changedInSession", changed_in_session, 0x180, 0x20, true, 0x784623c3a46309ed)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "wil_details_StagingConfig.buffer", buffer, 0x1c0, 0x40, true, 0x9c47ebbfd9b76cf0)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "wil_details_StagingConfig.bufferSize", buffer_size, 0x200, 0x40, true, 0xded450d2e3be092f)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "wil_details_StagingConfig.bufferAlloc", buffer_alloc, 0x240, 0x40, true, 0x63c76c0747d130f5)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "wil_details_StagingConfig.bufferOwned", buffer_owned, 0x280, 0x20, true, 0x72c252a7752bed0b)
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
#endif