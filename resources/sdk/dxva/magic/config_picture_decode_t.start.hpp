#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXVA_ConfigPictureDecode.dwFunction", dw_function, 0x0, 0x20, true, 0x3a51028853376947)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 3>), "_DXVA_ConfigPictureDecode.dwReservedBits", dw_reserved_bits, 0x20, 0x60, true, 0x171f503a493583c8)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_DXVA_ConfigPictureDecode.guidConfigBitstreamEncryption", guid_config_bitstream_encryption, 0x80, 0x80, true, 0x1703e062de3d33bd)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_DXVA_ConfigPictureDecode.guidConfigMBcontrolEncryption", guid_config_m_bcontrol_encryption, 0x100, 0x80, true, 0x671c80fb0f2f47a6)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_DXVA_ConfigPictureDecode.guidConfigResidDiffEncryption", guid_config_resid_diff_encryption, 0x180, 0x80, true, 0xd224a419c3f918ed)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXVA_ConfigPictureDecode.bConfigBitstreamRaw", b_config_bitstream_raw, 0x200, 0x8, true, 0x9908ee7d9b83d5ac)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXVA_ConfigPictureDecode.bConfigMBcontrolRasterOrder", b_config_m_bcontrol_raster_order, 0x208, 0x8, true, 0x733f4f22babc5a7d)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXVA_ConfigPictureDecode.bConfigResidDiffHost", b_config_resid_diff_host, 0x210, 0x8, true, 0x6a3106113b1ebaf7)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXVA_ConfigPictureDecode.bConfigSpatialResid8", b_config_spatial_resid8, 0x218, 0x8, true, 0xd4c52926b0277a43)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXVA_ConfigPictureDecode.bConfigResid8Subtraction", b_config_resid8_subtraction, 0x220, 0x8, true, 0x98ef29379d9d646d)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXVA_ConfigPictureDecode.bConfigSpatialHost8or9Clipping", b_config_spatial_host8or9_clipping, 0x228, 0x8, true, 0x400fc6a7d494f5be)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXVA_ConfigPictureDecode.bConfigSpatialResidInterleaved", b_config_spatial_resid_interleaved, 0x230, 0x8, true, 0xf46852a52e32aa8c)
#define _m12 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXVA_ConfigPictureDecode.bConfigIntraResidUnsigned", b_config_intra_resid_unsigned, 0x238, 0x8, true, 0x4b6b03b19eecef08)
#define _m13 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXVA_ConfigPictureDecode.bConfigResidDiffAccelerator", b_config_resid_diff_accelerator, 0x240, 0x8, true, 0x7665c0102699fb20)
#define _m14 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXVA_ConfigPictureDecode.bConfigHostInverseScan", b_config_host_inverse_scan, 0x248, 0x8, true, 0x3546bde96af8c0fc)
#define _m15 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXVA_ConfigPictureDecode.bConfigSpecificIDCT", b_config_specific_idct, 0x250, 0x8, true, 0xdc377d566874ee95)
#define _m16 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXVA_ConfigPictureDecode.bConfig4GroupedCoefs", b_config4_grouped_coefs, 0x258, 0x8, true, 0x51905f21f9332a64)
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