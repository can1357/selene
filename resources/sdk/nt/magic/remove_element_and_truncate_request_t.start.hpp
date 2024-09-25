#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_REMOVE_ELEMENT_AND_TRUNCATE_REQUEST.Version", version, 0x0, 0x20, true, 0x11e4a23944fa3bb5)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_REMOVE_ELEMENT_AND_TRUNCATE_REQUEST.Size", size, 0x20, 0x20, true, 0x3963d97a9dcf6c6)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_REMOVE_ELEMENT_AND_TRUNCATE_REQUEST.RequestCapacity", request_capacity, 0x40, 0x40, true, 0x4e82c30332959773)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_REMOVE_ELEMENT_AND_TRUNCATE_REQUEST.ElementIdentifier", element_identifier, 0x80, 0x20, true, 0xff70b5f7c153ff36)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif