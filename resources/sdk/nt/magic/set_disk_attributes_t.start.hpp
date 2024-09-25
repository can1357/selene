#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SET_DISK_ATTRIBUTES.Version", version, 0x0, 0x20, true, 0xd1e34304e7e40c74)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_SET_DISK_ATTRIBUTES.Persist", persist, 0x20, 0x8, true, 0xedd9d31aa22ab3e7)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_SET_DISK_ATTRIBUTES.RelinquishOwnership", relinquish_ownership, 0x28, 0x8, true, 0x3e7cf15a41ab8780)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_SET_DISK_ATTRIBUTES.Attributes", attributes, 0x40, 0x40, true, 0x193acc934c9efb53)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_SET_DISK_ATTRIBUTES.AttributesMask", attributes_mask, 0x80, 0x40, true, 0xb9b1fb5600c3737d)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_SET_DISK_ATTRIBUTES.Owner", owner, 0xc0, 0x80, true, 0xb6d691efb910f3b7)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif