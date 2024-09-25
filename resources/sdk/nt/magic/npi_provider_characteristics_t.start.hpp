#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_NPI_PROVIDER_CHARACTERISTICS.Version", version, 0x0, 0x10, true, 0xd3cef7e742bb6855)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_NPI_PROVIDER_CHARACTERISTICS.Length", length, 0x10, 0x10, true, 0xf8dbecd57ad5b13a)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pnpi_provider_attach_client_fn_t ), "_NPI_PROVIDER_CHARACTERISTICS.ProviderAttachClient", provider_attach_client, 0x40, 0x40, true, 0xb7630b3e02dfde9f)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*)>*), "_NPI_PROVIDER_CHARACTERISTICS.ProviderDetachClient", provider_detach_client, 0x80, 0x40, true, 0xc7bf165a288b755b)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_NPI_PROVIDER_CHARACTERISTICS.ProviderCleanupBindingContext", provider_cleanup_binding_context, 0xc0, 0x40, true, 0x593606f7fb26ad67)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::npi_registration_instance_t), "_NPI_PROVIDER_CHARACTERISTICS.ProviderRegistrationInstance", provider_registration_instance, 0x100, 0x40, true, 0xc34dbb00d04ee6dc)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif