#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::sdword_hash_node_t), "ApartmentEntry.node", node, 0x0, 0xc0, true, 0x5c7d99bcdfd06239)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "ApartmentEntry.hCOMActivator", h_com_activator, 0xc0, 0x20, true, 0x971fbb1acd26475e)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "ApartmentEntry.hWinRTActivator", h_win_rt_activator, 0xe0, 0x20, true, 0x7728e0a6019cf58)
#else
#define _m00
#define _m01
#define _m02
#endif