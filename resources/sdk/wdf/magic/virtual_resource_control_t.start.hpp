#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint8_t), "_VIRTUAL_RESOURCE_CONTROL.TcVcMap", tc_vc_map, 0x0, 0x8, true, 0x4be837d3cdc555f, 8, uint32_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint8_t), "_VIRTUAL_RESOURCE_CONTROL.RsvdP1", rsvd_p1, 0x8, 0x8, true, 0x34119a28371f287, 8, uint32_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_VIRTUAL_RESOURCE_CONTROL.LoadPortArbitrationTable", load_port_arbitration_table, 0x10, 0x1, true, 0x9eed88574fac006c, 1, uint32_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_VIRTUAL_RESOURCE_CONTROL.PortArbitrationSelect", port_arbitration_select, 0x11, 0x3, true, 0xb14ea045af164018, 3, uint32_t)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "_VIRTUAL_RESOURCE_CONTROL.RsvdP2", rsvd_p2, 0x14, 0x4, true, 0x835d28ff396304bb, 4, uint32_t)
#define _m05 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_VIRTUAL_RESOURCE_CONTROL.VcID", vc_id, 0x18, 0x3, true, 0xc0a0dd3494d17d14, 3, uint32_t)
#define _m06 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "_VIRTUAL_RESOURCE_CONTROL.RsvdP3", rsvd_p3, 0x1b, 0x4, true, 0x57fd2b56273edb9a, 4, uint32_t)
#define _m07 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_VIRTUAL_RESOURCE_CONTROL.VcEnable", vc_enable, 0x1f, 0x1, true, 0x6509892242908f92, 1, uint32_t)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_VIRTUAL_RESOURCE_CONTROL.AsULONG", as_ulong, 0x0, 0x20, true, 0x47fad46da32cce3a)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#endif