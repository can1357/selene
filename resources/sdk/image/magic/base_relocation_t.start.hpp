#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_BASE_RELOCATION.VirtualAddress", virtual_address, 0x0, 0x20, true, 0x3db5a7e950beb0f0)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_BASE_RELOCATION.SizeOfBlock", size_of_block, 0x20, 0x20, true, 0xedfe060c428e54de)
#else
#define _m00
#define _m01
#endif