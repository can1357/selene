#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::object_header_t), "_NDIS_QOS_CLASSIFICATION_ELEMENT.Header", header, 0x0, 0x20, true, 0x65cb9d07fe45b8b8)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_QOS_CLASSIFICATION_ELEMENT.Flags", flags, 0x20, 0x20, true, 0xb22ddc636a3656c5)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_NDIS_QOS_CLASSIFICATION_ELEMENT.ConditionSelector", condition_selector, 0x40, 0x10, true, 0x7d1e93c74cd9d948)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_NDIS_QOS_CLASSIFICATION_ELEMENT.ConditionField", condition_field, 0x50, 0x10, true, 0x9785e4ffec282750)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_NDIS_QOS_CLASSIFICATION_ELEMENT.ActionSelector", action_selector, 0x60, 0x10, true, 0x89a5a85d6a932da2)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_NDIS_QOS_CLASSIFICATION_ELEMENT.ActionField", action_field, 0x70, 0x10, true, 0x2091e09542ac061a)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif