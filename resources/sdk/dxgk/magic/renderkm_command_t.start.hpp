#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum dxgk::renderkm_operation_t), "_DXGK_RENDERKM_COMMAND.OpCode", op_code, 0x0, 0x20, true, 0x7a9aa5a7b3b43b88)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_RENDERKM_COMMAND.CommandSize", command_size, 0x20, 0x20, true, 0x345bc4601af09cb2)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxgk::gdiarg_bitblt_t), "_DXGK_RENDERKM_COMMAND.Command.BitBlt", bit_blt, 0x0, 0x40, true, 0xafe584fb20653d83)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxgk::gdiarg_colorfill_t), "_DXGK_RENDERKM_COMMAND.Command.ColorFill", color_fill, 0x0, 0x40, true, 0x91ad84f3eef2be42)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxgk::gdiarg_alphablend_t), "_DXGK_RENDERKM_COMMAND.Command.AlphaBlend", alpha_blend, 0x0, 0x0, true, 0x8a3ad777832532fc)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxgk::gdiarg_stretchblt_t), "_DXGK_RENDERKM_COMMAND.Command.StretchBlt", stretch_blt, 0x0, 0x0, true, 0x8c70b61b41d4f85c)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxgk::gdiarg_transparentblt_t), "_DXGK_RENDERKM_COMMAND.Command.TransparentBlt", transparent_blt, 0x0, 0x0, true, 0xc20ac8351c26f1d9)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxgk::gdiarg_cleartypeblend_t), "_DXGK_RENDERKM_COMMAND.Command.ClearTypeBlend", clear_type_blend, 0x0, 0x40, true, 0x71eedb8a04a772c8)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u0_command_t), "_DXGK_RENDERKM_COMMAND.Command", command, 0x40, 0x40, true, 0x95b04fecdbaab004)
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