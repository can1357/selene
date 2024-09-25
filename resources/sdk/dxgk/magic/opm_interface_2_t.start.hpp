#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_DXGK_OPM_INTERFACE_2.Size", size, 0x0, 0x10, true, 0xc61e7c1014f154f2)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_DXGK_OPM_INTERFACE_2.Version", version, 0x10, 0x10, true, 0x3950ca47ac15d09d)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_DXGK_OPM_INTERFACE_2.Context", context, 0x40, 0x40, true, 0x1d70a5ad72501133)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_DXGK_OPM_INTERFACE_2.InterfaceReference", interface_reference, 0x80, 0x40, true, 0xe091c366b8a5479a)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_DXGK_OPM_INTERFACE_2.InterfaceDereference", interface_dereference, 0xc0, 0x40, true, 0x282fd8e1bb75d43b)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(dxgkddi_opm_get_certificate_size_t ), "_DXGK_OPM_INTERFACE_2.DxgkDdiOPMGetCertificateSize", dxgk_ddi_opm_get_certificate_size, 0x100, 0x40, true, 0x9dc0838f96b44d7d)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(dxgkddi_opm_get_certificate_t ), "_DXGK_OPM_INTERFACE_2.DxgkDdiOPMGetCertificate", dxgk_ddi_opm_get_certificate, 0x140, 0x40, true, 0xb975af912a467c07)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(dxgkddi_opm_create_protected_output_t ), "_DXGK_OPM_INTERFACE_2.DxgkDdiOPMCreateProtectedOutput", dxgk_ddi_opm_create_protected_output, 0x180, 0x40, true, 0xd89d1625a544919d)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(dxgkddi_opm_get_random_number_t ), "_DXGK_OPM_INTERFACE_2.DxgkDdiOPMGetRandomNumber", dxgk_ddi_opm_get_random_number, 0x1c0, 0x40, true, 0x5bdf7f234f91df28)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(dxgkddi_opm_set_signing_key_and_sequence_numbers_t ), "_DXGK_OPM_INTERFACE_2.DxgkDdiOPMSetSigningKeyAndSequenceNumbers", dxgk_ddi_opm_set_signing_key_and_sequence_numbers, 0x200, 0x40, true, 0xfd4f7d600da1dfcf)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(dxgkddi_opm_get_information_t ), "_DXGK_OPM_INTERFACE_2.DxgkDdiOPMGetInformation", dxgk_ddi_opm_get_information, 0x240, 0x40, true, 0xec3acdf37a21fc8e)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(dxgkddi_opm_get_copp_compatible_information_t ), "_DXGK_OPM_INTERFACE_2.DxgkDdiOPMGetCOPPCompatibleInformation", dxgk_ddi_opm_get_copp_compatible_information, 0x280, 0x40, true, 0x5be02078f028b66d)
#define _m12 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(dxgkddi_opm_configure_protected_output_t ), "_DXGK_OPM_INTERFACE_2.DxgkDdiOPMConfigureProtectedOutput", dxgk_ddi_opm_configure_protected_output, 0x2c0, 0x40, true, 0x9912dcc57513cd68)
#define _m13 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, void*)>*), "_DXGK_OPM_INTERFACE_2.DxgkDdiOPMDestroyProtectedOutput", dxgk_ddi_opm_destroy_protected_output, 0x300, 0x40, true, 0xde6f83aca6273782)
#define _m14 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(dxgkddi_opm_create_protected_output_nonlocal_display_t ), "_DXGK_OPM_INTERFACE_2.DxgkDdiOPMCreateProtectedOutputNonLocalDisplay", dxgk_ddi_opm_create_protected_output_non_local_display, 0x340, 0x40, true, 0xa4f1402352c8d847)
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
#define _m14
#endif