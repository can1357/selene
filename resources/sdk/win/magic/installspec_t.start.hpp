#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "_INSTALLSPEC.AppName.Name", name, 0x0, 0x40, true, 0x59335aba99076aac)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_INSTALLSPEC.AppName.GPOId", gpo_id, 0x40, 0x80, true, 0x6364061f349ed67d)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_app_name_t), "_INSTALLSPEC.AppName", app_name, 0x0, 0xc0, true, 0x4bb28accf56c7f33)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "_INSTALLSPEC.FileExt", file_ext, 0x0, 0x40, true, 0xf98a46a9712d240e)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "_INSTALLSPEC.ProgId", prog_id, 0x0, 0x40, true, 0x4677f5f382529b4d)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_INSTALLSPEC.COMClass.Clsid", clsid, 0x0, 0x80, true, 0xe8db90f12c666c33)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_INSTALLSPEC.COMClass.ClsCtx", cls_ctx, 0x80, 0x20, true, 0xd1f42df1eacf486)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u4_com_class_t), "_INSTALLSPEC.COMClass", com_class, 0x0, 0xa0, true, 0x500cdaed22810c1d)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif