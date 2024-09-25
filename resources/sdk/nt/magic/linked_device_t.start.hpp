#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_LINKED_DEVICE.ChainUid", chain_uid, 0x0, 0x20, true, 0x2c1e2fdc4dcc1ac5)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_LINKED_DEVICE.NumberOfLinksInChain", number_of_links_in_chain, 0x20, 0x20, true, 0x4b3a6276212be0ad)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_LINKED_DEVICE.LeadLink", lead_link, 0x40, 0x8, true, 0xede7fa091b02b4c7)
#else
#define _m00
#define _m01
#define _m02
#endif