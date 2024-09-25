#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_BLOCKLIST_INFO.Size", size, 0x0, 0x20, true, 0xdd6829d7cfa5dd70)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 1>), "_D3DKMT_BLOCKLIST_INFO.BlockList", block_list, 0x20, 0x10, true, 0x345ed193da5c7d83)
#else
#define _m00
#define _m01
#endif