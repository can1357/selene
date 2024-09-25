#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagSTGMEDIUM.tymed", tymed, 0x0, 0x20, true, 0xb42fd239a5ee7c46)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::hbitmap_t*), "tagSTGMEDIUM.hBitmap", h_bitmap, 0x40, 0x40, true, 0x2677c158ec9244c4)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "tagSTGMEDIUM.hMetaFilePict", h_meta_file_pict, 0x40, 0x40, true, 0x64f7c3f5c3253d80)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::henhmetafile_t*), "tagSTGMEDIUM.hEnhMetaFile", h_enh_meta_file, 0x40, 0x40, true, 0x3970f6806ca5fb6a)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "tagSTGMEDIUM.hGlobal", h_global, 0x40, 0x40, true, 0x2a0af617c72e09c2)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "tagSTGMEDIUM.lpszFileName", lpsz_file_name, 0x40, 0x40, true, 0x268ef8341013b88d)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::i_stream_t*), "tagSTGMEDIUM.pstm", pstm, 0x40, 0x40, true, 0xceeb2bf20dc83847)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::i_storage_t*), "tagSTGMEDIUM.pstg", pstg, 0x40, 0x40, true, 0xccc23e86b638427)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::i_unknown_t*), "tagSTGMEDIUM.pUnkForRelease", p_unk_for_release, 0x80, 0x40, true, 0x988c7e10575bd1c9)
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