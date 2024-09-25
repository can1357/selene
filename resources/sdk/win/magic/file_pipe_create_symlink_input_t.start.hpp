#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_FILE_PIPE_CREATE_SYMLINK_INPUT.NameOffset", name_offset, 0x0, 0x10, true, 0x954a3b9b317abf75)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_FILE_PIPE_CREATE_SYMLINK_INPUT.NameLength", name_length, 0x10, 0x10, true, 0x3be732ab124a1add)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_FILE_PIPE_CREATE_SYMLINK_INPUT.SubstituteNameOffset", substitute_name_offset, 0x20, 0x10, true, 0x2794bcc08907d3c5)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_FILE_PIPE_CREATE_SYMLINK_INPUT.SubstituteNameLength", substitute_name_length, 0x30, 0x10, true, 0x18a9fd07bdb34282)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_PIPE_CREATE_SYMLINK_INPUT.Flags", flags, 0x40, 0x20, true, 0xd84d71cd57257b23)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif