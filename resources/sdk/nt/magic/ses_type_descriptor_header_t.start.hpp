#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_SES_TYPE_DESCRIPTOR_HEADER.ElementType", element_type, 0x0, 0x8, true, 0xbad25c6ec2d2818a)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_SES_TYPE_DESCRIPTOR_HEADER.NumberOfPossibleElements", number_of_possible_elements, 0x8, 0x8, true, 0x3ea2c9815b7f75ca)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_SES_TYPE_DESCRIPTOR_HEADER.SubEnclosureId", sub_enclosure_id, 0x10, 0x8, true, 0x7462595f561caa8c)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_SES_TYPE_DESCRIPTOR_HEADER.TypeDescriptorTextLength", type_descriptor_text_length, 0x18, 0x8, true, 0x9e973e411cfdc16f)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif