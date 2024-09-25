#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum nt::bdcb_classification_t), "_BDCB_IMAGE_INFORMATION.Classification", classification, 0x0, 0x20, true, 0x951025774c989df2)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_BDCB_IMAGE_INFORMATION.ImageFlags", image_flags, 0x20, 0x20, true, 0x289fc3a31d5c3644)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_BDCB_IMAGE_INFORMATION.ImageName", image_name, 0x40, 0x80, true, 0x16ac5a7171cc2b0)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_BDCB_IMAGE_INFORMATION.RegistryPath", registry_path, 0xc0, 0x80, true, 0xa24b46e9197f5367)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_BDCB_IMAGE_INFORMATION.CertificatePublisher", certificate_publisher, 0x140, 0x80, true, 0x6bce5d6050d2daf7)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_BDCB_IMAGE_INFORMATION.CertificateIssuer", certificate_issuer, 0x1c0, 0x80, true, 0xa048397f732b533a)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_BDCB_IMAGE_INFORMATION.ImageHash", image_hash, 0x240, 0x40, true, 0x65e47881c08ef8fb)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_BDCB_IMAGE_INFORMATION.CertificateThumbprint", certificate_thumbprint, 0x280, 0x40, true, 0x58398b15b6902d4d)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_BDCB_IMAGE_INFORMATION.ImageHashAlgorithm", image_hash_algorithm, 0x2c0, 0x20, true, 0xae3c5ed40ab9bd3b)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_BDCB_IMAGE_INFORMATION.ThumbprintHashAlgorithm", thumbprint_hash_algorithm, 0x2e0, 0x20, true, 0xb8342b3a849d56f5)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_BDCB_IMAGE_INFORMATION.ImageHashLength", image_hash_length, 0x300, 0x20, true, 0x3b0fde0a4a63a095)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_BDCB_IMAGE_INFORMATION.CertificateThumbprintLength", certificate_thumbprint_length, 0x320, 0x20, true, 0xc66f58faa208f59e)
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
#endif