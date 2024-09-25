#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_DXGK_OPM_INTERFACE_2_JTP.Size", size, 0x0, 0x10, true, 0x14fea7689f53bf33)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_DXGK_OPM_INTERFACE_2_JTP.Version", version, 0x10, 0x10, true, 0xf84e83ca9a1d3a55)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_DXGK_OPM_INTERFACE_2_JTP.Context", context, 0x40, 0x40, true, 0xdd80172f495578a4)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_DXGK_OPM_INTERFACE_2_JTP.InterfaceReference", interface_reference, 0x80, 0x40, true, 0x6913efe962fffde1)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_DXGK_OPM_INTERFACE_2_JTP.InterfaceDereference", interface_dereference, 0xc0, 0x40, true, 0xcaedde60d1bd5682)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(dxgkddi_opm_get_certificate_size_t ), "_DXGK_OPM_INTERFACE_2_JTP.DxgkDdiOPMGetCertificateSize", dxgk_ddi_opm_get_certificate_size, 0x100, 0x40, true, 0x3e5d797ca3d7e701)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(dxgkddi_opm_get_certificate_t ), "_DXGK_OPM_INTERFACE_2_JTP.DxgkDdiOPMGetCertificate", dxgk_ddi_opm_get_certificate, 0x140, 0x40, true, 0xd0fdfb25fe9c9ec8)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(dxgkddi_opm_create_protected_output_t ), "_DXGK_OPM_INTERFACE_2_JTP.DxgkDdiOPMCreateProtectedOutput", dxgk_ddi_opm_create_protected_output, 0x180, 0x40, true, 0x39f36280aaa8ca04)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(dxgkddi_opm_get_random_number_t ), "_DXGK_OPM_INTERFACE_2_JTP.DxgkDdiOPMGetRandomNumber", dxgk_ddi_opm_get_random_number, 0x1c0, 0x40, true, 0xce0b38aca8fe7f5c)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(dxgkddi_opm_set_signing_key_and_sequence_numbers_t ), "_DXGK_OPM_INTERFACE_2_JTP.DxgkDdiOPMSetSigningKeyAndSequenceNumbers", dxgk_ddi_opm_set_signing_key_and_sequence_numbers, 0x200, 0x40, true, 0x8e25dfbd6f3cc9ff)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(dxgkddi_opm_get_information_t ), "_DXGK_OPM_INTERFACE_2_JTP.DxgkDdiOPMGetInformation", dxgk_ddi_opm_get_information, 0x240, 0x40, true, 0xd170e28117acbc3e)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(dxgkddi_opm_get_copp_compatible_information_t ), "_DXGK_OPM_INTERFACE_2_JTP.DxgkDdiOPMGetCOPPCompatibleInformation", dxgk_ddi_opm_get_copp_compatible_information, 0x280, 0x40, true, 0x9b6d1869a607ab89)
#define _m12 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(dxgkddi_opm_configure_protected_output_t ), "_DXGK_OPM_INTERFACE_2_JTP.DxgkDdiOPMConfigureProtectedOutput", dxgk_ddi_opm_configure_protected_output, 0x2c0, 0x40, true, 0xdc441e69ae79d046)
#define _m13 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, void*)>*), "_DXGK_OPM_INTERFACE_2_JTP.DxgkDdiOPMDestroyProtectedOutput", dxgk_ddi_opm_destroy_protected_output, 0x300, 0x40, true, 0x7ab4816c6bf85ead)
#define _m14 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(dxgkddi_opm_create_protected_output_virtual_mode_jtp_t ), "_DXGK_OPM_INTERFACE_2_JTP.DxgkDdiOPMCreateProtectedOutputVirtualMode", dxgk_ddi_opm_create_protected_output_virtual_mode, 0x340, 0x40, true, 0xef6685288aa250ae)
#define _m15 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(dxgkddi_opm_create_protected_output_nonlocal_display_jtp_t ), "_DXGK_OPM_INTERFACE_2_JTP.DxgkDdiOPMCreateProtectedOutputNonLocalDisplay", dxgk_ddi_opm_create_protected_output_non_local_display, 0x380, 0x40, true, 0x15571647f456f196)
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
#define _m15
#endif