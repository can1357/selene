#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_CHECKSHAREDRESOURCEACCESS.hResource", h_resource, 0x0, 0x20, true, 0x893da4ac58c2d37c)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_CHECKSHAREDRESOURCEACCESS.ClientPid", client_pid, 0x20, 0x20, true, 0xbf27545498f03752)
#else
#define _m00
#define _m01
#endif