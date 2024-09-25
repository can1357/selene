#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_DXGK_OPM_INTERFACE.Size", size, 0x0, 0x10, true, 0xe228575f90287e4e)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_DXGK_OPM_INTERFACE.Version", version, 0x10, 0x10, true, 0x2f24ca0040baa292)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_DXGK_OPM_INTERFACE.Context", context, 0x40, 0x40, true, 0x61a441fff99fa15b)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_DXGK_OPM_INTERFACE.InterfaceReference", interface_reference, 0x80, 0x40, true, 0xfba2e8de482a308e)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_DXGK_OPM_INTERFACE.InterfaceDereference", interface_dereference, 0xc0, 0x40, true, 0x98a1d11feaa00f6e)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(dxgkddi_opm_get_certificate_size_t ), "_DXGK_OPM_INTERFACE.DxgkDdiOPMGetCertificateSize", dxgk_ddi_opm_get_certificate_size, 0x100, 0x40, true, 0xbafd96997badd7b6)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(dxgkddi_opm_get_certificate_t ), "_DXGK_OPM_INTERFACE.DxgkDdiOPMGetCertificate", dxgk_ddi_opm_get_certificate, 0x140, 0x40, true, 0x29409e9acc9cf9d0)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(dxgkddi_opm_create_protected_output_t ), "_DXGK_OPM_INTERFACE.DxgkDdiOPMCreateProtectedOutput", dxgk_ddi_opm_create_protected_output, 0x180, 0x40, true, 0x8e91440218348e6)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(dxgkddi_opm_get_random_number_t ), "_DXGK_OPM_INTERFACE.DxgkDdiOPMGetRandomNumber", dxgk_ddi_opm_get_random_number, 0x1c0, 0x40, true, 0x415b7d30af4aa4d9)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(dxgkddi_opm_set_signing_key_and_sequence_numbers_t ), "_DXGK_OPM_INTERFACE.DxgkDdiOPMSetSigningKeyAndSequenceNumbers", dxgk_ddi_opm_set_signing_key_and_sequence_numbers, 0x200, 0x40, true, 0xa9fe75e9e7f5af30)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(dxgkddi_opm_get_information_t ), "_DXGK_OPM_INTERFACE.DxgkDdiOPMGetInformation", dxgk_ddi_opm_get_information, 0x240, 0x40, true, 0x6a6ca46fb9433572)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(dxgkddi_opm_get_copp_compatible_information_t ), "_DXGK_OPM_INTERFACE.DxgkDdiOPMGetCOPPCompatibleInformation", dxgk_ddi_opm_get_copp_compatible_information, 0x280, 0x40, true, 0x516f39d38fdb076a)
#define _m12 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(dxgkddi_opm_configure_protected_output_t ), "_DXGK_OPM_INTERFACE.DxgkDdiOPMConfigureProtectedOutput", dxgk_ddi_opm_configure_protected_output, 0x2c0, 0x40, true, 0x6f5fec90ec2b2413)
#define _m13 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, void*)>*), "_DXGK_OPM_INTERFACE.DxgkDdiOPMDestroyProtectedOutput", dxgk_ddi_opm_destroy_protected_output, 0x300, 0x40, true, 0x855906249ffb7b75)
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