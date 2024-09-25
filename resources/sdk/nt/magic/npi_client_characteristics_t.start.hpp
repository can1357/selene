#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_NPI_CLIENT_CHARACTERISTICS.Version", version, 0x0, 0x10, true, 0x638d9b914fbb9eee)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_NPI_CLIENT_CHARACTERISTICS.Length", length, 0x10, 0x10, true, 0x8eb25c3173c70723)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pnpi_client_attach_provider_fn_t ), "_NPI_CLIENT_CHARACTERISTICS.ClientAttachProvider", client_attach_provider, 0x40, 0x40, true, 0x6dbb2c27394f7ff5)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*)>*), "_NPI_CLIENT_CHARACTERISTICS.ClientDetachProvider", client_detach_provider, 0x80, 0x40, true, 0x79a13eb5605bf7b3)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_NPI_CLIENT_CHARACTERISTICS.ClientCleanupBindingContext", client_cleanup_binding_context, 0xc0, 0x40, true, 0x90342391a926464c)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::npi_registration_instance_t), "_NPI_CLIENT_CHARACTERISTICS.ClientRegistrationInstance", client_registration_instance, 0x100, 0x40, true, 0x2998e32fec9c2242)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif