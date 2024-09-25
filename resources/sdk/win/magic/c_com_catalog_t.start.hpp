#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "CComCatalog.m_cRef", m_c_ref, 0x2c0, 0x20, true, 0x9b7cf0af6e642edb)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::device_catalogs_t), "CComCatalog.m_deviceCatalogs", m_device_catalogs, 0x680, 0x80, true, 0x33855adb9faab09)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::i_com_catalog_internal_t*), "CComCatalog.m_pCatalogRegNative", m_p_catalog_reg_native, 0x0, 0x0, false, 0xf8d218be5b89b64c)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::i_com_catalog_internal_t*), "CComCatalog.m_pCatalogCOMBaseInCLB", m_p_catalog_com_base_in_clb, 0x0, 0x0, false, 0xf7bc91e7cb835030)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::i_com_catalog_internal_t*), "CComCatalog.m_pCatalogRegX86Wow", m_p_catalog_reg_x86_wow, 0x0, 0x0, false, 0x4911b79216f35c72)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::i_com_catalog_internal_t*), "CComCatalog.m_pCatalogRegArm32Wow", m_p_catalog_reg_arm32_wow, 0x0, 0x0, false, 0x4430e3c7bbe7fb95)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::i_com_catalog_internal_t*), "CComCatalog.m_pCatalogCLB", m_p_catalog_clb, 0x0, 0x0, false, 0x95427ec943b15cdf)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::i_com_catalog_internal_t*), "CComCatalog.m_pCatalogSxS", m_p_catalog_sx_s, 0x0, 0x0, false, 0xd249d66bb7438169)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::i_com_catalog_internal_t*), "CComCatalog.m_pCatalogBuiltInActivationStore", m_p_catalog_built_in_activation_store, 0x0, 0x0, false, 0x85430e5cdcb501e7)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::i_com_catalog_internal_t*), "CComCatalog.m_pCatalogPerUserActivationStore", m_p_catalog_per_user_activation_store, 0x0, 0x0, false, 0x913ae90ae612128b)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::i_com_catalog_internal_t*), "CComCatalog.m_pCatalogInboxAppsStore", m_p_catalog_inbox_apps_store, 0x0, 0x0, false, 0xddb25f992c9b18a9)
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