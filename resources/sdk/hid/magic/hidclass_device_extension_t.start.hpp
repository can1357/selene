#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct hid::device_extension_t), "_HIDCLASS_DEVICE_EXTENSION.hidExt", hid_ext, 0x0, 0xc0, true, 0xbd342a931efb82de)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_HIDCLASS_DEVICE_EXTENSION.isClientPdo", is_client_pdo, 0xc0, 0x8, true, 0x987b5201a4cd4b39)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HIDCLASS_DEVICE_EXTENSION.Signature", signature, 0xe0, 0x20, true, 0x60cf87f588125987)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct hid::fdo_extension_t), "_HIDCLASS_DEVICE_EXTENSION.fdoExt", fdo_ext, 0x100, 0x80, true, 0x5c6ad6c584bd02fa)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct hid::pdo_extension_t), "_HIDCLASS_DEVICE_EXTENSION.pdoExt", pdo_ext, 0x100, 0xc0, true, 0xc80631e4952ac17c)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif