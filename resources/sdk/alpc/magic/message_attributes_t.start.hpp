#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_ALPC_MESSAGE_ATTRIBUTES.AllocatedAttributes", allocated_attributes, 0x0, 0x20, true, 0xf388c871938e6afe)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_ALPC_MESSAGE_ATTRIBUTES.ValidAttributes", valid_attributes, 0x20, 0x20, true, 0xbb9413d6399980c3)
#else
#define _m00
#define _m01
#endif