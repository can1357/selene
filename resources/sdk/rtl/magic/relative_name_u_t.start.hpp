#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_RTL_RELATIVE_NAME_U.RelativeName", relative_name, 0x0, 0x80, true, 0x81eeaf3cedb81edf)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_RTL_RELATIVE_NAME_U.ContainingDirectory", containing_directory, 0x80, 0x40, true, 0xc921324646d6336b)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct rtlp::curdir_ref_t*), "_RTL_RELATIVE_NAME_U.CurDirRef", cur_dir_ref, 0xc0, 0x40, true, 0xd56406f165736554)
#else
#define _m00
#define _m01
#define _m02
#endif