#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_DXGK_OPM_INTERFACE_3.Size", size, 0x0, 0x10, true, 0xc26a422e30179f5b)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_DXGK_OPM_INTERFACE_3.Version", version, 0x10, 0x10, true, 0x4ac7ed85c4811dfc)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_DXGK_OPM_INTERFACE_3.Context", context, 0x40, 0x40, true, 0x1e4882f8abe779ab)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_DXGK_OPM_INTERFACE_3.InterfaceReference", interface_reference, 0x80, 0x40, true, 0x864ce3aaa7dc452e)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_DXGK_OPM_INTERFACE_3.InterfaceDereference", interface_dereference, 0xc0, 0x40, true, 0xf6597d1ffd08d47b)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(dxgkddi_opm_get_certificate_size_t ), "_DXGK_OPM_INTERFACE_3.DxgkDdiOPMGetCertificateSize", dxgk_ddi_opm_get_certificate_size, 0x100, 0x40, true, 0x54a3dae291e68b7)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(dxgkddi_opm_get_certificate_t ), "_DXGK_OPM_INTERFACE_3.DxgkDdiOPMGetCertificate", dxgk_ddi_opm_get_certificate, 0x140, 0x40, true, 0x8287a134d60032e)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(dxgkddi_opm_create_protected_output_t ), "_DXGK_OPM_INTERFACE_3.DxgkDdiOPMCreateProtectedOutput", dxgk_ddi_opm_create_protected_output, 0x180, 0x40, true, 0x8aafc92854d92e6)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(dxgkddi_opm_get_random_number_t ), "_DXGK_OPM_INTERFACE_3.DxgkDdiOPMGetRandomNumber", dxgk_ddi_opm_get_random_number, 0x1c0, 0x40, true, 0x9694d3734a678317)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(dxgkddi_opm_set_signing_key_and_sequence_numbers_t ), "_DXGK_OPM_INTERFACE_3.DxgkDdiOPMSetSigningKeyAndSequenceNumbers", dxgk_ddi_opm_set_signing_key_and_sequence_numbers, 0x200, 0x40, true, 0x794c905755b8cee2)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(dxgkddi_opm_get_information_t ), "_DXGK_OPM_INTERFACE_3.DxgkDdiOPMGetInformation", dxgk_ddi_opm_get_information, 0x240, 0x40, true, 0x6ffee1565dea3745)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(dxgkddi_opm_get_copp_compatible_information_t ), "_DXGK_OPM_INTERFACE_3.DxgkDdiOPMGetCOPPCompatibleInformation", dxgk_ddi_opm_get_copp_compatible_information, 0x280, 0x40, true, 0xcf52602fd9c6686)
#define _m12 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(dxgkddi_opm_configure_protected_output_t ), "_DXGK_OPM_INTERFACE_3.DxgkDdiOPMConfigureProtectedOutput", dxgk_ddi_opm_configure_protected_output, 0x2c0, 0x40, true, 0xdb8a8c2425bcd6f8)
#define _m13 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, void*)>*), "_DXGK_OPM_INTERFACE_3.DxgkDdiOPMDestroyProtectedOutput", dxgk_ddi_opm_destroy_protected_output, 0x300, 0x40, true, 0x515074a120e6d582)
#define _m14 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(dxgkddi_opm_create_protected_output_nonlocal_display_t ), "_DXGK_OPM_INTERFACE_3.DxgkDdiOPMCreateProtectedOutputNonLocalDisplay", dxgk_ddi_opm_create_protected_output_non_local_display, 0x340, 0x40, true, 0x4186df79f7a75a1d)
#define _m15 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, uint32_t, void*)>*), "_DXGK_OPM_INTERFACE_3.DxgkDdiOPMSetSrmList", dxgk_ddi_opm_set_srm_list, 0x380, 0x40, true, 0xb4a9bf1f00a5b469)
#define _m16 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, uint32_t*, void*)>*), "_DXGK_OPM_INTERFACE_3.DxgkDdiOPMGetSrmListVersion", dxgk_ddi_opm_get_srm_list_version, 0x3c0, 0x40, true, 0x8663d40af5f532ec)
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
#define _m16
#endif