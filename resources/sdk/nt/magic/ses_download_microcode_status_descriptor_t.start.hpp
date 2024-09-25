#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_SES_DOWNLOAD_MICROCODE_STATUS_DESCRIPTOR.SubEnclosureId", sub_enclosure_id, 0x8, 0x8, true, 0x7b5ceccdad5faaa6)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_SES_DOWNLOAD_MICROCODE_STATUS_DESCRIPTOR.Status", status, 0x10, 0x8, true, 0xa36d0975cc92345e)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_SES_DOWNLOAD_MICROCODE_STATUS_DESCRIPTOR.AdditionalStatus", additional_status, 0x18, 0x8, true, 0x5a99ed273a712419)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 4>), "_SES_DOWNLOAD_MICROCODE_STATUS_DESCRIPTOR.MaximumImageSize", maximum_image_size, 0x20, 0x20, true, 0x7a7f69404290f55)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_SES_DOWNLOAD_MICROCODE_STATUS_DESCRIPTOR.ExpectedBufferId", expected_buffer_id, 0x58, 0x8, true, 0x6706c15e19ca37b8)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_SES_DOWNLOAD_MICROCODE_STATUS_DESCRIPTOR.ExpectedBufferOffset", expected_buffer_offset, 0x60, 0x8, true, 0x1646b1590f7cad5a)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif