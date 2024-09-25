#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_WHEA_GENERIC_ERROR_DESCRIPTOR.Type", type, 0x0, 0x10, true, 0xbb979bf92fd4d860)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_WHEA_GENERIC_ERROR_DESCRIPTOR.Enabled", enabled, 0x18, 0x8, true, 0x5791288c2cc57e39)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_GENERIC_ERROR_DESCRIPTOR.ErrStatusBlockLength", err_status_block_length, 0x20, 0x20, true, 0x71bd3865382467cc)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_GENERIC_ERROR_DESCRIPTOR.RelatedErrorSourceId", related_error_source_id, 0x40, 0x20, true, 0xc083594cea2c23ea)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_WHEA_GENERIC_ERROR_DESCRIPTOR.ErrStatusAddressSpaceID", err_status_address_space_id, 0x60, 0x8, true, 0x3e7c5ec5f69d6ae9)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_WHEA_GENERIC_ERROR_DESCRIPTOR.ErrStatusAddressBitWidth", err_status_address_bit_width, 0x68, 0x8, true, 0xe36b476080296526)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_WHEA_GENERIC_ERROR_DESCRIPTOR.ErrStatusAddressBitOffset", err_status_address_bit_offset, 0x70, 0x8, true, 0x20729823dda8b8dd)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_WHEA_GENERIC_ERROR_DESCRIPTOR.ErrStatusAddressAccessSize", err_status_address_access_size, 0x78, 0x8, true, 0xc5003f6620fadea)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_WHEA_GENERIC_ERROR_DESCRIPTOR.ErrStatusAddress", err_status_address, 0x80, 0x40, true, 0x835b2c491ea4dd92)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct whea::notification_descriptor_t), "_WHEA_GENERIC_ERROR_DESCRIPTOR.Notify", notify, 0xc0, 0xe0, true, 0xf4216836afea9adb)
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
#endif