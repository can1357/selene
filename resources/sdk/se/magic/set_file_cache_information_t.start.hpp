#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SE_SET_FILE_CACHE_INFORMATION.Size", size, 0x0, 0x20, true, 0xa26c46643c7ce9d7)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_SE_SET_FILE_CACHE_INFORMATION.CatalogDirectoryPath", catalog_directory_path, 0x40, 0x80, true, 0x84e0584122f9b742)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(se_set_file_cache_origin_claim_information_t ), "_SE_SET_FILE_CACHE_INFORMATION.OriginClaimInfo", origin_claim_info, 0x0, 0x0, false, 0x103f118214b0d072)
#else
#define _m00
#define _m01
#define _m02
#endif