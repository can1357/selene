#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ahc::service_lookup_t), "_AHC_SERVICE_DATA.Lookup", lookup, 0x0, 0x80, true, 0xb5de4fd65368d91a)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ahc::service_update_t), "_AHC_SERVICE_DATA.Update", update, 0x280, 0x0, true, 0x81642a2a7b613d23)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ahc::service_datacache_t), "_AHC_SERVICE_DATA.Cache", cache, 0x480, 0xc0, true, 0xf8903f2ed7290d83)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ahc::service_lookup_cdb_t), "_AHC_SERVICE_DATA.LookupCdb", lookup_cdb, 0x740, 0x80, true, 0xf57fd1e12f33d4cc)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ahc::service_clear_t), "_AHC_SERVICE_DATA.Clear", clear, 0x7c0, 0x20, true, 0xa8a62276c82e2115)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ahc::service_remove_t), "_AHC_SERVICE_DATA.Remove", remove, 0x800, 0x80, true, 0xb2e3906bd5908b4c)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ahc::service_hwid_query_t), "_AHC_SERVICE_DATA.HwIdQuery", hw_id_query, 0x980, 0xc0, true, 0x37c7cec2dc551930)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_AHC_SERVICE_DATA.DriverStatus", driver_status, 0xb00, 0x20, true, 0xfa6472ac191ee589)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_AHC_SERVICE_DATA.ParamsOut", params_out, 0xb40, 0x40, true, 0x1d2221f0594c38f7)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_AHC_SERVICE_DATA.ParamsOutSize", params_out_size, 0xb80, 0x20, true, 0x5b7c640dd86f21af)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ahc::service_init_process_data_t), "_AHC_SERVICE_DATA.InitData", init_data, 0xa40, 0xc0, true, 0x89a25150b6e8adbe)
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
#endif