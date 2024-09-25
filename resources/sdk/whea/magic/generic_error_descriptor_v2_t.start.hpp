#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_WHEA_GENERIC_ERROR_DESCRIPTOR_V2.Type", type, 0x0, 0x10, true, 0x8c2a561c44c8b23)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_WHEA_GENERIC_ERROR_DESCRIPTOR_V2.Enabled", enabled, 0x18, 0x8, true, 0x3bef41353e9991da)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_GENERIC_ERROR_DESCRIPTOR_V2.ErrStatusBlockLength", err_status_block_length, 0x20, 0x20, true, 0x7bd2f41dcff085f0)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_GENERIC_ERROR_DESCRIPTOR_V2.RelatedErrorSourceId", related_error_source_id, 0x40, 0x20, true, 0x803177d234fda8da)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_WHEA_GENERIC_ERROR_DESCRIPTOR_V2.ErrStatusAddressSpaceID", err_status_address_space_id, 0x60, 0x8, true, 0x5448b274dc031625)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_WHEA_GENERIC_ERROR_DESCRIPTOR_V2.ErrStatusAddressBitWidth", err_status_address_bit_width, 0x68, 0x8, true, 0x5cce08c9e614b8e5)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_WHEA_GENERIC_ERROR_DESCRIPTOR_V2.ErrStatusAddressBitOffset", err_status_address_bit_offset, 0x70, 0x8, true, 0xc37a0478d3d672ef)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_WHEA_GENERIC_ERROR_DESCRIPTOR_V2.ErrStatusAddressAccessSize", err_status_address_access_size, 0x78, 0x8, true, 0xfd000ea5c739cb3d)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_WHEA_GENERIC_ERROR_DESCRIPTOR_V2.ErrStatusAddress", err_status_address, 0x80, 0x40, true, 0x97fe511cfe83cc36)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct whea::notification_descriptor_t), "_WHEA_GENERIC_ERROR_DESCRIPTOR_V2.Notify", notify, 0xc0, 0xe0, true, 0xa1aee496c671f6b2)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_WHEA_GENERIC_ERROR_DESCRIPTOR_V2.ReadAckAddressSpaceID", read_ack_address_space_id, 0x1a0, 0x8, true, 0xb58165182beea2a7)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_WHEA_GENERIC_ERROR_DESCRIPTOR_V2.ReadAckAddressBitWidth", read_ack_address_bit_width, 0x1a8, 0x8, true, 0x3bd05e68cda403d3)
#define _m12 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_WHEA_GENERIC_ERROR_DESCRIPTOR_V2.ReadAckAddressBitOffset", read_ack_address_bit_offset, 0x1b0, 0x8, true, 0xbdd2f6e68365bd61)
#define _m13 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_WHEA_GENERIC_ERROR_DESCRIPTOR_V2.ReadAckAddressAccessSize", read_ack_address_access_size, 0x1b8, 0x8, true, 0xac10b8c4eeb278dd)
#define _m14 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_WHEA_GENERIC_ERROR_DESCRIPTOR_V2.ReadAckAddress", read_ack_address, 0x1c0, 0x40, true, 0x4252dd260559bea1)
#define _m15 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_WHEA_GENERIC_ERROR_DESCRIPTOR_V2.ReadAckPreserveMask", read_ack_preserve_mask, 0x200, 0x40, true, 0xcfe8e66747ea749a)
#define _m16 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_WHEA_GENERIC_ERROR_DESCRIPTOR_V2.ReadAckWriteMask", read_ack_write_mask, 0x240, 0x40, true, 0xb33c33a8af64a142)
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